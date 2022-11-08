#include<iostream>
#include<vector>
#include<ctime>
#include<algorithm>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> arr(n,0);

  for(int i = 0; i < n; i++){
    arr[i] = n - i;
  }
  
  auto st = clock();
  sort(arr.begin(), arr.end());
  auto et = clock();

  cout << et - st << endl;

  cout << st << " " << et << endl;


  return 0;
}
