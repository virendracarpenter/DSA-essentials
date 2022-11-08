#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &a, int s, int e){
  int pivot = a[e];
  int i = s-1;

  for (int j=s; j<e; j++){
    if(a[j] < pivot){
      i++;
      swap(a[i], a[j]);
    }
  }
  swap(a[i+1], a[e]);
  return i+1;
}

void quickSort(vector<int> &a, int s, int e){
  // base case
  if(s>=e)
    return;
  int p = partition(a, s, e);
  quickSort(a, s, p-1);
  quickSort(a, p+1, e);
}

int main(){
  vector<int> arr{2,3,4,5,6,88,7,44,33};
  int e = arr.size();
  int s = 0;

  quickSort(arr, s, e-1);
  
  for(int x: arr){
    cout << x << " ";
  }

  return 0;
}
