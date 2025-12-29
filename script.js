const display = document.getElementById("display");
let divzero = false;
function appenddisplay(input){
	display.value += input;
}
function cleardisplay(){
	display.value = "";
}
function calculate(){
	 try {
        let result = eval(display.value);

        if (result === Infinity || result === -Infinity) {
            display.value = "Division by zero";
        } else if (isNaN(result)) {
            display.value = "N/A";
        } else {
            display.value = result;
        }
    } catch (error) {
        display.value = "N/A";
    }
}