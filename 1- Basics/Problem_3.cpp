/*
*=============== Problem
* Find Count of 4 numbers A, B, C and D such that:
*   0 <= A, B, C, D < 100
*       I.e. Each number in this range
*   A+B+C+D = 100
*
* @link https://youtu.be/-sRDC4KBA9o?t=5m39s
*/
#include <iostream>
using namespace std;

int main()
{
    int iCount = 0;

    for( int A = 0 ; A <= 100; ++A )
        for( int B = 0 ; B <= 100; ++B )
            for( int C = 0 ; C <= 100; ++C )
                for( int D = 0 ; D <= 100; ++D )
                    if( A + B + C + D == 100 )
                        iCount++;

    cout << "Count: " << iCount << endl;
    return 0;
}