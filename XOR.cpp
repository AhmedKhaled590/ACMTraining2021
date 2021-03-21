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

bool cmp(pair<int, pair<int, int>> p1, pair<int, pair<int, int>> p2)
{
    return p1.first > p2.first;
}

int main()
{
    int t;
    cin >> t;

    int a, b;
    while (t--)
    {
        cin >> a >> b;
        if ((a ^ b) == (a + b))
            cout << "NO\n";
        else
            cout << "YES\n";
    }

    // system("pause");
}
