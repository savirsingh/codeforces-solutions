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
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        if (s.size()<11) {
            cout << s << "\n";
            continue;
        }
        else {
            cout << s[0];
            cout << s.size()-2;
            cout << s[s.size()-1];
            cout << "\n";
        }
    }
}
