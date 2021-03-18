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
    vector<int> ones;
    vector<int> twos;
    vector<int> threes;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a == 1)
            ones.push_back(i + 1);
        else if (a == 2)
            twos.push_back(i + 1);
        else
            threes.push_back(i + 1);
    }
    int mini = min(min(ones.size(), twos.size()), threes.size());
    cout << mini << endl;
    for (int i = 0; i < mini; i++)
    {
        cout << ones[i] << " " << twos[i] << " " << threes[i] << endl;
    }
    // system("pause");
}