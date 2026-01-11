#include <string>
#include <unordered_set>

using namespace std;

class Solution {
public:
    int residuePrefixes(string s) {
        unordered_set<char> distinct_chars;
        int count = 0;
        
        for (int i = 0; i < s.length(); ++i) {

            distinct_chars.insert(s[i]);
            

            int current_length = i + 1;
            

            if (distinct_chars.size() == current_length % 3) {
                count++;
            }
        }
        
        return count;
    }
};
