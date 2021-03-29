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
    int temp = t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length();
        string s2 = "";
        int Paran = 0;
        for (int i = 0; i < s[0] - '0'; i++)
            s2.push_back('(');
        Paran += (s[0] - '0');
        s2.push_back(s[0]);
        for (int i = 1; i < n; i++)
        {
            int diff = s[i] - s[i - 1];
            if (diff > 0)
            {
                for (int i = 0; i < diff; i++)
                    s2.push_back('(');
                s2.push_back(s[i]);
                Paran = Paran + (diff);
            }
            else if (diff < 0)
            {
                for (int i = 0; i < abs(diff); i++)
                    s2.push_back(')');
                s2.push_back(s[i]);
                Paran = Paran - abs(diff);
            }
            else
            {
                s2.push_back(s[i]);
            }
        }
        for (int i = 0; i < Paran; i++)
            s2.push_back(')');
        cout << "Case #" << temp - t << ": " << s2 << endl;
    }
    // system("pause");
}
