#include <bits/stdc++.h>
using namespace std;
int main (){
	int n,ans1=1,k,ans2=1,ans3=1;
	cin>>n>>k;
	int i;
	for( i=1;i<=n;i++){
		ans1*=i;
	}
		for(i=1;i<=k;i++){
			ans2*=i;
		}
			for( i=1;i<=n-k;i++){
			ans3*=i;
			}
			
		
        
    

cout<<ans1/(ans2*ans3);
}
	

