/*
Merge Sorted Array
Easy Topics Company Tags

You are given two integer arrays nums1 and nums2, both sorted in non-decreasing order, along with two integers m and n, where:

    m is the number of valid elements in nums1,

    n is the number of elements in nums2.

The array nums1 has a total length of (m+n), with the first m elements containing the values to be merged, and the last n elements set to 0 as placeholders.

Your task is to merge the two arrays such that the final merged array is also sorted in non-decreasing order and stored entirely within nums1.
You must modify nums1 in-place and do not return anything from the function.

Example 1:

Input: nums1 = [10,20,20,40,0,0], m = 4, nums2 = [1,2], n = 2

Output: [1,2,10,20,20,40]
*/

#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int last = m + n - 1;
        while(m > 0 && n > 0){
            if (nums1[m-1] > nums2[n-1]){
                nums1[last] = nums1[m-1];
                --m;
            }
            else {
                nums1[last] = nums2[n-1];
                --n;
            }
            --last;
        }
        while (n  > 0){
            nums1[last] = nums2[n-1];
            --n;
            --last;
        }
    }
};