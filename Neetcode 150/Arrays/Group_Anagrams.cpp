// https://leetcode.com/problems/group-anagrams/description/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagrams;

        for ( auto& s : strs){
            vector<int> count(26, 0);

            for( char c : s){
                count[c - 'a']++;
            }

            string key;
            for( int i : count ){
                key += "@" + to_string(i);
            }

            anagrams[key].push_back(s);
        }

        vector<vector<string>> result;
        for ( auto& pair: anagrams){
            result.push_back(pair.second);
        }

        return result;
    }
};
