using namespace std; 
#include<iostream>
#include<string>
int main() 
{ 
    string str; 
    int i;
    cout<<"Enter the string to reverse:";
    cin>>str;
    for(i=str.length() - 1; i>= 0;i--)
    {
      	cout<<str[i];
    }
    return 0;
}
