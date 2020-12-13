#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int a[3] , i , j;

    while (1)
    {
        for(i = 0 ; i < 3 ; i++)
                cin >> a[i];


        if(a[0] == 0 && a[1] == 0 && a[2] == 0)
            break ;

        else
        {


            sort(a , a+3);

            if(a[2] == sqrt( (a[1] * a[1]) + (a[0] * a[0])))
                cout << "right" << endl;
            else
                cout << "wrong"<<endl;

        }

    }

    return 0 ;
}
