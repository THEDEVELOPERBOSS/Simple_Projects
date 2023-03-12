#include<iostream>
#include<string> // maybe incorperate this program when I build JARVIS
using namespace std;
// putting the variables outside of int main makes it so it is a global variable
// below are the task variables
    string todo1;
    string todo1T; // the T at the end signals that they are the variables to store the type of task they are
    string todo2;
    string todo2T;
    /// @brief 
    string todo3;
    string todo3T;
    string todo4;
    string todo4T;
    string todo5;
    string todo5T;
    // below are the varaibles that will set the order
    string order1;
    string order2;
    string order3;
    string order4;
    string order5;
    // below are the variables to check to see if they equal so I don't ahve to type it out every time
    string SchoolC = "School";
    string CodeC = "Code";
    string PersC = "Personal";
    string CrunchC = "CrunchLabs";
    string FitC = "Fitness";
    // blank variable
    string BL = "<Blank>";

void order_Maker() // void functions don't need return 0
{ // these will be all the if else statments to say if todo1T is school to put it first
     // todo1 assignment is down here
        if (todo1T == SchoolC) 
        {
            order1 = todo1;
        }
        else if (todo2T == SchoolC) 
        {
            order1 = todo2;
        }
        else if (todo3T == SchoolC) 
        {
            order1 = todo3;
        }
        else if (todo4T == SchoolC) 
        {
            order1 = todo4;
        }
        else if (todo5T == SchoolC) 
        {
            order1 = todo5;    
        }
        else
        {
            order1 == BL;
        }

         // todo3 assignment is down here
        if (todo1T == CodeC)
        { 
            order2 = todo1;
        }
        else if (todo2T == CodeC) 
        {
            order2 = todo2;
        }
        else if (todo3T == CodeC) 
        {
            order2 = todo3;
        }
        else if (todo4T ==CodeC) 
        {
            order2 = todo4;
        }
        else if (todo5T == CodeC) 
        {
            order2 = todo5;    
        }
        else 
        {
            order2 == BL;
        }

         // todo4 assignment is down here
        if (todo1 == PersC)
        {
            order3 = todo1;
        }
        else if (todo2T == PersC) 
        {
            order3 = todo2;
        }
        else if (todo3T == PersC) 
        {
            order3 = todo3;
        }
        else if (todo4T == PersC) 
        {
            order3 = todo4;
        }
        else if (todo5T == PersC) 
        {
            order3 = todo5;    
        }
        else 
        {
            order3 == BL;    
        }

        // todo4 assignment is down here
        if (todo1T == FitC)
        {
            order4 = todo1;
        }
        else if (todo2T == FitC) 
        {
            order4 = todo2;
        }
        else if (todo3T == FitC) 
        {
            order4 = todo3;
        }
        else if (todo4T == FitC) 
        {
            order4 = todo4;
        }
        else if (todo5T == FitC) 
        {
            order4 = todo5;    
        }
        else {
            order4 == BL;
        }

         // todo5 assignment is down here
        if (todo1T == CrunchC) 
        {
            order5 = todo1;
        }
        else if (todo2T == CrunchC) 
        {
            order5 = todo2;
        }
        else if (todo3T == CrunchC) 
        {
            order5 = todo3;
        }
        else if (todo4T == CrunchC) 
        {
            order5 = todo4;
        }
        else if (todo5T == CrunchC) 
        {
            order5 = todo5;    
        }
        else {
            order5 == BL;
        }
}
int main() 
{ // figure out how to add audio in here later
    cout << "Welcome back sir\n";
    cout << "Remember to leave this open for the day\n";

    cout << "Enter what your tasks for today are sir\nFollow them with the type School, Code, Personal, CrunchLabs, or Fitness\n";
    getline (cin, todo1);
    getline (cin, todo1T);
    getline (cin, todo2);
    getline (cin, todo2T);
    getline (cin, todo3);
    getline (cin, todo3T);
    getline (cin, todo4T);
    
    order_Maker();

    cout << "Here is what order you should do them in for maximum productivty \n";
    cout << "1 " << order1 << " \n";
    cout << "2 " << order2 << " \n";
    cout << "3 " << order3 << " \n";
    cout << "4 " << order4 << " \n";
    cout << "5 " << order5 << " \n";
    return 0;
}
