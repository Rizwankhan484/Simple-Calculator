#include<iostream>
using namespace std;

int main()
{
	while(true){
	
    cout<<"**********Simple Calculator*************"<<endl;
    int e,f;
	char z,a,b,c,d;
	cout<<"a for addition"<<endl;
	cout<<"b for subtraction"<<endl;
	cout<<"c for multiplication"<<endl;
	cout<<"d for division"<<endl;
	cin>> z;	
	
	cout<<"enter your first number"<<endl;
	cin>>e;
	cout<<"enter your second number"<<endl;
	cin>>f;	

	
	if ('a' == z)
	{
		cout<<"your result :"<<e+f<<endl;
		
	}
	else if ('b' == z)
	{
		cout<<"your result :"<<e-f<<endl;
		
	}
	else if ('c' == z)
	{
		cout<<"your result is :"<<e*f<<endl;
	}
	 else if('d' == z)
	 {
	 	cout<<"your result is : "<<e/f<<endl;
	 }
	 else
	 {
	 	cout<<"you enter incorrect character"<<endl;
	 }
}
	 return 0;
	}
