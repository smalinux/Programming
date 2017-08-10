/*
*=============== Problem
* Find How many X, Y numbers such that:
*   => X in range [1-100]
*   => Y in range [70-200]
*   => X < Y
*   => (X+Y) divisble by 7
*
* @link https://youtu.be/-sRDC4KBA9o?t=1m42s
*/
#include <iostream>

using namespace std;

int main()
{
    int iCount = 0;
    for( int x = 1; x <= 100; ++x)
    {
        for( int y = 70; y <= 200; ++y )
        {
            if( x < y && ( x + y ) % 7 == 0 )
            {
                iCount++;
            }
        }
    }
    cout << iCount << endl;
    return 0;
}
