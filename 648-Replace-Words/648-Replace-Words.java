class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        unordered_map<string, int> mp;
        for(auto item: dictionary) mp[item]++; 
        string ans = "";
        stringstream ss(sentence);
        string word;
        while(ss>>word){      
            string temp = replaceHelp(word, mp);
            ans+= (temp + " ");
        }
        ans.pop_back();
        return ans;
    }

    string replaceHelp(string word, unordered_map<string, int> mp){
        string temp = "";
        for(int i = 0; i<word.size(); i++){
            temp+=word[i];
            if(mp.count(temp)){
                return temp;
            }
        }
        return word;
    }
};
