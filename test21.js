// دالة لتحديث الوقت في الساعة
function updateClock() {
    const now = new Date(); // الحصول على الوقت الحالي
    let hours = now.getHours(); // الحصول على الساعات
    let minutes = now.getMinutes(); // الحصول على الدقائق
    let seconds = now.getSeconds(); // الحصول على الثواني

    // إضافة صفر إلى الأرقام الفردية (تنسيق 09 بدلًا من 9)
    hours = hours < 10 ? '0' + hours : hours;
    minutes = minutes < 10 ? '0' + minutes : minutes;
    seconds = seconds < 10 ? '0' + seconds : seconds;

    // تحديث عنصر الساعة بالنص الجديد
    const clock = document.getElementById('clock');
    clock.textContent = `${hours}:${minutes}:${seconds}`;
}

// تحديث الساعة كل ثانية
setInterval(updateClock, 1000);


// استدعاء دوال التحديث لأول مرة لتجنب التأخير
updateClock();