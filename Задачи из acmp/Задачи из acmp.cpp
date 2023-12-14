#include <fstream>
#include <algorithm>
#include <math.h>
#include <iomanip>
using namespace std;
ifstream cin("input.txt");
ofstream cout("output.txt");
int main() {
    int x[10000], n, i;
    double o, s;
    s = 0;
    cin >> x[0];
    for (n = 0; x[n] > 0; n++) {
        cin >> x[n + 1];
    }
    for (i = 0; i < n; i++) {
        s = s + x[i];
    }
    s = s / n;
    o = 0;
    for (i = 0; i < n; i++) {
        o = o + (x[i] - s) * (x[i] - s);
    }
    o = sqrt (o / (n - 1));
    cout << fixed << setprecision(11);
    cout << o;
    //rjvtyn
    cout << o;
    return 0;
}