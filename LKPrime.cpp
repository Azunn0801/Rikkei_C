/*#include <bits/stdc++.h>
#define ll long
using namespace std;

unsigned ll a, b;
int n[1000005];

void filterPrime(unsigned ll b)
{
    memset(n, 0, sizeof(n));
    n[0] = 1;
    n[1] = 1;
    for (unsigned ll i = 2; i <= b; i++)
    {
        if(n[i] == 0)
        {
            for(unsigned ll j = i * i; j <= b; j += i)
                n[j] = 1;
        }
    }

}

int main()
{
    cin >> a >> b;
    filterPrime(b);
    for(unsigned ll i = a; i <= b; ++i)
        if(n[i] == 0)  cout << i << " ";
    return 0;
}*/
#include <bits/stdc++.h>
#define N 1000000
using namespace std;
long long a, b;

bool isPrime(long long num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;

    for (long long i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }

    return true;
}

void check(long long x, long long y)
{
    for(long long i = x; i <= y; i ++)
        if(isPrime(i))
            cout << i << ' ';
}

int main()
{
    cin >> a >> b;
    check(min(a, b), max(a, b));
    return 0;
}
