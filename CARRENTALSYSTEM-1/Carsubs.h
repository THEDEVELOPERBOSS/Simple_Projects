#include<iostream>
using namespace std;
  // these are the variables
   string Raptor = "Ford Raptor";
   string Rstatus = "Available";
   int rNum = 1;
   //(above) variables for the Ford Raptor
   //(below) variables for the Jeep Cherokee
	 string Jeep = "Jeep Cheorkee";
   string Jstatus = "Available";
   int jNum = 2; 
  //(below) variables for the Dodge Charger
	 string Charger = "Dodge Charger";
	 string Cstatus = "Not Currently Available";
   int cNum = 3;
  // (below) variables for the first car to add 
   string caroneYc = "0000";
   string caroneNc = "car"; 
   string caroneN = "car"; 
   string caroneY = "0000";
  //(below) variables for the second car to add
   string cartwoYc = "0000";
   string cartwoNc = "car"; 
   string cartwoN = "car"; 
   string cartwoY = "0000";
   // choosing what car (below)
   // etc
   int carWant = 0;
   string carReturn = "Car";
   string eChoice = "a";
   const int code = 2681; // this is the password that employees will need to enter to add cars and ______ etc;
   int codeChoice = 0;

char submenurn() {
  cout << "What is the car that you are returning?\n ";
   cin >> carReturn;
  return 0;
 }
// this is the menu that will run if an employee or customer is returnig a car
char submenure() {
  cout << "These are the cars:\n";
					cout << Raptor << " is currently " << Rstatus << " Type 1" <<" \n"; 
					cout << Jeep << " is currently " << Jstatus << " Type 2"<< " \n";
					cout << Charger << " is currently " << Cstatus << " Type 3" << " \n";
					cout << "Type what car you would like to rent" << " \n";
          cin >> carWant;
          if (carWant == rNum) {
            
          }
          else if (carWant == jNum) {
            cout << 'k';
          }
          else {
            cout << "That is not valid\n";
            return 0;
          }
    return 0;      
 }
// This is the menu that will run if e is typed 
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
      return 0;
    }
    switch(codeChoice) {

      
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
      cout << "You currently have no more car slots available if you would like more please contact the developers and you will get an update within 6 hours";
    }
    return 0;
 }
    
   