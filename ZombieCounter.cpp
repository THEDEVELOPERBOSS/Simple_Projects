#include<iostream>
using namespace std;
int score (int x, int y) {
    cout << (x-y) * 3;
    return (x,y);
}

int main () {
    int nzombies = 50;
    int zombieskod = 0;

    cout << "How many zombies did you kill: ";
    cin >> zombieskod;

    if (zombieskod > nzombies){
       cout << "Please enter a number less than " << nzombies << " \n";
    }
    else {
         cout << "Your score is: " << score(nzombies, zombieskod) << " \n";
         
    }

}