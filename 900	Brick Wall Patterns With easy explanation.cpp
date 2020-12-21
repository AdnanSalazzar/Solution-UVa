/*
  see the pattern there is a fibonacci series among them .
*/

#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int i, num ;

    int a[51] ;

    a[0] = 1, a[1] = 2 ;

    for(i = 2 ; i < 50 ; i++)
    {
        a[i] = a[i-1] + a[i-2];
    }
    while(1)
    {

        cin >> num;
        if(num == 0)
            break ;


        cout << a[num-1] <<endl;

    }

return 0 ;
}
