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
    string s;
    cin >> s;
    int n = s.length();
    int z = 0, o = 0;
    for (int i = 0; i < n;)
    {
        z = 0, o = 0;
        while (i < n && s[i] == '0')
        {
            z++;
            i++;
            if (z >= 7)
            {
                cout << "YES";
                return 0;
            }
        }
        while (i < n && s[i] == '1')
        {
            o++;
            i++;
            if (o >= 7)
            {
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";

    // system("pause");
}