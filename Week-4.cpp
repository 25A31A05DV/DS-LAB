//program-1
Aim:Write a c++ code to implement Selection Sort
program:
#include <iostream> 
using namespace std; 
int main() 
{ 
    int n; 
    cout << "Enter number of elements: "; 
    cin >> n; 
    int arr[n]; 
    cout << "Enter elements:\n"; 
    for(int i = 0; i < n; i++) 
    { 
        cin >> arr[i]; 
    } 
    // Selection Sort using  nested loops 
    for(int i = 0; i < n; i++) 
    { 
        for(int j = i + 1; j < n; j++) 
        { 
            if(arr[i] > arr[j]) 
            { 
                // Swap immediately 
                int temp = arr[i]; 
                arr[i] = arr[j]; 
                arr[j] = temp; 
            } 
        } 
    } 
    cout << "Sorted array:\n"; 
    for(int i = 0; i < n; i++) 
    { 
        cout << arr[i] << " "; 
    } 
    return 0; 
}

//program-2
Aim:Write a c++ code to implement Insertion Sort
program:
#include <iostream> 
using namespace std; 
int main() 
{ 
    int n; 
    cout << "Enter number of elements: "; 
    cin >> n; 
    int arr[n]; 
    cout << "Enter elements:\n"; 
    for(int i = 0; i < n; i++) 
    { 
        cin >> arr[i]; 
    } 
    // Insertion Sort using nested loops 
    for(int i = 1; i < n; i++) 
    { 
        for(int j = i; j > 0; j--) 
        { 
            if(arr[j] < arr[j - 1]) 
            { 
                // Swap elements 
                int temp = arr[j]; 
                arr[j] = arr[j - 1]; 
                arr[j - 1] = temp; 
            } 
        } 
    } 
    cout << "Sorted array:\n"; 
    for(int i = 0; i < n; i++) 
    { 
        cout << arr[i] << " "; 
    } 
    return 0; 
}

//program-3
Aim:Write a c++ code to implement Bubble Sort
program:
#include <iostream> 
using namespace std; 
int main() 
{ 
    int n; 
    cout << "Enter number of elements: "; 
    cin >> n; 
    int arr[n]; 
    cout << "Enter elements:\n"; 
    for(int i = 0; i < n; i++) 
    { 
        cin >> arr[i]; 
    } 
    // Bubble Sort using  nested loops 
    for(int i = 0; i < n - 1; i++) 
    { 
        for(int j = 0; j < n - i - 1; j++) 
        { 
            if(arr[j] > arr[j + 1]) 
            { 
                // Swap adjacent elements 
                int temp = arr[j]; 
                arr[j] = arr[j + 1]; 
                arr[j + 1] = temp; 
            } 
        } 
    } 
    cout << "Sorted array:\n"; 
    for(int i = 0; i < n; i++) 
    { 
        cout << arr[i] << " "; 
    } 
    return 0;
}
