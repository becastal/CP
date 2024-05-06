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

    vector<int> v(n);
    for (auto& ni : v)
        cin >> ni;

    int resp = -INF, somaAnt = -INF;
    
    for (auto ni : v)
    {
        if (somaAnt < 0)
            somaAnt = 0;
        
        somaAnt += ni;
        resp = max(resp, somaAnt);
    }

    cout << resp << endl;

    return 0;
}
