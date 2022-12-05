#include<iostream>
using namespace std; 
int main () {

    int *pX = NULL;

    int x = 7;
    
    pX = &x;

    cout << "X: " << x << "\n";
    cout << "pX: " << pX << "\n";    

    return 0;
}