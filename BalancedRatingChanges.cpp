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
    int num = 0;
    int a;

    for (int i = 0; i < n; i++)
    {

        cin >> a;
        if (abs(a) % 2 == 0)
        {
            a /= 2;
        }
        else
        {
            if (a < 0)
            {
                if (num % 2 == 0)
                {
                    a = -1 * (((-1 * a) + 1)) / 2.0;
                    num++;
                }
                else
                {
                    a = -1 * (((-1 * a) - 1)) / 2.0;
                    num++;
                }
            }
            else
            {
                if (num % 2 == 0)
                {
                    a = (a - 1) / 2.0;
                    num++;
                }
                else
                {
                    a = (a + 1) / 2.0;
                    num++;
                }
            }
        }
        cout << a << endl;
    }
    // system("pause");
}