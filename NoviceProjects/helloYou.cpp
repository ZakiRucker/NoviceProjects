//
//  helloYou.cpp
//  NoviceProjects
//
//  Created by Zaki Rucker on 1/18/23.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    if ( argc >= 2 ) {
        cout << "Hello, " << argv[1] << "!" << endl;
    } else {
        cout << "Hello, World!" << endl;
    }
    return 0;
}
