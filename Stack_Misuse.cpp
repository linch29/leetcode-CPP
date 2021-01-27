#include <bits/stdc++.h>
using namespace std;

int *getPtr() {
    int y;
    y = 3;
    return &y;
};

int main()
{
    int *stackAddr, content;
    stackAddr = getPtr();
    content = *stackAddr;
    printf("%d", content);
    content = *stackAddr;
    printf("%d", content);
    return 0;

}
