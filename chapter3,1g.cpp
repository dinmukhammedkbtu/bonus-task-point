#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >>n;
  double ans=1.0;
  int a = -1;
  for(int i=1; i<=n;i++) {
    ans+=a/(2.0*i+1);
    if(i%2==0){
    	a=-1;
	}
	else{
		a=1;
	}
  }
 cout<<ans*4;
}

