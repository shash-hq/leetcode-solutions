#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

class Solution {
public:
    int maximumAND(vector<int>& nums, int k, int m) {
        int ans = 0;
        
       
        for (int b = 30; b >= 0; --b) {
            int target = ans | (1 << b);
            vector<long long> costs;
            
            for (int x : nums) {

                if ((x & target) == target) {
                    costs.push_back(0);
                } else {

                    int diff = target & ~x;
                    

                    int hb = 31 - __builtin_clz(diff);
                    

                    long long mask_clear_lower = ~((1LL << hb) - 1);
                    

                    long long next_val = x & mask_clear_lower;

                    next_val |= (1LL << hb);

                    next_val |= target;
                    
                    costs.push_back(next_val - x);
                }
            }
            

            if (costs.size() >= m) {

                nth_element(costs.begin(), costs.begin() + m, costs.end());
                
                long long current_total_cost = 0;
                for (int i = 0; i < m; ++i) {
                    current_total_cost += costs[i];
                }
                
                if (current_total_cost <= k) {
                    ans = target;
                }
            }
        }
        
        return ans;
    }
};
