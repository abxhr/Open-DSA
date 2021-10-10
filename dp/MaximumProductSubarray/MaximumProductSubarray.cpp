#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

void max_product_subarray(vi a)
{
    int n=a.size();
    int min_v=a[0];
    int max_v=a[0];
    int max_prod=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]<0)
            swap(max_v,min_v);
        max_v=max(a[i],max_v*a[i]);
        min_v=min(a[i],min_v*a[i]);
        max_prod=max(max_prod,max_v);
    }
    cout<<max_prod;
    return;
}

int main()
{
    int n;
    cin >> n;
    vi a(n, 0);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    max_product_subarray(a);
    return 0;
}