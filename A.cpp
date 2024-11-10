#include<bits/stdc++.h>
using namespace std;

typedef long long LL;
#define name "main"
#define FOR(i,a,b) for(int i=(a);i<=(b);++i)
#define FORD(i,a,b) for(int i=(b);i>=(a);--i)

const int N=1'0000;
LL dp[N+2];
int h[N+2];
int n,D,H;

int32_t main(){
	freopen(name".inp","r",stdin);
	freopen(name".out","w",stdout);
	scanf("%d%d%d",&n,&D,&H);
	FOR(i,1,n) scanf("%d",&h[i]);
	memset(dp,0x3f,sizeof dp);
	dp[1]=h[1];
	LL inf=dp[0];
	FOR(i,1,n){
		FOR(j,max(1,i-D),i-1){
			if (abs(h[i]-h[j])<=H) dp[i]=min(dp[i],dp[j]+h[i]);
		}
	}
	printf("%lld",(dp[n]!=inf?dp[n]:-1));
	exit(0);
}
