#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,ans=9999999999999,cur=0;
	
	while(true)
	{
		cin>>n;	
   		
		if(n==0)
			break;
				
		if(ans<n)
			cur++;
			
		ans=n;
	}
	
	cout<<cur;
}
