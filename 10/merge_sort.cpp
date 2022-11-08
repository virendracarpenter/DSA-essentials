#include<bits/stdc++.h>
using namespace std;

void conquer(vector<int> &arr, int si, int mid, int ei){
  int merged[ei -si +1];

  int idx1 = si;
  int idx2 = mid+1;
  int x = 0;

  while(idx1 <= mid && idx2 <= ei){
    if(arr[idx1] <= arr[idx2])
      merged[x++] = arr[idx1++];
    else
      merged[x++] = arr[idx2++];
  }
  while(idx1 <= mid){
    merged[x++] = arr[idx1++];
  }
  while(idx2 <= ei){
    merged[x++] = arr[idx2++];
  }
}

// sorting method
void divide(vector<int> &arr, int si, int ei){
  // base case
  if(si>=ei)  
    return;
  int mid = si + (ei-si)/2;
  divide(arr, si, mid);
  divide(arr, mid+1, ei);

  conquer(arr, si, mid, ei);
  return conquer(arr, si, mid, ei); 

}

int main(){

  vector<int> arr{10,5,2,0,7,6,4};

  int si = 0;
  int ei =arr.size()-1;
  divide(arr,si,ei);

  for(int x: arr){
    cout<< x << ",";
  }



  return 0;
}
