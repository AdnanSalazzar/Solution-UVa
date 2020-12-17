/*
  Print the middle number in the array

*/

#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int T , i , N , j;
    cin >> T ;

    for(i = 1 ; i <= T ; i++)
    {
        cin >> N ;
        int a[N];
        for(j = 0 ; j < N ; j++)
        {
            cin >>  a[j];
        }

        N = floor(N / 2);
        //cout <<"N = "<< N<<endl ;
        printf("Case %d: %d\n" , i , a[N]);
    }

    return 0 ;
}
