#include<iostream>
#include<algorithm>
#include<vector>


using namespace std;

int main(){
  vector<int> arr = {10,20,33,44,32,21,1,2,4,6,4};
  
  int key;
  cout << "enter key to search ";
  cin >> key;

  vector<int>::iterator itr = find(arr.begin(), arr.end(),key);
  
  if(itr != arr.end())
    cout << "found at " << itr - arr.begin() << endl;
  else
    cout << "not found" << endl;
  return 0;
}
