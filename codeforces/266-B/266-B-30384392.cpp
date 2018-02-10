#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <cstdio>

using namespace std;
typedef long long ll;
#define MEM(a, b) memset(a, (b), sizeof(a))
#define FOR(i, j, k, in) for (int i=j ; i<k ; i+=in)
#define RFOR(i, j, k, in) for (int i=j ; i>=k ; i-=in)
#define REP(i, j) FOR(i, 0, j, 1)
#define RREP(i, j) RFOR(i, j, 0, 1)
#define FOREACH(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define pb push_back
#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)
#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
typedef vector<int>		vi;
typedef vector<ll>		vl;
const int mod = 1000000007;

int main()
{
    //freopen("../input.txt","r",stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    int t;
    string s;
    char prev;
    cin>>n;
    cin>>t;
    cin>>s;
    for(int i=0; i<t; i++){
        prev=s[0];
        for(int j=1; j<n; j++){
            char temp=s[j];
            if(s[j]=='G' && prev=='B'){
                s[j]='B';
                s[j-1]='G';
            }
            prev=temp;
        }
    }
    cout<<s<<endl;
	return 0;
}