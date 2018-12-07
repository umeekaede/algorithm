#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[10010];

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int dp[10010];
    dp[0]=0;
    for(int i=0; i<n; i++){
        dp[i+1]=max(dp[i], dp[i]+a[i]);
    }

    cout << dp[n] << endl;
}