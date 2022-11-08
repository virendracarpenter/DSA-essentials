#include<bits/stdc++.h>

using namespace std;

void print(vector<int> &vtr){
  for (auto x: vtr){
    cout << x << " ";
  }
  cout << endl;
} 
 
int main()
{
  vector <int> arr = {1, 2, 3, 4, 5, 55, 66, 77, 89};
  // fill constructor
  //
  vector<int> filled(20,0);
  print(filled);

  //push_back
  arr.push_back(23);

  //size of vector 
  cout << endl <<  arr.size() << endl;
  
  cout << arr.capacity() << endl;
  print(arr);
  return 0;
}
