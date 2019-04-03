#include<bits/stdc++.h>
using namespace std;
const long long INF =1LL << 60;

int main(){
  //Sieve of Eratosthenes
  int MAX= 1010101;
  vector<int> is_prime(MAX, 1);
  is_prime[0] = 0;
  is_prime[1] = 0;
  for(int i =2; i<MAX; i++){
    if(!is_prime[i]) continue;
    for(int j=2*i; j<MAX; j+=i){
      is_prime[j] = 0;
    }
  }

  vector<int> a(MAX, 0);
  for(int i =0; i<MAX; i++){
    if(!is_prime[i]) continue;
    if(is_prime[i] && is_prime[(i+1)/2]) a[i]=1;
  }

  vector<int> s(MAX+1, 0);
  for(int i = 0; i<MAX; i++){
    s[i+1]=s[i]+a[i];
  }

  int Q;
  cin >> Q;
  for(int q=0; q<Q; q++){
    int l, r;
    cin >> l >> r;
    r++;
    cout << s[r] -s[l] << endl;
  }
}