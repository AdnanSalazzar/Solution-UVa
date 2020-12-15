#include<bits/stdc++.h>
using namespace std ;

int main()
{
    double  a , v , t , s , v2 ;

    while((scanf("%lf %lf" , &v ,&t)) != EOF )
    {
        if(  v == 0 || t == 0)
        {
            cout << 0 <<endl;
            continue;
        }

        a = v / t ;
        t = t * 2 ;
        v2 = a * t ;

        s = 0.5 * t * v2 ;

        printf("%.0lf\n" , s);


    }

    return 0 ;
}
