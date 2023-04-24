#include <bits/stdc++.h>
using namespace std;

int n,r;
int u,v,w;
int s,d,p;
int cs=1;
int dp[105][105];

void floyd(){
	for(int k =1;k<=n;k++){
		for(int i = 1;i <= n;i++){
			for(int j=1; j <= n;j++){
				dp[i][j]=max(dp[i][j],min(dp[i][k],dp[k][j]));
			}
		}
	}
}

void initial(){
	for(int i=1;i<=n;i++){
		for(int j =1 ;j<=n;j++){
			dp[i][j] = 0;
		}
	}
}


int main(){
	while(cin >> n >> r){
		if(n == 0 && r == 0) break;
		initial();
		memset(dp,0,sizeof(dp));
		for(int i=0;i<r;i++){
			cin >> u >> v >> w;
			dp[u][v] = w;
			dp[v][u] = w;
		}
		floyd();
		cin >> s >> d >> p;
		int ans = p/(dp[s][d]-1);
		if(p%(dp[s][d]-1)>0) ans++;
		cout << "Scenario #" << cs++ << endl;
		cout << "Minimum Number of Trips = "<< ans << endl<<endl;

	}
	return 0;
}