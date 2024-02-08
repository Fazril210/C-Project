#include <iostream>
#include <conio.h>

using namespace std;
 main ()
{
    int a=1, b=19, n;

    for (a=a; a<=b; a+=2)
    {
        cout<<a;
        if(a<b)
        {
            cout<<"+";
        }
    }
    cout<<"=";
    n=(b+1)/2;
    n=n*n;
    cout<<n;

    getch ();
}