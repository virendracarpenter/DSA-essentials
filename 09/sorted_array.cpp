#include<iostream>
using namespace std;

bool isSorted(int arr[], int n){
  if(n == 0 || n == 1)
    return true;
  if(arr[0]<= arr[1] && isSorted(arr+1, n-1))
    return true;
  return false;
}

int main(){
  
  int arr[] = {2,3,4,5,6,7,8,9}, n = 8;
  cout << isSorted(arr, n) << endl;
  int arr2[] = {2,3,5,8,6,7,8,9};
  cout << isSorted(arr2, n) << endl;

  return 0;
}
// This program to check is the given array is sorted or not 
