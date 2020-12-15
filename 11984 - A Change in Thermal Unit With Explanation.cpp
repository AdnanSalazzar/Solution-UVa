/*
  basically let's for change in kelvin...  u would just add the kelvin to the celcious
  because if u draw thhe graph of celcious the gradient is same 
  
  but for farenhite u have to * 5/9 to make the gradient same .

*/

#include<bits/stdc++.h>
using namespace std ;

int main()
{
    double f, c ;
    int i , T;
    cin >> T ;

    for(i = 1 ; i<= T ; i++)
    {
        cin >> c >> f ;
        c = c+ ( f * 5 / 9);
        printf("Case %d: %0.2lf\n" , i , c );

    }
    return 0 ;
}
