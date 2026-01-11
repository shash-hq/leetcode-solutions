#include <vector>
#include <unordered_set>

using namespace std;

class Solution{
  public:
  int centeredSubarrays(vector<int>& nums){
    int n = nums.size();
    int count = 0;

    for(int i = 0; i < n; i++){
      int currentSum = 0;
      unordered_set<int> seen;

      for(int j = i; j < n; ++j){
        currentSum += nums[j];
        seen.insert(nums[j]);

        if(seen.count(currentSum)){
          count++;
        }
      }
    }

    return count;
  }
};
