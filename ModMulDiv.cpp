#include<iostream>
using namespace std; 
  
int fun(int a, int b) 
{ 
   if (b == 0) 
       return 1; 
   if (b % 2 == 0) 
       return fun(a*a, b/2); 
  
   return fun(a*a, b/2)*a; 
} 
  
int main() 
{ 
  cout << fun(8, 3); 
  getchar(); 
  return 0; 
} 
