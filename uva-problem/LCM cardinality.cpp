#include <iostream>
#include <climits>
#include <cstdlib>
using namespace std;

const int N = 5000;
int lcmCardinality[N];

void calculate() {
    // 1
    lcmCardinality[1] = 1;
    for (int i = 2; i < N; ++i)
        lcmCardinality[i] = 0;
    // other
    for (int i = 2; i < N; ++i) {
        // less than root
        for (int j = i; j <= i * i && j <= N; j += i)
            lcmCardinality[j] += 2;
        // more
        if (i + 1 < INT_MAX / i)
            for (int j = i * (i + 1); j <= N; j += i)
                lcmCardinality[j]++;
    }
}

int main() {
    calculate();
    int n;
    while (cin >> n)
        cout << lcmCardinality[n] << endl;
    return 0;
}
