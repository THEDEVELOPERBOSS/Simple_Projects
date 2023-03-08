#include<iostream>
#include<string> 
#include"Carsubs.h"
//using std namespace will make it so yoiu can say cout instead of std::cout
using namespace std;

int main() {
	
	char choiceone = 'd';
	char choicetwo = 'z';
while (true) {
	 cout << "Type R to go back to the begining at any time\n";
	 cout << "Are you are customer or employee?\n Type 'c' for customer and 'e' for employee\n";
	 cin >> choiceone; 
		switch(choiceone) {

			case 'e':
			cout << submenue();
			break;
			case 'c':
			cout << "Are returning a car or renting a car?\n Type a for returning a car and b for renting a car.\n";
			cin >> choicetwo;
				switch (choicetwo)
				{
				case 'a':
				submenure();
				break;
				default:
				cout << "That is not a valid letter";
				break;
				}
			break;
			default:
			cout << "That is not valid\n";
			break;
		}
		
		cout << "Goodbye\n";
		

	}
}

	 
	 
	 
	 
	 