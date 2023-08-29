#include<bits/stdc++.h>
using namespace std;



class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0, j=numbers.size()-1;
        std::vector<int> result;
        while(i<j){
            if(numbers[i]+numbers[j]==target){
                result.push_back(i+1);
                result.push_back(j+1);
                return result;
            }
            if(numbers[i]+numbers[j]>target){
                j--;
            }
            else{
                i++;
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




