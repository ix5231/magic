#include <bits/stdc++.h>

#define all(x) (x).begin(),(x).end()
#define init() \
  ios::sync_with_stdio(false); \
  cin.tie(0)

using namespace std;

using ll = long long;
using ull = unsigned long long;

template<typename M, typename N>
constexpr common_type_t<M, N> gcd(M a, N b) {
  return a == 0 ? b
    : b == 0 ? a
    : gcd(b, a % b);
}

template <typename M, typename N>
constexpr common_type_t<M, N> lcm(M a, N b) {
  return a * b / gcd(a, b);
}

int main() {
  init();

  return 0;
}
