class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        unordered_map<char, int> hash;

        for(char c: s){
            hash[c]++;
        }
        for(char c: t){
            hash[c]--;
        }
        for(auto pair : hash){
            if(pair.second!=0){
                return false;
            }
        }
        return true;
        }
    };

