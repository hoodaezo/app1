// JavaScript Code

// وظيفة للتمرير إلى قسم معين
function scrollToSection(sectionId) {
    const section = document.getElementById(sectionId); // الحصول على العنصر بواسطة ID
    if (section) {
        section.scrollIntoView({ behavior: 'smooth' }); // التمرير السلس إلى العنصر
    }
}

// معالجة إرسال نموذج التواصل
const contactForm = document.getElementById('contact-form'); // الحصول على نموذج التواصل
if (contactForm) {
    contactForm.addEventListener('submit', function (event) {
        event.preventDefault(); // منع الإرسال الافتراضي للنموذج

        // الحصول على القيم المدخلة
        const name = document.getElementById('name').value;
        const email = document.getElementById('email').value;
        const message = document.getElementById('message').value;

        // التحقق من صحة الحقول
        if (name && email && message) {
            alert(`Thank you, ${name}! Your message has been sent.`); // رسالة نجاح
            contactForm.reset(); // إعادة تعيين الحقول
        } else {
            alert('Please fill out all fields before submitting.'); // رسالة خطأ
        }
    });
}
