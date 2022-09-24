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
    string a, b;
    cin >> a >> b;
    transform(a.begin(), a.end(), a.begin(),
    [](unsigned char c){ return tolower(c); });
    transform(b.begin(), b.end(), b.begin(),
    [](unsigned char c){ return tolower(c); });
    if (a>b) {
        cout << "1";
    }
    else if (b>a) {
        cout << "-1";
    }
    else {
        cout << "0";
    }
}
