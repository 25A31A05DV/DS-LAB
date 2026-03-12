//program-1
Aim:Write a c++ program to print student details
program:
#include<iostream>
using namespace std;
int main()
{
  cout<<"Navya"<<endl<<"cse"<<endl<<"DV"<<endl<<"Sec-D";
  return 0;
}

//program-2
Aim:Write a c++ program to find biggest number among given three numbers
program:
#include<iostream>
using namespace std;
int main()
{
  cout<<"enter a,b,c values";
  cin>>a>>b>>c;
  if(a>b && a>c)
  cout<<"a is big";
  else if(b>c)
  cout<<"b is big";
  else
  cout<<"c is big";
  return 0;
}

//program-3
Aim:Write a c++ code to implement arithemetic operations calculator by using switch case
program:
#include<iostream>
using namespace std;
int main()
{
  int a,b;
  char op;
  cout<<"enter a,b values";
  cin>>a>>b;
  cout<<"enter operator";
  cin>>op;
  switch(op)
 {
   case'+':cout<<"addition"<<a+b;
   break;
   case'-':cout<<"subtraction"<<a-b;
   break;
   case'*':cout<<"multiplication"<<a*b;
   break;
   case'/':cout<<"division"<<a/b;
   break;
   default:
   cout<<"operator not available";
 }
return 0;
}

//program-4
Aim:Write a c++ program to find factorial of a given number
program:
#include<iostream>
using namespace std;
int main()
{
  int n;
  long long fact=1;
  cout<<"enter a number";
  cin>>n;
  for(int i=1;i<=n;i++)
 {
   fact=fact*i;
 }
  cout<<"factorial of"<<n<<"="fact<<endl;
return 0;
}

//program-5
Aim:Write a c++ code to implement prime numbers
include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"enter limit";
  cin>>n;
  cout<<"primes";
  for(int i=2;i<=n;i++)
 {
    int is prime=1;
    for(int j=2;j*j<=i;j++)
    {
      if(i%j==0)
      {
        is prime=0;
        break;
      }
    }
       if(is prime==1)
       {
          cout<<i<<" ";
       }
 }
   cout<<endl;
   return 0;
}

//program-6
Aim:Write a c++ program to fi d functionally functionality by using recursion program
program:
#include<iostream>
using namespace std;
long long factorial(int n)
{ 
  if(n==0 || n==1)
  {
    return n;
  }
  retun n*factorial(n-1);
}
  int main()
  {
    int n; 
    cout<<"enter a number";
    cin>>"n;
    cout<<"factorial of"<<"="<<factorial(n)<<endl;
    return 0;
  }
