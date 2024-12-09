import json
import threading
import time
from random import randint

# Class to manage tasks
class TaskManager:
    def __init__(self):
        self.tasks = []
    
    def add_task(self, task_name, duration):
        task = {"name": task_name, "duration": duration, "status": "pending"}
        self.tasks.append(task)
    
    def save_to_file(self, filename):
        with open(filename, "w") as file:
            json.dump(self.tasks, file, indent=4)
    
    def load_from_file(self, filename):
        with open(filename, "r") as file:
            self.tasks = json.load(file)
    
    def display_tasks(self):
        print("\nCurrent Tasks:")
        for task in self.tasks:
            print(f"Task: {task['name']}, Duration: {task['duration']}s, Status: {task['status']}")

# Function to execute a task
def execute_task(task, lock):
    with lock:
        print(f"Starting task: {task['name']}...")
    time.sleep(task["duration"])
    with lock:
        task["status"] = "completed"
        print(f"Completed task: {task['name']}!")

# Main program
if __name__ == "__main__":
    manager = TaskManager()
    lock = threading.Lock()

    # Adding tasks
    manager.add_task("Download File", randint(2, 5))
    manager.add_task("Process Data", randint(3, 6))
    manager.add_task("Send Email", randint(1, 4))
    
    # Display tasks
    manager.display_tasks()

    # Save tasks to file
    manager.save_to_file("tasks.json")

    # Run tasks in separate threads
    threads = []
    for task in manager.tasks:
        thread = threading.Thread(target=execute_task, args=(task, lock))
        threads.append(thread)
        thread.start()
    
    # Wait for all threads to finish
    for thread in threads:
        thread.join()
    
    # Display tasks after execution
    manager.display_tasks()
    
    # Save updated tasks to file
    manager.save_to_file("tasks.json")
                  