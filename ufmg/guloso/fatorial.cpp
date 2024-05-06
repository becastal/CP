#include <bits/stdc++.h>
#define f first
#define s second
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define dbg(x) cout << #x << " = " << x << endl
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
using namespace std;

int main()
{
    _;

    int n; cin >> n;
    vector<int> fatorial(11, 1);

    for (int i = 1; i <= 10; i++)
        fatorial[i] = fatorial[i-1] * i;

    int idx = 10, resp = 0;
    while (n > 0)
    {
        if (fatorial[idx] <= n)
        {
            resp++;
            n -= fatorial[idx];
        }
        else
            idx--;
    }

    cout << resp << endl;
    return 0;
}
