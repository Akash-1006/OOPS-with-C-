#include<bits/stdc++.h>
using namespace std;
 
int main()
{
   int x = 10;
   int y = 70;//string was given for integer variable
 
   x = x + y;
   y = x - y;
   x = x - y;
 
   cout<< "X : "<< x << "\n";
   cout<< "Y : "<< y << "\n";
    
   return 0;
}

