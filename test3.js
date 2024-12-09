function appendValue(value) {
    document.getElementById('result').value += value;
}

function clearResult() {
    document.getElementById('result').value = '';
}

function calculateResult() {
    try {
        let result = eval(document.getElementById('result').value);
        document.getElementById('result').value = result;
    } catch (error) {
        document.getElementById('result').value = 'Error';
    }
}

function calculateSquareRoot() {
    try {
        let value = parseFloat(document.getElementById('result').value);
        let result = Math.sqrt(value);
        document.getElementById('result').value = result;
    } catch (error) {
        document.getElementById('result').value = 'Error';
    }
}

function toggleTheme() {
    document.body.classList.toggle('dark-mode');
}
function appendValue(value) {
    document.getElementById('result').value += value;
}

function clearResult() {
    document.getElementById('result').value = '';
}

function calculateResult() {
    try {
        let result = eval(document.getElementById('result').value);
        document.getElementById('result').value = result;
    } catch (error) {
        document.getElementById('result').value = 'Error';
    }
}

function calculateSquareRoot() {
    try {
        let value = parseFloat(document.getElementById('result').value);
        let result = Math.sqrt(value);
        document.getElementById('result').value = result;
    } catch (error) {
        document.getElementById('result').value = 'Error';
    }
}

function toggleTheme() {
    document.body.classList.toggle('dark-mode');
}
