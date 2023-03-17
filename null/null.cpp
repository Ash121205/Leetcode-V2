class Trie {

    struct TrieNode {
        TrieNode *arr[26];
        bool end;

        TrieNode() {
            memset(arr, 0, sizeof(arr));
            end = false;
        }
    };
public:
    TrieNode *root;
    Trie() {
        root = new TrieNode();        
    }
    
    void insert(string word) {
        TrieNode *cur = root;
        for(int i=0;i<word.size();i++)
        {
            if(cur -> arr[word[i]-'a'] == NULL)
            {
                cur->arr[word[i]-'a'] = new TrieNode();
            }
            cur = cur->arr[word[i]-'a'];
        }

        cur->end = true;
    }
    
    bool search(string word) {
        TrieNode *cur = root;
        int c = 0;

        for(int i=0;i<word.size();i++)
        {
            c = word[i]-'a';

            if(cur->arr[c] == NULL)
            {
                return false;
            }
            cur = cur->arr[c];
        }

        return cur->end;
    }
    
    bool startsWith(string prefix) {
        TrieNode *cur = root;

        int c=0;
        for(int i=0;i<prefix.size();i++)
        {
            c = prefix[i]-'a';
            if(cur->arr[c] == NULL) return false;

            cur = cur->arr[c];
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