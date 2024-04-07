#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pii pair<int, int>
#define pll pair<long long, long long>
using namespace std;

int f1(int n, int m)
{
    if (n <= m)
        return n * n;

    return -n * n;
}

int f2(int n, int m)
{
    if (n <= m)
        return exp(n);

    return -exp(n);
}

int Max_peak(int s, int e, int m)
{

    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (f1(mid, m) > f1(mid - 1, m) && f1(mid, m) > f1(mid + 1, m))
            return mid;

        if (f1(mid, m) > f1(mid - 1, m) && f1(mid, m) < f1(mid + 1, m))
            s = mid;

        else
            e = mid;
    }
}

int main()
{

    int m;
    cin >> m;

    cout << "output peak value is : " << Max_peak(0, 100000000, m);

    return 0;
}