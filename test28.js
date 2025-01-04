
  // إعدادات اللعبة
  const canvas = document.getElementById('gameCanvas'); // الحصول على عنصر اللوحة (canvas) من الـ HTML
  const ctx = canvas.getContext('2d'); // تحديد سياق الرسم ثنائي الأبعاد
  const box = 40; // حجم كل مربع داخل اللعبة (وحدة القياس الأساسية)

  // إعداد الثعبان
  let snake = []; // مصفوفة تمثل الثعبان، كل عنصر فيها يمثل جزءًا من جسم الثعبان
  snake[0] = { x: 9 * box, y: 10 * box }; // تحديد موقع البداية لرأس الثعبان في منتصف اللوحة تقريبًا

  // إعداد الطعام
  let food = {
    x: Math.floor(Math.random() * 19 + 1) * box, // تحديد موقع عشوائي للطعام على المحور X
    y: Math.floor(Math.random() * 19 + 1) * box  // تحديد موقع عشوائي للطعام على المحور Y
  };

  // الاتجاه الافتراضي
  let direction; // المتغير الذي يخزن اتجاه حركة الثعبان

  // النتيجة
  let score = 0; // لتخزين نتيجة اللاعب

  // التحكم في الثعبان
  document.addEventListener('keydown', setDirection); // إضافة مستمع للأحداث لتغيير اتجاه الثعبان عند الضغط على الأسهم

  function setDirection(event) {
    // التحقق من زر السهم المضغوط وتغيير الاتجاه
    if (event.key === 'ArrowUp' && direction !== 'DOWN') direction = 'UP';
    else if (event.key === 'ArrowDown' && direction !== 'UP') direction = 'DOWN';
    else if (event.key === 'ArrowLeft' && direction !== 'RIGHT') direction = 'LEFT';
    else if (event.key === 'ArrowRight' && direction !== 'LEFT') direction = 'RIGHT';
  }

  // رسم اللعبة
  function drawGame() {
    // رسم الخلفية السوداء
    ctx.fillStyle = '#000'; // تحديد اللون الأسود للخلفية
    ctx.fillRect(0, 0, canvas.width, canvas.height); // ملء اللوحة بالكامل باللون الأسود

    // رسم الثعبان
    for (let i = 0; i < snake.length; i++) {
      ctx.fillStyle = i === 0 ? '#0f0' : '#0a0'; // تحديد لون الرأس (أخضر فاتح) والجسم (أخضر غامق)
      ctx.fillRect(snake[i].x, snake[i].y, box, box); // رسم كل جزء من الثعبان كـ مربع
      ctx.strokeStyle = '#000'; // إضافة حدود سوداء لكل جزء
      ctx.strokeRect(snake[i].x, snake[i].y, box, box);
    }

    // رسم الطعام
    ctx.fillStyle = '#f00'; // تحديد لون الطعام (أحمر)
    ctx.fillRect(food.x, food.y, box, box); // رسم الطعام كمربع في الموقع المحدد

    // تحديد موقع رأس الثعبان
    let snakeX = snake[0].x; // إحداثيات المحور X للرأس
    let snakeY = snake[0].y; // إحداثيات المحور Y للرأس

    // تحديث موقع الرأس بناءً على الاتجاه
    if (direction === 'UP') snakeY -= box; // التحرك لأعلى
    if (direction === 'DOWN') snakeY += box; // التحرك لأسفل
    if (direction === 'LEFT') snakeX -= box; // التحرك لليسار
    if (direction === 'RIGHT') snakeX += box; // التحرك لليمين

    // التحقق من أكل الطعام
    if (snakeX === food.x && snakeY === food.y) {
      score++; // زيادة النتيجة بمقدار 1
      // توليد موقع جديد للطعام
      food = {
        x: Math.floor(Math.random() * 19 + 1) * box,
        y: Math.floor(Math.random() * 19 + 1) * box
      };
    } else {
      // إزالة الذيل إذا لم يأكل الطعام
      snake.pop();
    }

    // إضافة رأس جديد بناءً على الاتجاه
    const newHead = { x: snakeX, y: snakeY };

    // التحقق من التصادم مع الجدار أو الجسم
    if (
      snakeX < 0 || // إذا اصطدم بالجدار الأيسر
      snakeY < 0 || // إذا اصطدم بالجدار العلوي
      snakeX >= canvas.width || // إذا اصطدم بالجدار الأيمن
      snakeY >= canvas.height || // إذا اصطدم بالجدار السفلي
      collision(newHead, snake) // إذا اصطدم بجسمه
    ) {
      clearInterval(game); // إيقاف اللعبة
      alert('انتهت اللعبة! نتيجتك: ' + score); // عرض رسالة انتهاء اللعبة مع النتيجة
    }

    snake.unshift(newHead); // إضافة الرأس الجديد إلى بداية الثعبان

    // عرض النتيجة
    ctx.fillStyle = '#fff'; // تحديد لون النص
    ctx.font = '20px Arial'; // إعداد الخط
    ctx.fillText('Score: ' + score, 10, 20); // رسم النص في أعلى اللوحة
  }

  // وظيفة للتحقق من التصادم مع جسم الثعبان
  function collision(head, array) {
    // التحقق إذا كان الرأس يتداخل مع أي جزء من جسم الثعبان
    for (let i = 0; i < array.length; i++) {
      if (head.x === array[i].x && head.y === array[i].y) {
        return true; // في حالة التصادم
      }
    }
    return false; // لا يوجد تصادم
  }

  // تحديث اللعبة كل 100 مللي ثانية
  const game = setInterval(drawGame, 100); // استدعاء دالة الرسم بشكل دوري لتحديث اللعبة

