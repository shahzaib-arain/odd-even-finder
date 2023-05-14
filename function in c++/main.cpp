#include<iostream>
using namespace std;
void mini_calculator(int a,int b,int ch,int add,int sub,int mul,int div)
{
	if(ch==1)
	{
		add=a+b;
		cout<<add;
	}
	else if(ch==2)
	{
		sub=a-b;
		cout<<sub;
	}
    else if(ch==3)
    {
    	mul=a*b;
    	cout<<mul;
	}

    else if(ch==4)
    {
    	div=a/b;
    	cout<<div;
	}

    else
    {


	cout<<"invalid program";
}
}
int main()
{
    //Calculator for addition,substraction,multiplication,division,
	int a,b,ch,add,sub,mul,div;
	cout<<" enter two numbers :";
	cin>>a>>b;
	cout<<"enter choice :";
	cin>>ch;
    mini_calculator(a,b,ch,add,sub,mul,div);
}
