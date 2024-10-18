#include <bits/stdc++.h>
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define set set<long long int>
#define map map<long long int,long long int>
#define Elnur ios_base::sync_with_stdio(NULL);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
 inline void boost(){  
    ios_base::sync_with_stdio();  
    cin.tie(0);
    cout.tie(0); 
} 
const ll MAX = 3e5 + 111; 
const ll mod = 1e9 + 7; 
const ll inf1 = 1e9 + 111; 
const ll inf2 = 1e17 + 111;
ll b[100001];
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        if(i*i>=n&&i*i<=m){
            cout<<i*i<<" ";
        }
    }
}
