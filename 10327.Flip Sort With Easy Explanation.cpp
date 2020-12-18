/*
  just do the insertion sort add a counter when it does swapping.
*/

#include<bits/stdc++.h>
using namespace std ;
int main()
{

    int arr[10000],i,j,key,n;
    while((scanf("%d" , &n)) != EOF)
    {
        for(i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
        }
        //ascending order
        int counter = 0 ;
        for(i=1; i<n; i++)
        {
            key=arr[i];
            j=i-1;

            while(j>=0 && arr[j]>key )
            {
                arr[j+1]=arr[j];
                j=j-1;
                counter++ ;
            }
            arr[j+1]=key;
        }
        /*for(i=1; i<=n; i++)
        {
            printf("%d\n",arr[i]);
        }*/

        printf("Minimum exchange operations : %d\n" , counter);
    }


    return(0);
}
