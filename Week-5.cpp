//program-1
Aim:.Write C++ code to perform addition of n elements using dynamic memory allocation
program:
#include <iostream>
using namespace std;
 
class Addition
{
private:
    int n;
    int *ptr;
    int sum;
public:
    void getSize()
    {
        cout << "Enter number of elements: ";
        cin >> n;
        ptr = new int[n];
    }
    void getElements()
    {
        cout << "Enter " << n << " elements:\n";
        for(int i = 0; i < n; i++)
        {
            cin >> ptr[i];
        }
    }
    void calculateSum()
    {
        sum = 0;
        for(int i = 0; i < n; i++)
        {
            sum = sum + ptr[i];
        }
    }
    void displaySum()
    {
        cout << "Sum of elements = " << sum << endl;
    }
    ~Addition()
    {
        delete[] ptr;
    }
};
int main()
{
    Addition obj;
    obj.getSize();
    obj.getElements();
    obj.calculateSum();
    obj.displaySum();
    return 0;
}

//program-2
Aim:Write C++ code to create 4 nodes in a Single Linked List using Dynamic Memory Allocation
program:
#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
int main()
{
    Node *head = NULL, *second = NULL, *third = NULL, *fourth = NULL;
    head = new Node();
    second = new Node();
    third = new Node();
    fourth = new Node();
  
    head->data = 10;
    head->next = second;
    second->data = 20;
    second->next = third;
    third->data = 30;
    third->next = fourth;
    fourth->data = 40;
    fourth->next = NULL;
    Node *temp = head;
    cout << "Single Linked List Elements are:\n";
    while(temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL";
    return 0;
}

//program-3
Aim:Write C++ code to create Single Linked List nodes based on user input using Dynamic Memory Allocation
program:
#include <iostream>
using namespace std;
 
class Node
{
public:
    int data;
    Node *next;
};

int main()
{
    int n, value;
    Node *head = NULL, *newnode = NULL, *temp = NULL;
    cout << "Enter number of nodes: ";
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        newnode = new Node();
        cout << "Enter data for node " << i << ": ";
        cin >> value;
        newnode->data = value;
        newnode->next = NULL;
        if(head == NULL)
        {
            head = newnode;
            temp = head;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
    }
    temp = head;
    cout << "Single Linked List Elements are:\n"
;
    while(temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL";
}
return 0
