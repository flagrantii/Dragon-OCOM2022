#include <bits/stdc++.h>
using namespace std;

long long solve(int a[],int l, int r) {
    long long sum=0;
    for (int i=l;i<=r;i++) {
        sum+=a[i];
    }
    return sum;
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,m,l,r;
    cin >> n >> m;
    int a[n];
    for (int i=0;i<n;i++) cin >> a[i];
    while (m--) {
        cin >> l >> r;
        cout << solve(a,l-1,r-1) << "\n";
    }
}
