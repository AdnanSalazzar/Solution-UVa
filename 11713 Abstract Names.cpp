#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int i  , j , T , len1 , len2  ;
    string a , b ;
    cin >> T ;
    getchar();
    for(i = 1 ; i <= T ; i++)
    {
        int flag = 0 ;
        cin >> a >> b ;

        len1 = a.size();
        len2 = b.size() ;

        if(len1 != len2 )
        {
            cout << "No" <<endl;
            continue;
        }
        j = 0 ;
        while(a[j] != '\0' )
        {
            if(a[j] != b[j])
            {
                if(!(a[j] == 'a' || a[j] == 'e'|| a[j] == 'i'|| a[j] == 'o'|| a[j] == 'u' ))
                {
                    cout << "No"<<endl;
                    flag = 1 ;
                   break ;
                }
                else if(!(a[j] == 'a' || a[j] == 'e'|| a[j] == 'i'|| a[j] == 'o'|| a[j] == 'u') )
                {
                    cout << "No" <<endl;
                    flag = 1 ;
                    break ;
                }
            }
            j++ ;
        }
        if(flag)
        {
            continue ;
        }
        else
        {
            cout << "Yes"<<endl;
        }

    }

    return 0 ;

}

