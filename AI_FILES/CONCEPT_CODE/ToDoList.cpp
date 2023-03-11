#include<iostream>
#include<string> // maybe incorperate this program when I build JARVIS
using namespace std;
// putting the variables outside of int main makes it so it is a global variable
// below are the task variables
    string todo1 = "<Blank>";
    string todo1T = "<Blank>"; // the T at the end signals that they are the variables to store the type of task they are
    string todo2 = "<Blank";
    string todo2T = "<Blank>";
    string todo3 = "<Blank>";
    string todo3T = "<Blank>";
    string todo4 = "<Blank>";
    string todo4T = "<Blank>";
    string todo5 = "<Blank>";
    string todo5T = "<Blank>";
    // below are the varaibles that will set the order
    string order1 = "<Blank>";
    string order2 = "<Blank>";
    string order3 = "<Blank>";
    string order4 = "<Blank>";
    string order5 = "<Blank>";
void order_Maker() // void functions don't need return 0
{
    if (todo1T == "School") {
        order1 == todo1;
    }
}

int main() 
{ // figure out how to add audio in here later
    cout << "Welcome back sir\n";
    cout << "Remember to leave this open for the day\n";

    cout << "Enter what your tasks for today are sir\n Follow them with the type Homework, Code, Personal, CrunchLabs, or Fitness\n";
    cin >> todo1;
    cin >> todo1T;
    cin >> todo2;
    cin >> todo2T;
    cin >> todo3;
    cin >> todo3T;
    cin >> todo4T;
    // figure out how to make it so the things get put in a certain order
    
    order_Maker();

    cout << "Here is what order you should do them in for maximum productivty \n";
    cout << todo1 << " \n";
    cout << todo2 << " \n";
}
