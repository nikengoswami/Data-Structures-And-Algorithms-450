/*
    link: https://leetcode.com/problems/find-the-duplicate-number/submissions/
*/



// ----------------------------------------------------------------------------------------------------------------------- //
/*
 class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int k=0;
        for(int i =0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums.at(i)==nums.at(j)){
                   k=nums.at(i);
                    break;
                }
            }
        }
     return k;
    }
    
};

// --------------------------------------------------TLE--------------------------------------------------------------------- //


