#include<iostream>
#include"list.h"
using namespace std;

int main(){
  
  List l;
  l.push_front(1);
  l.push_front(0);
  l.push_back(34);
  l.push_front(28);
  l.push_back(22);
  l.push_back(21);
  l.insert(22,2);
  l.insert(23,2);
  l.pop_front();
  l.pop_back();
  l.pop_back();
  l.remove(2);
  l.insert(44,2);
  
  Node* head = l.begin();
  while(head!=NULL){
    cout<< head->getData()<<"->";
    head= head->next;
  }
  cout << endl;

  cout << "found at " << l.search(34) << endl;

  l.reversePrint();
  return 0;
}
