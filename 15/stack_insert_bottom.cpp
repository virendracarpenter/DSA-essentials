#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &s, int data){
  if(s.empty()){
    s.push(data);
    return;
  }
  int temp = s.top();
  s.pop();
  insertAtBottom(s, data);
  s.push(temp);
}

void reverse(stack<int> &s){
  if(s.empty){
    retrun;
  }
  int t = s.top();
  reverse(s);
  insertAtBottom(s,t);

}

int main(){
  stack<int> s;
  

  s.push(1);
  s.push(2);
  s.push(3);
  s.push(4);
  insertAtBottom(s, 5);

  cout<<"   |"<< endl <<"  \\/ "<<endl;

  while(!s.empty()){
    cout<< "| " << s.top()<< " |"<<endl;
    cout<< "====="<< endl;
    s.pop();
  }



  return 0;
}
