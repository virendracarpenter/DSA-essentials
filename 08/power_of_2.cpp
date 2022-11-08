#include<iostream>
using namespace std;

bool isPowerOfTwo(int &n){
  return ((n & (n-1))==0);
}

int main(){

  int n;

  cin >> n;

  if(isPowerOfTwo(n))
    cout << "PO2" << endl;
  else
    cout << "NPO2" << endl;
}
