class Trie {
private:
    map<char, Trie*> children;
    bool isEnd = false;
public:
    Trie() {}
    
    void insert(string word) {
        Trie* cur = this;
        for(int i = 0; i<word.size(); ++i){
            if(!cur->children[word[i]]){
                cur->children[word[i]] = new Trie;
            }
            cur=cur->children[word[i]];
        }
        cur->isEnd = true;
    }
    
    bool search(string word) {
        Trie* cur = this;
        for(int i = 0; i<word.size(); ++i){
            if(!cur->children[word[i]]) return false;
            cur = cur->children[word[i]];
        }
        if(cur->isEnd == false) return false;
        return true;  
    }
    
    bool startsWith(string prefix) {
        Trie* cur = this;
        for(int i = 0; i<prefix.size(); ++i){
            if(!cur->children[prefix[i]]) return false;
            cur = cur->children[prefix[i]];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
