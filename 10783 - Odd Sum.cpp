#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int T , i , j , lower , upper ;

    cin >> T ;

    for(i = 1 ; i <= T ; i++)
    {
        int sum = 0 ;
        cin >> lower >> upper ;

        if(!(lower & 1 ))
        {
            lower++;
        }

        for(j = lower ; j<= upper ; j= j+2)
        {
            sum = sum + j;
        }

        printf("Case %d: %d\n" , i , sum ) ;
    }

    return 0 ;

}
