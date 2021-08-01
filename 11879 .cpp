#include<bits/stdc++.h>
#include<list>
#include<iterator>
#include<algorithm>
#include<cmath>
#include<string.h>
#include<vector>
#include<time.h>

#define longpro int64_t ;
#define AMAI ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

using namespace std ;

int main()
{
    AMAI ;
    ll i ;

    string a ;


    while(cin >> a )
    {
        if (a[0] == '0' && a.size() == 1 ) break ;

        else
        {
            int rem = 0 ;

            for(i = 0 ;i < a.size() ; i++ )
            {
                rem = rem * 10 + ( a[i] - '0');
                rem = rem % 17 ;
            }

            if( rem == 0)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 0 <<endl;
            }

        }

    }


return 0 ;
}

