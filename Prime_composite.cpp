using namespace std;
#include<iostream>
int main()
{
	int a[10],i=0,b=0,c=0,p=0,n,j=0;
	cout<<"Enter number of elements:";
	cin>>n;
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=1;i<=n;i++)
	{
	{for(j=0;j<=n;j++)
		if(a[j]%i==0)
		{
			b=b+1;
		}
	}
}
	if(b>2)
	{
	c++;
	cout<<c;
}
	else
	{
		p++;
		cout<<p;
	}
	
	}
