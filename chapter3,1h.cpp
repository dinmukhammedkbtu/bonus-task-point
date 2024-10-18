#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,k=1,ans=1;
	cin>>n;
	for(int i=1;i<=n;i++){
		k*=2;
		ans+=k;
	}
	cout<<ans;
}
