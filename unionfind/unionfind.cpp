#include <bits/stdc++.h>
using namespace std;

#define ll long long
int par[210000];

void init(int n)
{
    for (int i = 0; i < n; i++)
        par[i] = i;
}

int root(int x)
{
    if (par[x] == x)
    {
        return x;
    }
    else
    {
        return par[x] = root(par[x]);
    }
}

bool same(int x, int y)
{
    return root(x) == root(y);
}

void unite(int x, int y)
{
    x = root(x);
    y = root(y);
    if (x == y) return; //return mean "do nothing"
    par[x] = y;
}

int main()
{
    int n, q;
    cin >> n >> q;
    init(200000);
    for (int i = 0; i < q; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a == 0)
            unite(b, c);
        else
            cout << (same(b, c) ? "Yes" : "No") << endl;
    }
}
