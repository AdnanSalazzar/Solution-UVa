#include <iostream>
#include<stdio.h>
using namespace std ;

int main()
{
    int i , j ;
   char a[300];

    while( gets(a) != NULL)
    {
        i = 0 ;
        while(a[i] != '\0')
        {
            if(a[i]>= 'A' && a[i] <= 'C')
            {
                cout << 2 ;
            }
            else if(a[i] >= 'D' && a[i] <= 'F')
            {
                cout << 3 ;
            }
            else if(a[i] >= 'G' && a[i] <= 'I')
            {
                cout << 4 ;
            }
            else if(a[i] >= 'J' && a[i] <= 'L')
            {
                cout << 5 ;
            }
            else if(a[i] >= 'M' && a[i] <= 'O')
            {
                cout << 6 ;
            }
            else if(a[i] >= 'P' && a[i] <= 'S')
            {
                cout << 7 ;
            }
            else if(a[i] >= 'T' && a[i] <= 'V')
            {
                cout << 8;
            }
            else if(a[i] >= 'W' && a[i] <= 'Z')
            {
                cout << 9;
            }
            else
            {
                cout <<a[i];
            }
            i++ ;
        }
        cout << endl;
    }
    return 0 ;
}
