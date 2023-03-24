#include<iostream>
#include<string> 
#include"Carsubs.h"
//using std namespace will make it so yoiu can say cout instead of std::cout
using namespace std;

int main() {
	
	string choiceone;
	string choicetwo;
while (true) {
	 cout << "Type R to go back to the begining at any time\n";
	 cout << "Are you are customer or employee?\n Type 'c' for customer and 'e' for employee\n";
	 getline (cin, choiceone);
		if (choiceone == "e")
		{
			cout << submenue();
			
		}
		else if (choiceone == "c"){
			cout << "Are returning a car or renting a car?\n Type a for returning a car and b for renting a car.\n";
			getline (cin, choicetwo);
				if(choicetwo == "b")
				{
					submenure();
				}
				else if(choicetwo == "a")
				{
					submenurn();
				}
				else {
					cout << "That is not a valid letter";
				}
		}
			else
			{
				cout << "Please try again";
			}
		}
		
		cout << "Goodbye\n";
		

	}


	 
	 
	 
	 
	 