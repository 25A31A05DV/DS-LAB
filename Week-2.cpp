//program-1
Aim:Write a c++ code to swap two numbers by call by value and call by referencing
program:call by value
#include <iostream>
using namespace std; 
void swap(int a,int b); 
int main() 
{ 
  int a,b;
  cout<<"Enter a,b values";
  cin>>a>>b;
  cout<<"a value is "<<a<<" b value is "<<b<<" before swap"; swap(a,b); 
} 
void swap(int a,int b) 
{ 
  a=a+b;
  b=a-b;
  a=a-b;
  cout<<"a value is "<<a<<endl<<"b value is "<<b<<" after swap"; 
}

//program:call by referencing
#include <iostream>
using namespace std;
void swap(int &x,int &y);
int main() 
{
  int a,b;
  cout<<"Enter a,b values";
  cin>>a>>b;
  cout<<"a value is "<<a<<" b value is "<<b<<" before swap";
  swap(a,b);
  cout<<"a value is "<<a<<" b value is "<<b<<" after swap";
} 
void swap(int &x,int &y) 
{ 
  x=x+y;
  y=x-y;
  x=x-y;
}

//program-2
Aim:Write a c++ program to read n number of elements in 1-D array and display them
program:
#include <iostream>
using namespace std;
int main()
{
  int i,n;
  cout<<"Enter n value";
  cin>>n;
  int a[n];
  cout<<"Enter array elements";
  for(i=0;i<n;i++)
    cin>>a[i];
  cout<<"Array elements";
  for(i=0;i<n;i++)
    cout<<a[i]<<" ";
}

//program-3
Aim:Write a c++ code to read and display 1-D array using pointers
program:
#include <iostream>
using namespace std;
int main()
{
  int n,i,*p;
  cout<<"Enter n value";
  cin>>n;
  int a[n];
  *p=a;
  cout<<"Enter array elements";
  for(i=0;i<n;i++)
    cin>>*(p+i);
  cout<<"Array elements";
  for(i=0;i<n;i++)
    cout<<*(p+i)<<" ";
}

//program-4
Aim:Write a c++  program to read and display 1-D array elements by dynamic memory allocation
program:
#include<iostream>
using namespace std;
int main()
{
  int n,i,*p;
  cout<<"Enter n value";
  cin>>n;
  int *p=nem int[n];
  cout<<"Enter array elements";
   for(i=0;i<n;i++)
    cin>>*(p+i);
  cout<<"Array elements";
  for(i=0;i<n;i++)
    cout<<*(p+i)<<" ";

//program-5
Aim:Write a c++ code to implement function overloading call three cases:No.of parameters
case1:No.of parameters
program:
#include <iostream>
using namespace std;
int add(int x,int y);
int add(int x,int y,int z);
int main()
{
  cout<<add(1,2);
  cout<<add(1,2,3);
}
int add(int x,int y)
{
  return x+y;
}
int add(int x,int y,int z)
{
  return x+y+z;
}

//case2:Types of parameters
program:
#include <iostream>
using namespace std;
int add(int x,int y);
double add(double x,double y);
int main()
{
  cout<<add(1,2);
  cout<<add(1.5,3.5);
}
 int add(int x,int y)
{
  return x+y;
}
 double add(double x,double y)
{
  return x+y;
}

//case3:Order of parameters
program:
#include <iostream>
using namespace std;
int add(int x,int y);
double add(double x,int y);
int main()
{
  cout<<add(1,2);
  cout<<add(1.5,1);
}
  int add(int x,int y)
{
  return x+y;
}
double add(double x,int y)
{
  return x+y;
}


