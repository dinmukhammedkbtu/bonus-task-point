#include <bits/stdc++.h>
using namespace std;

int main()
   {
	int n=1,cur=0,prev=-1;
	
	while(true)
	{
		
		cin>>n;
		
		if(n==0&&prev==0)
			break;
			
		cur+=n;
		prev=n;
	}
	
	cout<<cur;
}
