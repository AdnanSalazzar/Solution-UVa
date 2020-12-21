/*
  there is a patter sum = sum +i 
   i from 0 to num 
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i, j, num, sum ;

    while(1)
    {
        cin >> num ;

        if(num < 0 )
            break ;

        sum = 1 ;

        for(i = 0 ; i <= num ; i++)
        {
            sum = sum + i ;
        }

        cout << sum <<endl;

    }
    return 0 ;
}
