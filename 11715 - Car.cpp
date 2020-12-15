#include<bits/stdc++.h>
#include<cmath>
using namespace std ;

int main()
{
    int i = 1 , query ;
    double a , v, u , s, t ;
    while(1)
    {
        cin >> query ;


        if(query == 0 )
        {
            break;
        }

        else if(query == 1)
        {
            cin >> u >> v >> t ;
            a = ( v - u) / t;
            s = (u * t) + (0.5 * a * (t * t));
            printf("Case %d: %0.3lf %0.3lf\n" , i , s, a  );

        }

        else if(query == 2)
        {
            cin >> u >> v >>a ;

            t = ( v - u)/ a ;
            s = (u * t) + (0.5 * a * t * t);

            printf("Case %d: %0.3lf %0.3lf\n" , i , s , t);
        }

        else if(query == 3)
        {
            cin >> u >> a >> s ;
            v= sqrt( (u * u) +  (2 * a *s ));
            t = (v - u) / a ;

            printf("Case %d: %0.3lf %0.3lf\n" , i , v , t);
        }
        else if (query == 4)
        {
            cin >> v >>a >>s ;

            u = sqrt( (v * v) - (2 * a* s));
            t = (v - u) / a ;

            printf("Case %d: %0.3lf %0.3lf\n" , i , u , t);

        }

i++;

    }
    return 0 ;


}

