#include<bits/stdc++.h>
using namespace std;

vector<int> unionofTwoSortedArrays(vector<int> &nums1, vector<int>&nums2, int n, int m) {
    int i = 0, j = 0;
    vector<int> res;
    while (i < n && j < m) {
        if (nums1[i] <= nums2[j]) {
            if (res.empty() || res.back() != nums1[i]) {
                res.push_back(nums1[i]);
            }
            i++;
        } else {
            if (res.empty() || res.back() != nums2[j]) {
                res.push_back(nums2[j]);
            }
            j++;
        }
    }
    while (j < m) {
        if (res.empty() || res.back() != nums2[j]) {
            res.push_back(nums2[j]);
        }
        j++;
    }
    while (i < n) {
        if (res.empty() || res.back() != nums1[i]) {
            res.push_back(nums1[i]);
        }
        i++;
    }
    return res;
}

void print_array(vector<int> res) {
    for (auto & i : res) {
        cout << i << " ";
    }
}

int main() {
    int n;
    cout << "Enter the size of array 1: ";
    cin >> n;
    vector<int> nums1(n);
    cout << "Enter elements of array 1: ";
    for (int i = 0; i < n; i++) {
        cin >> nums1[i];
    }
    int m;
    cout << "Enter the size of array 2: ";
    cin >> m;
    vector<int> nums2(m);
    cout << "Enter the elements of array 2: ";
    for (int i = 0; i < m; i++) {
        cin >> nums2[i];
    }
    vector<int> res = unionofTwoSortedArrays(nums1, nums2, n, m);
    cout << "The union of two sorted arrays is : ";
    print_array(res);
    return 0;
}
