#include<iostream>
#include<string>
using namespace std;
  // these are the variables
   string Raptor = "Ford Raptor";
   string Rstatus = "Available";
   int Ryear = 2020;
   string rName;
   string Rdate;
   // int rNum = 1;
   //(above) variables for the Ford Raptor
   //(below) variables for the Jeep Cherokee
	 string Jeep = "Jeep Cheorkee";
   string Jstatus = "Available";
   int Jyear = 2001;
   string Jname;
   string Jdate;
   // int jNum = 2; 
  //(below) variables for the Dodge Charger
	 string Charger = "Dodge Charger";
	 string Cstatus = "Not Currently Available";
   int Cyear = 2016;
   string Cname; // this variable set will allow me to check the name of the renter to make sure it's the right person
   string Cdate;
   // int cNum = 3;
  // (below) variables for the first car to add 
   string caroneYc = "0000";
   string caroneNc = "car"; 
   string caroneN = "car"; // name of car
   string caroneY = "0000"; // year model of car
   string Oname;
  //(below) variables for the second car to add
   string cartwoYc = "0000";// these two just help verify that there is nothing else
   string cartwoNc = "car"; 
   string cartwoN = "car"; // name of car
   string cartwoY = "0000"; // year model of car
   string Tname;
   // choosing what car (below)
   // etc
   string carWant;
   string carReturn = "Car";
   string eChoice = "a";
   string nVail = "Not Currently Available";
   string aVail = "Available";
   string DateR = "00/00/00"; // this will allow us to reset the car date variable so the program can run multiple times
   const int code = 2681; // this is the password that employees will need to enter to add cars and ______ etc;
   int codeChoice = 0;
// this is the return function

char submenurn() {
  cout << "What is the car that you are returning?\n ";
  getline (cin, carReturn);
  if (carReturn == Raptor) 
  {
    Rstatus = aVail; // add in a name checking thing
    cout << "What is your name?";
    getline (cin, rName);
  }
  return 0;
 }

// this is the menu that will run if an employee or customer is returnig a car
char submenure() {
  cout << "These are the cars:\n";
					cout << Raptor << " is currently " << Rstatus << " Type Ford Raptor" <<" \n"; 
					cout << Jeep << " is currently " << Jstatus << " Type Jeep Cheorkee"<< " \n";
					cout << Charger << " is currently " << Cstatus << " Type Dodge Charger" << " \n";
					cout << "Type what car you would like to rent" << " \n";
          getline (cin, carWant);
          if (carWant == Raptor) {
            Rstatus = nVail;
            cout << "Please enter today's date.\n";
            getline (cin, Rdate);
            cout << "What is your name?\n";
            getline (cin, rName);
            cout << "Please return the car within one month";
          }
          else if (carWant == Jeep) {
            Jstatus = nVail; cin >> rName;
            cout << "Please enter today's date.MM/DD/YY";
            getline (cin, Jdate);
            cout << "Please return it in a month max\n";
          }
          else {
            cout << "That is not valid\n";
            cout << "Please try again or call an Employee over";
            return 0;
          }
    return 0;      
 }

// This is the menu that will run if e is typed (employee)
 char submenue() {
    cout << "What is the code?\n";
    cin >> codeChoice;
    if (codeChoice == code) {
      cout << "That is correct\n";
      cout << "type ";
      return 0; 
    }
    else {
      cout << "That is incorrect\n";
      return 0; // figure out how to make it go back to the beginning
    }
    if (code) {
      cout << "Type the info for the car you are adding. \n";

      if (caroneN == caroneNc || caroneY == caroneYc) {
       cout << "What is the name of the car you are adding?: ";
       cin >> caroneN;
       cout << "What is the year model of the car you are adding: ";
       cin >> caroneY;
      }
      return 0;
    }
    else {
      cout << "You currently have no more car slots available if you would like more please contact the developers and you will get an update within 6 days";
    }
    return 0;
 }
    
   