#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int r,c;

    for(r=1; r<=5; r++)
    {
        for(c=1; c<=r; c++)
        {
            cout<<r;
        }
        cout<<endl;
    }
    return 0;
}