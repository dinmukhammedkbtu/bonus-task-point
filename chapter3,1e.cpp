#include <bits/stdc++.h>
using namespace std;
int main(){
	double a,n,k=1,ans=1;
	cin>>a>>n;
	for(int i=1;i<=n;i++){
		k*=a;
		ans+=k;
	}
	cout<<ans;
}
