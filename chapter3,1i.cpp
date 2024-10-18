#include <bits/stdc++.h>
using namespace std;
int main(){
	double n,ans=1,m=1;
	cin>>n;
	for(int i=1;i<=n;i++){
		m*=i;
		ans+=1/m;
	}
	cout<<ans;
}

