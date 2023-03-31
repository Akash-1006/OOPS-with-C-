using namespace std;
#include <iostream>
int main()
{
	int i,j,s,l,b;
	cout<<"Enter the length of the rectangle:";
	cin>>l;
	cout<<"Enter the breadth of the rectangle:";
	cin>>b;
	cout<<"Enter the side of the square:";
	cin>>s;
	cout<<"\n\nRectangle.....\n\n";
	for(i=1;i<=l;i++)
	{
		for(j=1;j<=b;j++)
		{
			cout<<"* ";
		}
		cout<<"\n";
	}
	cout<<"\n\n\n\n\nSQUARE............\n";
	for(i=1;i<=s;i++)
	{
		for(j=1;j<=s;j++)
		{
			cout<<"* ";
		}
		cout<<"\n";
	}


}
