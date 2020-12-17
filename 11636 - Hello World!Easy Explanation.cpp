/*
  Tn = a n^(T-1)
*/

#include<bits/stdc++.h>
#include<cmath>
#include<math.h>
using namespace std ;

int main()
{
    double Tn , T , num;
    int i = 1 ;
    while(1)
    {
        cin >> num ;
        if(num <  0)
        {
            break ;
        }

        T = log(num) / log(2);

        printf("Case %d: %.0lf\n" , i , ceil(T));
        i++ ;
    }
    return 0 ;
}
