using namespace std;
#include<iostream>

int main()
{
	string s1,s2;
	cout<<"Enter the User name:";
	cin>>s1;
	cout<<"Reenter the User name:";
	cin>>s2;
	if((s1.compare(s2)) == 0)
		cout <<"The user name is valid";
	else
		cout << "\nUser name is invalid ";
	
	return 0;
}

