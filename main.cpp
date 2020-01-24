#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
#include <functional>
#include <numeric>
#include <limits>
#include <iomanip>
#include <queue>
#include <cmath>
#include <math.h>
using namespace std;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
const long long INF = 1LL << 60;
using pll = pair<long long, long long>;
#define min(a, b) ((a) < (b) ? (a) : (b))


// 最大公約数
long long gcd(long long a, long long b)
{
	if (a % b == 0) {
		return(b);
	} else {
		return(gcd(b, a % b));
	}
}

// 最小公倍数
long long lcm(long long a, long long b)
{
	return a * b / gcd(a, b);
}

// 座標の角度を求める。
double calculateDegree(double y, double x) {
	double radian = atan2(y, x);
	double degree = radian * (180.0 / 3.141592653589793238463);
	return degree;
}

// 素因数分解
vector<pair<long long, long long> > prime_factorize(long long n) {
    vector<pair<long long, long long> > res;
    for (long long p = 2; p * p <= n; ++p) {
        if (n % p != 0) continue;
        int num = 0;
        while (n % p == 0) { ++num; n /= p; }
        res.push_back(make_pair(p, num));
    }
    if (n != 1) res.push_back(make_pair(n, 1));
    return res;
}


int main() {
}
