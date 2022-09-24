// code by savir singh
// verdict: accepted

#include <bits/stdc++.h>
using namespace std;
// macros
#define int long long
#define double long double
#define bit32 int32_t
#define del erase
#define pb push_back
#define str string
#define scani(x) scanf("%lld", &x)
#define scan(x) scanf("%s", &x)
#define scanc(x) scanf("%c", &x)
#define printi(x) printf("%lld", x);
#define print(x) printf("%s", x);
#define printc(x) printf("%c", x);

// driver code
bit32 main()
{
    int n, k;
    cin >> n >> k;
    vector<int> scores (n);
    for (int i=0; i<n; i++) {
        cin >> scores[i];
    }
    int kthplace = scores[k-1];
    int advancing=0;
    for (int a : scores) {
        if (a>0 && a>=kthplace) {
            advancing++;
        }
    }
    cout << advancing;
}
