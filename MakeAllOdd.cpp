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
    int n;
    int odd = 0, even = 0, num;
    while (t--)
    {
        odd = 0, even = 0;
        cin >> n;
        while (n--)
        {
            cin >> num;
            num & 1 ? odd++ : even++;
        }
        (odd) ? cout << even << endl : cout << "-1" << endl;
    }
    // system("pause");
}
