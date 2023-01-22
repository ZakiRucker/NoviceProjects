//
//  timeDiff.cpp
//  NoviceProjects
//
//  Created by Zaki Rucker on 1/22/23.
//

#include <iostream>
#include <time.h>       /* time_t, struct tm, difftime, time, mktime */
using namespace std;

int main (int argc, char** argv) {
  time_t now;
  struct tm newyear;
  double seconds;

  time(&now);  /* get current time; same as: now = time(NULL)  */

  newyear = *localtime(&now);

  newyear.tm_hour = 0; newyear.tm_min = 0; newyear.tm_sec = 0;
  newyear.tm_mon = 0;  newyear.tm_mday = 1;

  seconds = difftime(now,mktime(&newyear));

  cout << seconds << " seconds since new year in the current timezone." << endl;

  return 0;
}
