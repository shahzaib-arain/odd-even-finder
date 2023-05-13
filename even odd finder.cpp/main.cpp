#include <iostream>

using namespace std;
void even_odd_finder(int number)
{

    if(number%2==0)
    {
   cout<<" the number "<<number<< " is even ";
    }
    else
    {
      cout<<" the number "<<number<< " is odd ";
    }
}

 main()
{
even_odd_finder(65);


    return 0;
}
