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
    string w = "";
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'a' || s[i] == 'y' || s[i] == 'o' || s[i] == 'i' || s[i] == 'e' || s[i] == 'u' || s[i] == 'A' || s[i] == 'Y' || s[i] == 'O' || s[i] == 'I' || s[i] == 'E' || s[i] == 'U')
            continue;
        w.push_back('.');
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] + ('a' - 'A');
        w.push_back(s[i]);
    }
    cout << w;

    // system("pause");
}