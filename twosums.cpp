#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        
        for(int i=0; i<nums.size(); i++) {
            if(mp.find(target-nums[i]) != mp.end()){
                return {mp[target-nums[i]], i};
            }
            
            mp[nums[i]] = i;
        }
        
        return {};
        
    }
};

int main() {
    Solution s;
    vector<int> vect{ 2,7,11,15 };

    vector<int> res = s.twoSum(vect, 26);

       
    for(int i=0; i < res.size(); i++)
        std::cout << res.at(i) << ' ';
    
    return 0;
}