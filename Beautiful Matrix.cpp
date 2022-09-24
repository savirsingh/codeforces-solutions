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
    int one_index;
    int moves=0;
    for (int i=0; i<25; i++) {
        int a;
        cin >> a;
        if (a==1) {
            one_index=i;
        }
    }
    if (one_index<5) {
        moves+=abs(2-one_index);
        one_index=2;
    }
    else if (one_index<10) {
        moves+=abs(7-one_index);
        one_index=7;
    }
    else if (one_index<15) {
        moves+=abs(12-one_index);
        one_index=12;
    }
    else if (one_index<20) {
        moves+=abs(17-one_index);
        one_index=17;
    }
    else {
        moves+=abs(22-one_index);
        one_index=22;
    }
    while (one_index!=12) {
        if (one_index<12) {
            one_index+=5;
        }
        else {
            one_index-=5;
        }
        moves++;
    }
    cout << moves;
}
