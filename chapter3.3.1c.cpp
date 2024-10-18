#include <bits/stdc++.h>
using namespace std;

int main()
{
	cout.setf(ios::fixed);
	cout.precision(11);
	double n=1,cur=0,ans=0;
	
	while(n!=0)
	{
		
		cin>>n;
		
		if(n==0)
			break;
			
		cur+=n;
		ans++;
	}
	cout<<cur/ans;
}
