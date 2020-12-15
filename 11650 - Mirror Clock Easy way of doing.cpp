#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int  T, i , j  , minans , hrans , min1 ,hr1;

    cin >> T ;
    for(i = 1 ; i <= T ; i++)
    {
        scanf("%d:%d" , &hr1 , &min1);
        if(min1 == 0)
        {                                                   
            if(hr1 == 12)
            {
                hrans = 12;
            }
            else
            {
                hrans =12- hr1;
            }
        }

        else
        {
            if(hr1 == 12)
            {
                hrans = 11;
            }
            else
            {
                hrans = 12- hr1 -1 ;
                if(hrans == 0)
                    hrans = 12;
            }

        }

        if(min1 == 0)
        {
            minans = 0 ;
        }
        else
        {
            minans = 60- min1;
        }

        printf("%02d:%02d\n" , hrans , minans);
    }

return 0 ;

}
