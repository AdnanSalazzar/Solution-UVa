#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int T , num , i ;

    cin >> T ;

    for(i = 1 ; i <=T ; i++)
    {
        cin >> num ;
        num = ((num * 567)/9);
        num = ((num + 7492)* 235)/47;
        num = num - 498 ;

        cout << abs((num %100)/10)<<endl;

    }
    return 0 ;
}
