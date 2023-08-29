#include<bits/stdc++.h>
using namespace std;



class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> map;
        std::vector<int> result;

        for(int i=0; i<nums.size();i++){
            auto it = map.find(target-nums[i]);
            if(it != map.end()){
                result.push_back(it->second);
                result.push_back(i);
                return result;
            }
            else{
                map[nums[i]]=i;
            }
        }
        return result;
    }
};




int main()
{
    Solution Solve;

    vector<int> nums = {2,7,11,15};
    int target = 9;

    vector<int> result = Solve.twoSum(nums, target);

    for(auto item : result){
        cout<<item<<" ";
    } 
    cout<<endl;

    return 0;
}




