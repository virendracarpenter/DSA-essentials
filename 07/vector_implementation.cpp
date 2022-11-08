#include <iostream>
#include "vector.h"
using namespace std;

int main()
{
  Vector<int> v;
  Vector<char> c;

  c.push_back('d');
  c.push_back('a');
  c.push_back('d');
  c.push_back('c');
  c.push_back('a');

  for(int i = 0; i < c.size(); i++){
    cout << c[i] << " ";
  }
  cout << endl;

  v.push_back(1);
  v.push_back(2);
  v.push_back(3);
  v.push_back(4);
  v.push_back(5);
  
  cout << v.front() << endl;
  cout << v.front() << endl;
  cout << v.back() << endl;

  cout<< v.at(4) << endl;


  cout << v.size() << endl;
  cout << v.capacity() << endl;
  cout << v[5] << endl;
  for (int i = 0; i < v.size(); i++){
    cout << v[i] << " ";
  }
  cout << endl;
  return 0;
}
