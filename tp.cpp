#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

inline ll read()
{
    ll x = 0, f = 1;
    char ch = getchar();
    while (!isdigit(ch))
    {
        if (ch == '-')
            f = -1;
        ch = getchar();
    }
    while (isdigit(ch))
    {
        x = x * 10 + ch - 48;
        ch = getchar();
    }
    return x * f;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int arr[10];
    arr[0] = 10;
    
    cout << arr[0] << endl;
    
    vector<int> v;

    v.push_back(10);
    cout << v[0] << endl;
    // Example usage of the read() function
    ll n = read();

    // Example usage of the vector container
    vector<ll> v1(n);
    for (ll i = 0; i < n; i++)
    {
        v1[i] = read();
    }

    // Example usage of a simple for loop
    for (ll i = 0; i < n; i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;

    return 0;
}
