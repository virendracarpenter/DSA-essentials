#include<iostream>
using namespace std;

int main(){
	int k;
	cin >> k;
	int arr[k];

	int SlideToTheLeft(int a[],int n){
int left[n], i;
left[0]=0;
for(i=1;i<n;i++){
    left[i]=Max(left[i-1],a[i-1]);
}
int right=100;
for(i=n-1;i>=0;i--){
    if(left[i]<a[i] && right>a[i]){
        return i;
    }
    right=Min(right,a[i]);
}
return -1;
}
	return 0;
}