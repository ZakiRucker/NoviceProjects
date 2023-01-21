//
//  fibonacci.cpp
//  
//
//  Created by Zaki Rucker on 1/21/23.
//

#include <iostream>
#include <string>
using namespace std;

int main (int argc, char * argv []) {
    int userInput = stoi(argv[1]);
    int lowNum = 0;
    int highNum = 1;
    int newNum = 0;
    while (newNum < userInput) {
        newNum = lowNum + highNum;
        lowNum = highNum;
        highNum = newNum;
        cout << newNum << endl;
    }
    return 0;
}
