#include <bits/stdc++.h>
using namespace std;
int main(){
	long long a,b;
	cin>>a>>b;
	while (a>b){
		if(a%2==0&&a>=b*2){
			a/=2;
			cout<<":2"<<endl;
		}
		else
		if(a>b){
			a--;
			cout<<"-1"<<endl;
		}
	}
}
