// تعريف الفئة الأساسية "Book"
class Book {
    /**
     * منشئ الفئة الذي يقوم بتعريف خصائص الكتاب
     * @param {string} title - عنوان الكتاب
     * @param {string} author - مؤلف الكتاب
     * @param {number} year - سنة النشر
     */
    constructor(title, author, year) {
      this.title = title; // عنوان الكتاب
      this.author = author; // اسم المؤلف
      this.year = year; // سنة النشر
    }
  
    /**
     * دالة تعرض معلومات الكتاب
     * @returns {string} - معلومات عن الكتاب
     */
    getDetails() {
      return `${this.title} by ${this.author}, published in ${this.year}`;
    }
  }
  
  // تعريف فئة فرعية "EBook" ترث من الفئة "Book"
  class EBook extends Book {
    /**
     * منشئ الفئة الفرعية
     * @param {string} title - عنوان الكتاب
     * @param {string} author - مؤلف الكتاب
     * @param {number} year - سنة النشر
     * @param {number} fileSize - حجم الملف بالميجابايت
     */
    constructor(title, author, year, fileSize) {
      super(title, author, year); // استدعاء منشئ الفئة الأساسية
      this.fileSize = fileSize; // حجم الملف
    }
  
    /**
     * دالة تعرض معلومات الكتاب الإلكتروني
     * @returns {string} - معلومات عن الكتاب الإلكتروني
     */
    getDetails() {
      return `${super.getDetails()} [E-Book, File size: ${this.fileSize} MB]`;
    }
  }
  
  // تعريف فئة أخرى "AudioBook" ترث من الفئة "Book"
  class AudioBook extends Book {
    /**
     * منشئ الفئة الفرعية
     * @param {string} title - عنوان الكتاب
     * @param {string} author - مؤلف الكتاب
     * @param {number} year - سنة النشر
     * @param {number} duration - مدة الكتاب الصوتي بالساعات
     */
    constructor(title, author, year, duration) {
      super(title, author, year); // استدعاء منشئ الفئة الأساسية
      this.duration = duration; // مدة الكتاب الصوتي
    }
  
    /**
     * دالة تعرض معلومات الكتاب الصوتي
     * @returns {string} - معلومات عن الكتاب الصوتي
     */
    getDetails() {
      return `${super.getDetails()} [Audio Book, Duration: ${this.duration} hours]`;
    }
  }
  
  // إنشاء كائنات من الفئات
  const book1 = new Book("The Great Gatsby", "F. Scott Fitzgerald", 1925);
  const ebook1 = new EBook("Digital Fortress", "Dan Brown", 1998, 1.5);
  const audioBook1 = new AudioBook("Becoming", "Michelle Obama", 2018, 19);
  
  // عرض المعلومات
  console.log(book1.getDetails()); // عرض معلومات الكتاب العادي
  console.log(ebook1.getDetails()); // عرض معلومات الكتاب الإلكتروني
  console.log(audioBook1.getDetails()); // عرض معلومات الكتاب الصوتي
  