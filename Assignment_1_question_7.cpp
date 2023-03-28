using namespace std;
#include<iostream>
int main()
{
	int a,b,c;
	cout<<"Enter A:";
	cin>>a;
	cout<<"Enter B:";
	cin>>b;
	c=a;
	a=b;
	b=c;
	cout<<"A = "<<a;
	cout<<"\nB = "<<b;
}
