/*
  Use remainder Theorem
*/
#include<stdio.h>

int main()
{
    int T, i, counter, j ;
    char a[1000];
    scanf("%d" ,&T);
    getchar();
    for(i = 1 ; i <= T ; i ++)
    {

        gets(a);

        j = 0 ;
        counter =  0 ;
        while( a[j] != '\0')
        {
            if(a[j] >= 'a' && a[j] <= 'r')
            {
                if((a[j] - 'a') % 3 == 0)
                {
                    counter++;

                }
                else if((a[j] - 'a') % 3 == 1)
                {
                    counter = counter + 2 ;

                }

                else if((a[j] - 'a') % 3 == 2)
                {
                    counter = counter + 3 ;
                }

            }
            else if(a[j] == 's' || a[j] == 'z' )
            {
                counter = counter +4 ;
            }

            else if(a[j] > 'r' && a[j] <= 'z')
            {
                if((a[j] - 'a') %3 == 1)
                {
                    counter++;
                }
                else if((a[j] - 'a' ) % 3 == 2)
                {
                    counter = counter +2 ;
                }
                else if((a[j] - 'a') % 3 == 0 )
                {
                    counter = counter + 3 ;
                }
            }
            else if( a[j] == ' ')
            {
                counter++ ;
            }

            j++ ;

        }
        printf("Case #%d: %d\n", i, counter );


    }
    return 0 ;
}


