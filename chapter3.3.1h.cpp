#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int n, mx1 = -1, mx2 = -1;
	
	while(true)
	{
		cin>>n;
		
		if(n==0)
			break;	
			
		if(mx1<=n)
		{
			mx2=mx1;
			mx1=n;
		}
		else
		if(mx2<n)
			mx2=n;
	}
	
	cout<<mx2;
}
