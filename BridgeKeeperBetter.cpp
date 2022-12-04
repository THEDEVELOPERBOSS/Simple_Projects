#include<iostream>
using namespace std;

    
int main() {

    char name[50];
    char quest[80];
    char airspeed[80];
    string real3 = "";

    cout << "What is your name? ";
    cin.getline(name, 49);
    
    cout << "\nWhat is your quest? ";
    cin.getline(quest, 79);

    cout << "\nWhat is the velocity of an unladen swallow? ";
    cin.getline(airspeed, 79);

    if(real3 == airspeed) {
        cout << "I don't know that...AAAAAHHHHHH"
    }
    else {
        cout << "Get into the bunny ";
    }

}