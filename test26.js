// إنشاء متغير لتخزين الرقم العشوائي بين 1 و 100
let randomNumber = Math.floor(Math.random() * 100) + 1; 
// Math.random() يولد رقمًا عشريًا بين 0 و 1
// Math.floor() يحذف الجزء العشري
// +1 يجعل الرقم بين 1 و 100 بدلاً من 0 و 99

// متغير لتتبع عدد المحاولات
let attempts = 0; 

// الحصول على العناصر من HTML باستخدام ID
const guessInput = document.getElementById('guess'); // حقل إدخال المستخدم
const submitButton = document.getElementById('submitGuess'); // زر التخمين
const message = document.getElementById('message'); // رسالة النتيجة
const attemptsDisplay = document.getElementById('attempts'); // عرض عدد المحاولات

// إضافة مستمع للأحداث عند النقر على زر "Submit"
submitButton.addEventListener('click', function () {
    // تحويل المدخل إلى رقم صحيح
    const userGuess = parseInt(guessInput.value); 

    // التحقق إذا كان الإدخال صحيحًا
    if (isNaN(userGuess) || userGuess < 1 || userGuess > 100) {
        message.textContent = 'Please enter a number between 1 and 100!';
        message.style.color = 'orange'; // تغيير لون النص
        return; // الخروج من الوظيفة إذا كان الإدخال غير صحيح
    }

    // زيادة عدد المحاولات
    attempts++;
    attemptsDisplay.textContent = attempts; // تحديث عرض عدد المحاولات

    // التحقق من تخمين المستخدم
    if (userGuess === randomNumber) {
        message.textContent = 'Congratulations! You guessed the number!';
        message.style.color = 'green'; // تغيير لون النص إلى الأخضر
        submitButton.disabled = true; // تعطيل الزر بعد الفوز
    } else if (userGuess < randomNumber) {
        message.textContent = 'Too low! Try again.';
        message.style.color = 'blue'; // لون أزرق للتلميح
    } else {
        message.textContent = 'Too high! Try again.';
        message.style.color = 'blue'; // لون أزرق للتلميح
    }

    // تنظيف حقل الإدخال لتسهيل المحاولة التالية
    guessInput.value = '';
});
