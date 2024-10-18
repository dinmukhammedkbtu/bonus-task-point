#include <bits/stdc++.h>
using namespace std;
int main(){
	int n=1,cur=0;
	while(n!=0){
		cin>>n;
		if(n==0)
			break;
		cur++;
	}
	cout<<cur;
}
