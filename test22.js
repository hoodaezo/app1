// إعدادات اللعبة
const boardSize = 20; // حجم اللوحة (20x20 خانات)
const gameBoard = document.getElementById('gameBoard');
const scoreElement = document.getElementById('score');

// إنشاء لوحة اللعبة
for (let i = 0; i < boardSize * boardSize; i++) {
    const div = document.createElement('div');
    gameBoard.appendChild(div);
}

// موقع الثعبان والطعام
let snake = [2, 1, 0]; // الثعبان يبدأ بثلاث خانات
let direction = 1; // الحركة (1 خانة لليمين)
let food = Math.floor(Math.random() * boardSize * boardSize); // موقع الطعام العشوائي
let score = 0;
let intervalTime = 200; // سرعة اللعبة
let interval;

// تحديث اللعبة
function updateGame() {
    const squares = gameBoard.querySelectorAll('div');

    // تحقق إذا كان الثعبان يصطدم بجدار أو بنفسه
    if (
        (snake[0] % boardSize === boardSize - 1 && direction === 1) || // اصطدام بالجدار الأيمن
        (snake[0] % boardSize === 0 && direction === -1) || // اصطدام بالجدار الأيسر
        (snake[0] - boardSize < 0 && direction === -boardSize) || // اصطدام بالجدار العلوي
        (snake[0] + boardSize >= boardSize * boardSize && direction === boardSize) || // اصطدام بالجدار السفلي
        squares[snake[0] + direction]?.classList.contains('snake') // اصطدام بنفسه
    ) {
        clearInterval(interval);
        alert('انتهت اللعبة! النتيجة: ' + score);
        return;
    }

    // إزالة الجزء الأخير من الثعبان
    const tail = snake.pop();
    squares[tail].classList.remove('snake');

    // إضافة جزء جديد في الاتجاه الحالي
    const head = snake[0] + direction;
    snake.unshift(head);

    // تحقق إذا كان الثعبان يأكل الطعام
    if (head === food) {
        squares[tail].classList.add('snake');
        snake.push(tail);
        food = Math.floor(Math.random() * boardSize * boardSize);
        squares[food].classList.add('food');
        score++;
        scoreElement.textContent = score;
        clearInterval(interval);
        intervalTime *= 0.9; // تسريع اللعبة
        interval = setInterval(updateGame, intervalTime);
    }

    // إضافة الرأس الجديد
    squares[head].classList.add('snake');

    // عرض الطعام
    squares[food].classList.add('food');
}

// التحكم في حركة الثعبان
function control(e) {
    switch (e.key) {
        case 'ArrowUp':
            direction = -boardSize; // الحركة لأعلى
            break;
        case 'ArrowDown':
            direction = boardSize; // الحركة لأسفل
            break;
        case 'ArrowLeft':
            direction = -1; // الحركة لليسار
            break;
        case 'ArrowRight':
            direction = 1; // الحركة لليمين
            break;
    }
}

// بدء اللعبة
function startGame() {
    const squares = gameBoard.querySelectorAll('div');
    squares.forEach(square => square.classList.remove('snake', 'food'));
    snake = [2, 1, 0];
    direction = 1;
    score = 0;
    scoreElement.textContent = score;
    food = Math.floor(Math.random() * boardSize * boardSize);
    intervalTime = 200;
    snake.forEach(index => squares[index].classList.add('snake'));
    squares[food].classList.add('food');
    clearInterval(interval);
    interval = setInterval(updateGame, intervalTime);
}

// بدء اللعبة عند التحميل
startGame();
document.addEventListener('keydown', control);
