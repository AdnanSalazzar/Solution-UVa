/*
  just find the size to get 1 for each number in the given range 
  print out the max size 
*/

#include<bits/stdc++.h>
using namespace std ;
int algo (int num);
int main()
{
    int num1, num2, i, j , T , k , len1 , maxi = 0 , big , small;

    while((scanf("%d %d" , &i , &j ) != EOF ))
    {
        big = max(i , j);
        small = min(i , j);

        for( k = small ; k <= big ; k++)
        {
             len1 = algo(k);

             if(maxi < len1)
             {
                maxi = len1;
             }
        }
         cout << i <<" " << j << " " << maxi<<endl;
         maxi = 0 ;
    }

}


int algo(int num )
{
    int counter = 1;
    while(num != 1)
    {
        if(num & 1)
        {
            num = (3 * num) +1 ;
        }
        else
        {
            num = num/2 ;
        }
        counter++ ;
    }
    return counter ;
}
