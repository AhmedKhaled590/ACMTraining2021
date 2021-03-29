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
    int t;
    cin >> t;
    int tmp = t;
    while (t--)
    {
        int n;
        int cost = 0;
        cin >> n;
        vector<int> temp(n);
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        for (int i = 0; i < n - 1; i++)
        {
            int min = i;
            for (int j = i; j < n; j++)
            {
                if (v[j] < v[min])
                    min = j;
            }
            for (int k = min; k >= i; k--)
            {
                temp[min - k] = v[k];
            }
            for (int l = min + 1; l < n; l++)
                temp[l] = v[l];
            v = temp;
            cost += min - i + 1;
        }
        cout << "Case #" << tmp - t << ": " << cost << endl;
    }
    // system("pause");
}