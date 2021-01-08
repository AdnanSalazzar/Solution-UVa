    #include<bits/stdc++.h>
    using namespace std ;

    int main()
    {
        int ciggar, k  ;
        while( scanf("%d %d" , &ciggar , &k) == 2 )
        {
             int sum = ciggar;
            //cout << ciggar <<endl;
            //cout << k <<endl;
            while(ciggar >= k)
            {
               //cout << ciggar <<endl;
                sum = sum + round(ciggar  / k) ;
                ciggar = (ciggar / k) + (ciggar %k) ;
            }
            printf("%d\n" , (int)sum) ;

        }
        return 0 ;
    }
