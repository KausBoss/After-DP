#include <bits/stdc++.h>

using namespace std;

int main()
{
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    int test = 1, c, s, i, ele1, ele2, a, b;
    double avg, ans;
    vector<int>mass;

    while (cin >> c >> s) {
        mass.clear();
        avg = 0.0;

        for (i = 1; i <= s; i++) {
            cin >> ele1;
            mass.push_back(ele1);
            avg += ele1;
        }

        avg /= c;

        while (mass.size() != 2 * c) {
            mass.push_back(0);
        }

        sort(mass.begin(), mass.end());
        a = 0;
        b = mass.size() - 1;
        ans = 0;
        cout <<"Set #"<<test++<< "\n";

        for (i = 0; i < c; i++) {
            cout<<" "<<i<<":";

            ele1 = mass[a];
            ele2 = mass[b];

            if (ele1 != 0) {
                cout<<" "<< ele1;
            }
            if (ele2 != 0) {
                cout<<" "<<ele2;
            }
            cout<<"\n";

            ans += abs((ele1 + ele2) - avg);

            a++;
            b--;
        }
        cout<<"IMBALANCE = "<<setprecision(5)<<fixed<<ans<<"\n\n";
    }

    return 0;
}
