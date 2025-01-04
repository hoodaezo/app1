// دالة لتحديث التاريخ
function updateDate() {
    const now = new Date(); // الحصول على التاريخ الحالي
    let day = now.getDate(); // الحصول على اليوم
    let month = now.getMonth(); // الحصول على الشهر (من 0 إلى 11)
    let year = now.getFullYear(); // الحصول على السنة

    // إضافة صفر إلى الأرقام الفردية (تنسيق 09 بدلًا من 9)
    day = day < 10 ? '0' + day : day;
    month = month < 9 ? '0' + (month + 1) : (month + 1); // الشهر يبدأ من 0، لذا نضيف 1

    // تحديث عنصر التاريخ بالنص الجديد
    const date = document.getElementById('date');
    date.textContent = `${day}/${month}/${year}`;
}

// تحديث التاريخ عند بداية اليوم بدقة
function scheduleDateUpdate() {
    updateDate(); // تحديث التاريخ فورًا
    const now = new Date();
    const timeToMidnight =
        new Date(now.getFullYear(), now.getMonth(), now.getDate() + 1).getTime() - now.getTime();

    setTimeout(() => {
        updateDate(); // تحديث التاريخ عند منتصف الليل
        setInterval(updateDate, 1000 * 60 * 60 * 24); // التحديث يوميًا بعد ذلك
    }, timeToMidnight);
}

// استدعاء الجدولة
scheduleDateUpdate();
