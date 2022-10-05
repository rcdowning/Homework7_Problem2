/*********************************************
Description: This code converts  the  passed  number  of  seconds  into  an
equivalent  number  of  hours,  minutes,  and  seconds.  Using  the reference
parameters,  the  function  should  alter  the  arguments  in  the  calling
function. Created by: Ryan Downing
**********************************************/
#include <iostream>

using namespace std;

/******************* Function Prototypes *******************/
void time(int, int &, int &, int &);

/********************* Main Code ************************/
int main() {
  // main variables
  int seconds;
  int hours, minutes, secs;

  // user input for total seconds
  cout << "This code converts the passed number of seconds into an equivelent number of hours, minutes, and seconds. Please enter the total number of seconds passed. " << endl;
  cout << "Total seconds = ";  
  cin >> seconds;

  // call function
  time(seconds, hours, minutes, secs);

  // output updated values
  cout << seconds << "seconds = " << hours << "hours " << minutes << "minutes "
       << secs << " seconds. " << endl;
}

/****************** User Defined Functions ****************/
void time(int seconds, int &hours, int &minutes, int &secs) {}