#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;
const ll MOD = 1e9+7;

ll mod(ll i, ll j){
  return ((i%2019)*j)%2019;
}

int main(){
 cout << mod(2020, 2040) << endl;
  return 0;
}
