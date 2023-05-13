#include <iostream>

using namespace std;
void even_odd_finder()
{
        int number;
    cout<<"enter the number :";
    cin>>number;
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
even_odd_finder();


    return 0;
}
