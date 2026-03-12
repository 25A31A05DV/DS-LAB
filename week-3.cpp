//program-1
Aim:Write a c++ code to demostrate class and object
program:
#include <iostream>
using namespace std;
class student 
{
private:
int roll; string name;
public:
void read(int x, string y)
{ 
  roll = x;
  name = y;
} 
void print()
{ 
  cout << "roll no is " << roll << endl;
  cout << "name is: " << name; 
} 
};
int main() 
{ 
  student s1;
  int rno;
  string n;
  cout << "enter rno and name";
  cin >> rno >> n;
  s1.read(rno, n);
  s1.print();
  return 0;
}

//program-2
Aim:Write a c++ code to implement constructor and destructor
program:
#include <iostream>
using namespace std;
class student
{
private:
int roll; string name;
public:
void student(int x, string y)
{
  roll = x;
  name = y; 
} 
void~student()
{
  cout << "roll no is " << roll << endl;
  cout << "name is: " << name;
}
}; 
int main()
{ 
  student s1(2, "pragati");
  student s2(4, "kumar");
}

//program-3
Aim:Write a c++ code to implement linear search(on sequential search)
program:
#include <iostream>
using namespace std;
int main()
{
  int i, key, n;
  bool status = false;
  cout << "Enter size of array & key elements";
  cin >> n >> key; int a[n];
  for(i = 0; i < n; i++)
    {
      cout << "Enter elements"1;
      cin >> a[i];
      if(a[i] == key)
      {
        cout << "key elements is found";
        status = true;
        break;
      }
    } 
    if(status)
      cout << "elements not found"; 
}

//program-4
Aim:Write a c++ code to identify number of occurence of search key in linear search procedure
program:
#include <iostream>
using namespace std;
int main()
{
  int i, key, n, c = 0;
  cout << "Enter size of the array & key element";
  cin >> n >> key;
  int a[n];
  for(i = 0; i < n; i++)
    { cout << "Enter elements";
     cin >> a[i];
     if(a[i] == key)
     {
       cout << "element found";
       break;
     }
    }
  if(c == 0)
    cout << "element not found";
}

//program-5
Aim:Write a c++ code to implement binary search
program:
#include <iostream>
using namespace std;
int main()
{ 
  int n, a[100], key, low = 0, high, mid;
  bool status = false;
  cout << "Enter n value & key value";
  cin >> n >> key; high = n - 1;
  cout << "Enter array elements in sorted order";
  for(int i = 0; i < n; i++)
    { 
      cin >> a[i];
    } 
  while(low <= high)
    { 
      mid = (low + high) / 2;
      if(a[mid] == key) 
      { 
        cout << "elements found"; 
        status = true; break;
      } 
      else if(a[mid] < key) 
        low = mid + 1; 
      else high = mid - 1; 
    } 
  if(!status) 
    cout << "key elements not found";
  return 0; 
}





