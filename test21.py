from chatterbot import ChatBot
from chatterbot.trainers import ListTrainer

# إنشاء البوت
chatbot = ChatBot(
    "AdvancedMahmoudBot",
    logic_adapters=[
        'chatterbot.logic.BestMatch',
        'chatterbot.logic.MathematicalEvaluation'
    ],
    database_uri='sqlite:///custom_database.sqlite3'
)

# تدريب البوت باستخدام بيانات مخصصة
trainer = ListTrainer(chatbot)

# أمثلة للردود المخصصة
conversation = [
    "ما اسمك؟",
    "أنا بوت اسمي محمود بوت.",
    "كيف حالك؟",
    "أنا بخير، شكرًا لسؤالك!",
    "ما هي البرمجة؟",
    "البرمجة هي عملية كتابة التعليمات لتوجيه الكمبيوتر.",
    "ما أفضل لغة برمجة؟",
    "أفضل لغة تعتمد على المشروع، لكن Python شائعة وسهلة."
]

trainer.train(conversation)

# بدء المحادثة
print("مرحبًا! أنا بوت ذكي يمكنك سؤالي أي شيء.")
while True:
    user_input = input("أنت: ")
    if user_input.lower() in ["خروج", "مع السلامة", "bye"]:
        print("بوت: مع السلامة! سررت بالتحدث معك.")
        break
    response = chatbot.get_response(user_input)
    print(f"بوت: {response}")
