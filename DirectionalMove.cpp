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
    int t;
    cin >> t;
    char c;
    int n;
    int ones = 0, zeroes = 0;
    vector<char> z{'E', 'S', 'W', 'N'};
    vector<char> o{'E', 'N', 'W', 'S'};
    while (t--)
    {
        ones = 0, zeroes = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> c;
            if (c == '1')
                ones++;
            else
                zeroes++;
        }
        if (ones == zeroes)
            cout << "E" << endl;
        else if (ones > zeroes)
            cout << o[(ones - zeroes) % 4] << endl;
        else
            cout << z[(zeroes - ones) % 4] << endl;
    }
    // system("pause");
}