#include <iostream>
using namespace std;

int main() {
    int iN;                 //initialize iN (input Number)
    
    cin >> iN;              //assign input to iN

    while (iN > 0) {        //until iN is 0 (or less):
        cout << iN % 2;         //output the remainder of iN divided by 2
        iN /= 2;                //divide iN by 2
    }

    return 0;
}