//
//  timeCounter.cpp
//  NoviceProjects
//
//  Created by Zaki Rucker on 1/22/23.
//

#include <iostream>
#include <ctime>
using namespace std;

int main (int argc, char * argv[]) {
    time_t rawtime;
    struct tm * timeinfo;

    time (&rawtime);
    timeinfo = localtime (&rawtime);
    cout << "Current local time and date: " << asctime(timeinfo) << endl;
    
    return 0;
}
