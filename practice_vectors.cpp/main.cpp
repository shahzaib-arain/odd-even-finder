#include<iostream>
#include<vector>
using namespace std;
int main()
  {
  int even,odd,total=0,max=1,siz;;
vector<int>even_odd;
even_odd.push_back(4);
even_odd.push_back(13);
even_odd.push_back(16);
even_odd.push_back(22);
even_odd.push_back(33);

for(int i=0;i<even_odd.size();i++)
{
 even=even_odd[i];


if( even%2==0)
total=total+even_odd[i];
}
{cout<<"\n"<<"The sum of even number is :"<<total<<"\n";}

for(int j=0;j<even_odd.size();j++)
{
 odd=even_odd[j];

if( odd%2==1)

max=max*even_odd[j];
}
{cout<<"The Multiplication of Odd number is : "<<max<<"\n";}

}
