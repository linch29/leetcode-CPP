#include <bits/stdc++.h>
using namespace std;

bool check(vector<string>& cur, int i, int j) {
    int n = cur.size();
    for (int col=0; col<n; col++) {
        if (cur[i][col]=='Q') return false;
    }
    for (int row=0; row<n; row++) {
        if (cur[row][j]=='Q') return false;
    }
    int zuoshangstep = min(i,j), youxiastep = min(n-1-i,n-1-j);
    int step = zuoshangstep+youxiastep+1;
    int starti = i-zuoshangstep-1, startj = j-zuoshangstep-1;
    for (int times=0; times<step; times++) {
        starti++; startj++;
        if (cur[starti][startj]=='Q') return false;
    }
    int zuoxiastep = min(n-1-i,j), youshangstep = min(i,n-1-j);
    step = zuoxiastep+youshangstep+1;
    starti = i+zuoxiastep+1, startj = j-zuoxiastep-1;
    for (int times=0; times<step; times++) {
        starti--; startj++;
        if (cur[starti][startj]=='Q') return false;
    }
    return true;
}

int main()
{
    unordered_set<string> s;
    s.insert("348785007@qq.com");
    s.insert("a348785007@qq.com");
    s.insert("348785007@qq.com");
    cout << s.size() << endl;
    for (auto e:s) {
        cout << e << ' ';
    }
    return 0;
}
