class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> map;

        for(string s:strs){
            string word=s;
            sort(word.begin(),word.end());
            map[word].push_back(s);
        }
        vector<vector<string>> result;
        for(auto it:map){
            result.push_back(it.second);
        }
        return result;
    }
};