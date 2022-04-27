class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int,int> mp;
        for(int i=0; i<nums1.size(); ++i){
            mp[nums1[i]]++;
        }
        for(int i=0; i<nums2.size(); ++i){
            if(mp[nums2[i]] != 0){
                mp[nums2[i]]--;
                ans.push_back(nums2[i]);
            }
        }
        return ans;
    }
    /*
        vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int i=0, j=0;
        while(i<nums1.size()&&j<nums2.size()){
            if(nums1.at(i)==nums2.at(j)){
                ans.push_back(nums1.at(i));
                i++;
                j++;
            }
            else if(nums1.at(i)>nums2.at(j)){
                j++;
            }
            else{
                i++;
            }
        }
        return ans;
    }
    */
};