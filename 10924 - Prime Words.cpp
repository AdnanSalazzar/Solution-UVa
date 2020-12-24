#include<bits/stdc++.h>
#include<cstring>
using namespace std ;
bool is_Prime(int num );
int main()
{
    int i, j, num ;
    string a ;

    while((cin >>a ))
    {

        num = 0 ;
        i = 0 ;
        while(a[i] != '\0')
        {
            if(a[i] >='a' && a[i] <= 'z')
            {
                num = num + (a[i] - 'a' +1);
            }

            else if(a[i] >= 'A' && a[i] <= 'Z')
            {
                num = num + (a[i] - 'A' +27);
            }

            i++;
        }

        if(is_Prime(num))
        {
            cout << "It is a prime word." <<endl;
        }
        else
            cout << "It is not a prime word." <<endl;
    }
    return 0 ;
}

bool is_Prime(int num )
    {
        int i ;
        if(num <= 2)
            return true ;

        if(num % 2 == 0 )
        {
            return false ;
        }

        for(i = 3 ; i <= sqrt(num)   ; i = i +2 )
        {
            if(num % i == 0)
                return false ;
        }

        return true ;
    }
