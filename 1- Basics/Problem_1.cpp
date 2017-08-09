/*
*=============== Problem
* in range 1-100, count how many numbers that has following property
* = Either number is divisible by 4
* = Or divisible by both 6 and 10
*
* @link https://youtu.be/-sRDC4KBA9o?list=PLPt2dINI2MIZPFq6HyUB1Uhxdh1UDnZMS
*/
#include <iostream>

using namespace std;

int main()
{
    int iTargetNumber = 0;

    for( int x = 1; x <= 100; x++ )
        if( x % 4 == 0 || ( x % 6 == 0 && x % 10 == 0 ))
            iTargetNumber++;

    cout<< "Count of numbers is = " << iTargetNumber << endl;

    return 0;
}
