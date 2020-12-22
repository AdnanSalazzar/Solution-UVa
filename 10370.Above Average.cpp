#include<bits/stdc++.h>
using namespace std ;
int main()
{

    int T , i , j , N ;
    double avg , N2 ;
    cin >> T ;

    for(i = 1 ;  i<= T ; i++)
    {
        double counter = 0 ;
        double sum = 0 ;
        cin >> N ;
        int a[N] ;
        for(j = 0 ; j < N ; j++)
        {
            cin >> a[j];
            sum += a[j] ;
        }
        avg = sum / N ;

        for(j = 0 ; j < N ; j++)
        {
            if(avg < a[j])
                counter++ ;
        }
        N2 = N ;

       avg = (counter*100.00) / N2 ;
        printf("%0.3lf%\n" , avg );
    }

    return 0 ;
}
