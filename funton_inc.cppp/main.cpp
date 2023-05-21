#include <iostream>
using namespace std;
void my_function(float h,float c,float t,float i)
{
    for(i=0;i<t;i++);
	if(h>=50 && c<=0.7 && t>=5600)
	{
		cout<<" grade 10 ";
	}
	else if (h>=50 && c<=0.7)
	{
		cout<<" grade 9 ";
	}
	else if (c<=0.7 && t>=5600)
	{
		cout<<" grade 8 ";
	}
	else if (h>=50 && t>=5600)
	{
		cout<<" grade 7 ";
	}
	else if (h>=50 || c<=0.7 || t>=5600)
	{
		cout<<" grade 6 ";
	}
	else
	{
		cout<<" grade 5 ";
	}
}
int main()
{
	float h,c,t,i; //h=hardness c=carbon t=tensile strength
	cout<<" enter the hardness of steel :";
	cin>>h;
	cout<<" enter the carbon content  of steel :";
	cin>>c;
	cout<<" enter the tensile strength of steel :";
	cin>>t;

	my_function(h,c,t,i);
}
