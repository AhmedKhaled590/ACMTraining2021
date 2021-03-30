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
    int n, m;
    cin >> n >> m;
    vector<int> posG(n);
    vector<int> posS(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char c;
            cin >> c;
            if (c == 'G')
                posG[i] = j;
            else if (c == 'S')
                posS[i] = j;
        }
    }
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        if (posG[i] > posS[i] || posG[i] == m - 1)
        {
            cout << "-1";
            return 0;
        }
        s.insert(posS[i] - posG[i]);
    }
    cout << s.size() << endl;
    // system("pause");
}