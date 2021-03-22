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
    string s;
    cin >> s;
    int left = 0, right = 0;
    string lf = "", ri = "";
    for (int i = 0; s[i] != '|'; i++)
    {
        left++;
        lf += s[i];
    }
    for (int i = left; i < s.length(); i++)
    {
        if (s[i] != '|')
        {
            ri += s[i];
            right++;
        }
    }
    string rem;
    cin >> rem;
    int r = (int)rem.length();
    int diff = abs(left - right);
    if (diff > r || (diff < r && diff % 2 == 0 && r % 2 != 0) || (diff < r && diff % 2 != 0 && r % 2 == 0) || (diff == 0 && r != 0 && r % 2 != 0))
    {
        cout << "Impossible";
        // system("pause");
        return 0;
    }

    if (diff == r)
    {
        if (left > right)
        {
            for (int i = 0; i < r; i++)
                ri += rem[i];
            cout << lf << "|" << ri;
            // system("pause");
            return 0;
        }
        else if (left < right)
        {
            for (int i = 0; i < r; i++)
                lf += rem[i];

            cout << lf << "|" << ri;
            // system("pause");
            return 0;
        }
        else if (left == right && r == 0)
        {

            cout << s;
            // system("pause");
            return 0;
        }
        else if (left == right && r != 0)
        {
            for (int i = 0; i < r; i++)
            {
                lf += rem[i];
                ri += rem[r - i - 1];
            }

            cout << lf << "|" << ri;
            // system("pause");
            return 0;
        }
    }
    else if (diff < r)
    {
        int added = ((left + r + right)) / 2 - max(left, right);
        if (left > right)
        {
            for (int i = 0; i < added; i++)
            {
                lf += rem[i];
            }
            for (int i = added; i < r; i++)
                ri += rem[i];

            cout << lf << "|" << ri;
            // system("pause");
            return 0;
        }
        else
        {
            for (int i = 0; i < added; i++)
            {
                ri += rem[i];
            }
            for (int i = added; i < r; i++)
                lf += rem[i];

            cout << lf << "|" << ri;
            // system("pause");
            return 0;
        }
    }
    // system("pause");
}