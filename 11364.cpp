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

    int T ;
    cin >>T ;

    while(T--)
    {

        int n ;
        cin >> n ;
        int a[n];


        for(int i = 0 ;i < n ;i++)
        {
            cin >> a[i] ;
        }

        sort(a , a + n);

        cout << (a[n-1] - a[0]) * 2 <<endl;
    }



return 0 ;
}

