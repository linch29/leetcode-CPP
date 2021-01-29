#include <bits/stdc++.h>
using namespace std;

int binary_search(vector<int>& nums, int target) {
    int n = nums.size();
    if (n==1) return nums[0]==target? 0:-1;
    int left = 0, right = n-1;
    int mid;
    while (left<right) {
        if (right==left+1) {
            if (nums[left]==target) return left;
            else if (nums[right]==target) return right;
            else return -1;
        }
        mid = (left+right)/2;
        if (nums[mid]<target) {
            left = mid;
        }
        else if (target<nums[mid]) {
            right = mid;
        }
        else return mid;
    }
    return 0;
}

int main()
{
    vector<int> v = {1,2,4,5,7,8,9};
    cout << binary_search(v,5) << endl;
    cout << binary_search(v,6) << endl;
    return 0;
}
