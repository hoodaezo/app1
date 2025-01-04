// الانتظار حتى يتم تحميل الصفحة بالكامل
document.addEventListener("DOMContentLoaded", () => {
    // خاصية التمرير السلس عند النقر على الروابط داخل شريط التنقل
    const navLinks = document.querySelectorAll('.nav-link'); // الحصول على جميع الروابط داخل شريط التنقل

    navLinks.forEach(link => {
        link.addEventListener('click', (e) => {
            e.preventDefault(); // منع السلوك الافتراضي للرابط
            const targetId = link.getAttribute('href').substring(1); // الحصول على القسم المطلوب (إزالة # من الرابط)
            const targetSection = document.getElementById(targetId); // تحديد القسم
            if (targetSection) {
                targetSection.scrollIntoView({ behavior: 'smooth' }); // التمرير بسلاسة إلى القسم
            }
        });
    });

    // معالجة إرسال نموذج التواصل
    const contactForm = document.querySelector('form'); // تحديد نموذج الاتصال
    contactForm.addEventListener('submit', (e) => {
        e.preventDefault(); // منع إعادة تحميل الصفحة عند الإرسال
        alert('Thank you for reaching out! We will get back to you soon.'); // عرض رسالة تأكيد
        contactForm.reset(); // إعادة تعيين الحقول داخل النموذج
    });
});
