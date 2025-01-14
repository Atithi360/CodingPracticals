// CPP program to find minimum and maximum element 
// in an array. 
#include <iostream>
using namespace std; 
  
int getMin(int arr[], int n) 
{ 
    int res = arr[0]; 
    for (int i = 1; i < n; i++) 
        res = min(res, arr[i]); 
    return res; 
} 
  
int getMax(int arr[], int n) 
{ 
    int res = arr[0]; 
    for (int i = 1; i < n; i++) 
        res = max(res, arr[i]); 
    return res; 
} 
  
int main() 
{ 
    int arr[] = { 10, 6574, 72, 27, 7 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    cout << "Minimum element of array: " << getMin(arr, n) << "\n"; 
    cout << "Maximum element of array: " << getMax(arr, n); 
    return 0; 
} 
