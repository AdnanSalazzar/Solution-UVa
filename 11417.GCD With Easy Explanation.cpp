/*
  basically just find GCD in another function then sum them up; 

*/  

#include<bits/stdc++.h>

using namespace std ;
int GCD(int i , int j);

int main()
{
    int i, j, num  , G  , N;

    while(1)
    {
        cin >> N ;

        if(N == 0)
            break ;

        else
        {
            G=0;
            for(i=1; i<N; i++)
                for(j=i+1; j<=N; j++)
                {
                    G+=GCD(i,j);
                }
        }
        cout << G <<endl;
    }
return 0 ;
}


int GCD(int i , int j)
{
    int k ;

    for(k = i ; k >= 0 ; k--)
    {
        if( i % k == 0 && j % k == 0)
        {
            return k ;
        }
    }
}
