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

bool cmp(pair<int, int> p1, pair<int, int> p2)
{
    return p1.second < p2.second;
}

int main()
{
    int t;
    cin >> t;
    int temp = t;
    while (t--)
    {
        bool breaked = 0;
        int lastAdded = -1;
        int n;
        cin >> n;
        vector<pair<int, int>> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i].first >> v[i].second;
        }
        sort(v.begin(), v.end(), cmp);
        vector<char> slots(n);
        slots[0] = 'C';
        lastAdded = 0;
        for (int i = 1; i < n; i++)
        {
            if (v[i].first >= v[lastAdded].second)
            {
                slots[i] = 'C';
                lastAdded = i;
            }
        }
        int firstChose = 1;
        while (slots[firstChose] == 'C')
            firstChose++;
        if (firstChose < n)
        {
            slots[firstChose] = 'J';
            lastAdded = firstChose;
            for (int i = firstChose + 1; i < n; i++)
            {
                if (v[i].first < v[lastAdded].second && slots[i] != 'C')
                {
                    cout << "Case #" << temp - t << ": IMPOSSIBLE\n";
                    breaked = true;
                    break;
                }
                if (slots[i] != 'C')
                {
                    slots[i] = 'J';
                    lastAdded = i;
                }
            }
            if (!breaked)
            {
                cout << "Case #" << temp - t << ": ";
                for (int i = 0; i < n; i++)
                {
                    cout << slots[i];
                }
            }
            cout << endl;
        }
    }
    // system("pause");
}