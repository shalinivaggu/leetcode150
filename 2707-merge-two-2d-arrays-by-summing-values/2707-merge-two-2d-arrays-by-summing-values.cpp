class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        int p = nums1.size() , q = nums2.size(), i = 0 , j = 0;
        vector<vector<int>> ans ;

        while(i < p && j < q) {
            if(nums1[i][0] == nums2[j][0]) {
                ans.push_back({nums1[i][0] , nums1[i][1] + nums2[j][1]});
                i++,j++;
            } else if (nums1[i][0] < nums2[j][0]) {
                ans.push_back(nums1[i]);
                i++;

            } else {
                ans.push_back(nums2[j]);
                j++;
            }
        } 

        while(i < p ) {
            ans.push_back(nums1[i]);
            i++;
        } 

        while(j < q ) {
            ans.push_back(nums2[j]);
            j++;
        }

        return ans;
    }

};