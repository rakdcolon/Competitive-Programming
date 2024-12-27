#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void solve() 
{
    vector<int> v;
    string s;
    cin >> s;

    const char delim = '+';

    size_t pos = 0;
    while ((pos = s.find(delim)) != string::npos) 
    {
        v.push_back(s[pos - 1] - '0');
        s.erase(0, pos + 1);
    }
    v.push_back(stoi(s));

    sort(v.begin(), v.end());

    int l = v.size() - 1;

    for (int i = 0; i < l; i++) 
    {
        cout << v[i] << '+';
    }

    cout << v[l];
}

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);

    int tc = 1;

    for (int t = 1; t <= tc; t++) 
    {
        solve();
    }
}
