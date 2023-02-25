console.log('JavaScript is rad') //  use ctrl,shift, i on the webpage to see it 
var number = 5;
var string ='Hello There'; // using the console is good for debugging(random note)
var isRad = true;
if (number == 10) {
    console.log("Yeah buddy");
}
else {
    console.log ("Nope!");
}
document.getElementById('box').innerHTML = number + 5; // javascript is good for when you need to do math and things like that in HTML
for(var i = 0; i < 10; i++ ) {

    console.log(i);
}

var groceries = ['Milk', 'Eggs', 'Cheese'];

function listGroceries() {
    for(var i = 0; i < groceries.length; i++ ) {
        console.log(groceries[i]);
    }
}

listGroceries();

document.getElementById('box').addEventListener('click', function() {
    alert('I got clicked');
})