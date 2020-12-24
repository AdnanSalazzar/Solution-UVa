/*
  look ASCII Table -7 is the difference .
*/

#include<bits/stdc++.h>

using namespace std ;
int main()
{
    int i , j ;
    string a ;

    while(getline(cin , a ))
    {
        i = 0 ;
        while(a[i] != '\0')
        {
            a[i] = a[i] - 7 ;
            i++ ;
        }
        cout << a <<endl; ;

    }
    return 0 ;
}
