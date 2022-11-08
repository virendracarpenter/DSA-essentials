#include<iostream>
using namespace std;

int main(){
  int t; 
  cin >> t; //2
  int n[t]; //n[2]

  for(int i = 0; i < t; i++){
    cin >> n[i]; // n[0] = 4
                 // n[1] = 4
  }
  while(t){
    int x = 0;
    int arr[n[x]]; // arr[4]
    bool result = false;
    for(int i = 0; i < n[x]; i++){
      cin >> arr[i];
    }

    for(int i = 0; i < n[x]-1; i++){
      if(arr[i]<arr[i+1])
        result = true;
      else 
        result = false;
    }
    if(result)
      cout << "YES\n";
    else
      cout << "NO\n";
    t--;
    x++;
  }


  return 0;
}   
