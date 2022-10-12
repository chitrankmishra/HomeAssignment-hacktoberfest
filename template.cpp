#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

ll pow(ll m, ll n)
{
    if (n == 0)
        return 1;
    if (n & 1)
        return m * pow(m, n / 2) * pow(m, n / 2);
    else
        return pow(m, n / 2) * pow(m, n / 2);
}

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

ll modulo(ll n)
{
    return n % 1000000007;
}

int main()
{
    fio;
    ll test;
    cin >> test;
    while (test--)
    {
        }
    return 0;
}
 this input list contains duplicates
mylist = [5, 3, 5, 2, 1, 6, 6, 4] # 5 & 6 are duplicate numbers.
# find the length of the list
print(len(mylist))
8
# create a set from the list
myset = set(mylist)
# find the length of the Python set variable myset
print(len(myset))
6

