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

int getMoneySpent(vector<int> k, vector<int> d, int b)
{
    int n = k.size();
    int m = d.size();

    vector<int> p(k.size(), -1);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (k[i] + d[j] <= b)
                p[i] = max(p[i], k[i] + d[j]);
        }
    }
    return *max_element(p.begin(), p.end());
}