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
#include <limits.h>
using namespace std;
#define ll long long
#define ld long double

int main()
{
    int n;
    cin >> n;
    if (n < 8)
    {
        cout << "0";
        return 0;
    }
    map<char, int> m{{'c', 0}, {'o', 0}, {'d', 0}, {'e', 0}, {'r', 0}, {'a', 0}, {'m', 0}, {'s', 0}};
    char c;
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        if (c == 'c' || c == 'o' || c == 'd' || c == 'e' || c == 'r' || c == 'a' || c == 'm' || c == 's')
            m[c]++;
    }
    int min = INT_MAX;
    for (auto i : m)
    {
        if (i.second < min)
            min = i.second;
    }
    cout << min;
    // system("pause");
}