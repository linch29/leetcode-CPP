#include <bits/stdc++.h>
using namespace std;

struct cmp_dading
{
    bool operator() (const int& a, const int& b)
    {
        return a<b;
    }
};

struct cmp_xiaoding
{
    bool operator() (const int& a, const int& b)
    {
        return a>b;
    }
};

struct cmp
{
    bool operator() (const pair<int,int>& a, const pair<int,int>& b)
    {
        return a.first>b.first;
    }
};

int main()
{
    priority_queue<int, vector<int>, cmp_dading> pq;
    pq.push(1);
    pq.push(2);
    pq.push(5);
    pq.push(4);
    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;

    priority_queue<int, vector<int>, cmp_xiaoding> pq2;
    pq2.push(1);
    pq2.push(2);
    pq2.push(5);
    pq2.push(4);
    cout << pq2.top() << endl;
    pq2.pop();
    cout << pq2.top() << endl;
    priority_queue<pair<int,int>, vector<pair<int,int>>, cmp> pq3;
    pq3.push(make_pair(1,5));
    pq3.push(make_pair(4,7));
    pq3.push(make_pair(2,7));
    cout << pq3.top().second << endl;
    pq3.pop();
    cout << pq3.top().second << endl;
    cout << pq3.size() << endl;
    return 0;
}
