#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

class Solution{
  public:
  long long countParis(vector<string>& words){
    long long count = 0;

    unordered_map<string, int> freq;

    for(const string& word : words){
      string key = word;

      char base = word[0];
      for(int i = 0; i < word.length(); ++i){
        key[i] = 'a' + (word[i] - base + 26) % 26;
      }

      count =+ freq[key];

      freq[key]++;

    }

    return count;
  }
};
