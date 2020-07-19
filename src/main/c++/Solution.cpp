#include <algorithm>
#include <bitset>
#include <cassert>
#include <chrono>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <random>
#include <set>
#include <stack>
#include <vector>

using namespace std;

#define SZ(x) (int)(x).size()
#define F first
#define S second
#define FOR(i, begin, end) for (int i = begin; i < end; i++)

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<double> vd;
typedef vector<vector<int>> vvi;
typedef vector<vector<ll>> vvll;
typedef vector<vector<double>> vvd;
typedef pair<int, int> pii;

const int MOD = 1000000007;

class Solution {
public:
    int test () {
        cout << "Hello World!" << endl;
        vi vi1 = {1, 2, 3};
        FOR(i, 0, SZ(vi1)) {
            cout << vi1[i] << endl;
        }
        return 0;
    }
};


int main () {
    Solution solution;
    solution.test();
    return 0;
}