#include <iostream>
using namespace std;



 int x = 600 ,y = 741 ;
 int sum=y+x;

 int main()
{
    ::x =600 ;
    ::y = 741; 
        sum = x + y;

                 
                  cout << "The sum of " << 
              ::x << " and " << ::y << " is: " << sum << endl;

    return 0;
}


