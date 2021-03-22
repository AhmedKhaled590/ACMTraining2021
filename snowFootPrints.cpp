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
    int n;
    cin >> n;
    int str = -1, stl = -1, r = 0, l = 0;
    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        if (c == 'R')
        {
            if (str == -1)
                str = i + 1;
            r++;
        }

        else if (c == 'L')
        {
            if (stl == -1)
                stl = i + 1;
            l++;
        }
    }
    if (str == -1)
    {
        cout << stl + l - 1 << " ";
    }
    else
    {
        cout << str << " ";
    }

    if (stl == -1)
    {
        cout << str + r;
    }
    else
    {
        cout << stl - 1;
    }
    // system("pause");
}