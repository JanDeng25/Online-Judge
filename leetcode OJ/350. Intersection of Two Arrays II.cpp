class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size() == 0 || nums2.size() == 0)
            return nums1.size() == 0 ? nums1 : nums2;
        vector<int> inter;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        for(int i = 0, j = 0 ; i < nums1.size() && j < nums2.size();){
            if(nums1[i] < nums2[j]){
                //cout<<"1i"<<endl;
                i ++;
            }
            else if(nums1[i] > nums2[j]){
                //cout<<"2j"<<endl;
                j ++;
            }
            else {
                //if(inter.size() == 0 || (inter.size() != 0 && nums1[i] != inter.back()))
                     inter.push_back(nums1[i]);
                i ++;
                j ++;

                     //cout<<i<<' '<<nums1[i-1]<<endl;

            }
        }
        return inter;
    }
};
