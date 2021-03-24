#include <iostream>
#include <stdio.h>
#include <sstream>
#include <cstdio>
#include <fstream>
#include <algorithm>
#include <vector>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>
#include <unordered_map>
#include <stdio.h>
#include <string.h>
using namespace std;
#define ll long long
#define ld long double

int main()
{
    ll n;
    scanf("%d", &n);
    vector<int> pos(n + 1);
    int a;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        pos[a] = i;
    }
    int q;
    scanf("%d", &q);
    ll ap1 = 0, ap2 = 0;
    while (q--)
    {
        scanf("%d", &a);
        ap1 += pos[a] + 1;
        ap2 += n - pos[a];
    }
    cout << ap1 << " " << ap2;
    // system("pause");
}