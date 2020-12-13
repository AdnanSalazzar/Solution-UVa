#include<iostream>
#include<cmath>
using namespace std ;

int main()
{
    double num1 = 1 , num2 = 1 ,i ;

    while(1)
    {
        int counter = 0 ;
        cin >> num1 >> num2 ;

        if (num1 == 0 && num2 == 0)
        {
            break;
        }
        else
        {
          for(i = num1 ; i<= num2 ; i++)
          {
            if(sqrt(i) == ceil(sqrt(i)))
                counter++;
          }

        }
        cout << counter <<endl;
    }

return 0 ;

}

