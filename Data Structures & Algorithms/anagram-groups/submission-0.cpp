class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>>group;

        for(string word: strs){
            string sortedWord = word;
            sort(sortedWord.begin(), sortedWord.end());
            group[sortedWord].push_back(word);
        }
        vector<vector<string>> ans;

        for(auto pair: group){
            ans.push_back(pair.second);
        }
        return ans;
    }
};
