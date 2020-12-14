/*
  sort the last 3 then add the last 2 with rest of the first 5 in an array .

*/

#include<bits/stdc++.h>
using namespace std ;

int main()
{
    long long int T  , j;
    int i ;
    double avg , a[7] , sum = 0;
    cin >> T ;

    for(i = 1 ; i <= T ; i++ )
    {
        for(j = 0 ; j < 7 ; j++)
        {
            cin >> a[j] ;
        }


        sort(a+4 , a+7);
        /*///debugging

        for(j = 0 ; j< 7 ; j++)
        {
            cout << a[j] <<" ";
        }
        cout << endl ;
        ///*/


        avg = (a[5] + a[6]) /2;

        sum = a[0] + a[1] + a[2] +  a[3] + avg ;


        if(sum >= 90 )
        {
            printf("Case %d: A\n" , i);
        }

        else if( sum >= 80)
        {
            printf("Case %d: B\n" , i);
        }

        else if (sum >= 70)
        {
            printf("Case %d: C\n" , i);
        }

        else if(sum >= 60)
        {
            printf("Case %d: D\n" , i);
        }
        else
        {
            printf("Case %d: F\n" , i);
        }

    }
    return 0 ;

}
