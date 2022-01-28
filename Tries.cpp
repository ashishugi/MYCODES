class TrieTree {
    public: 
    char ch;
    bool isEnd;
    TrieTree* child[26];
    TrieTree (){
        isEnd = false;
        for(int i=0;i<26;i++) {
            this->child[i] = NULL;
        }
    }
};
class Trie {
public:
    TrieTree* head;
    Trie() {
        head = new TrieTree();
    }
    
    void insert(string word) {
        TrieTree* curr = head;
        for(int i=0;i<word.length();i++) {
            int index = word[i] - 'a';
            if(curr->child[index]) {
                // if this exist
                curr = curr->child[index];
            } else {
                // this does not exist
                TrieTree* temp = new TrieTree();
                curr->child[index] = temp;
                temp->isEnd = false;
                temp->ch = word[i];
                curr = curr->child[index];
            }
        }
        curr->isEnd = true;
    }
    
    bool search(string word) {
        TrieTree* curr = head;
        for(int i=0;i<word.length();i++) {
            int index = word[i]-'a';
            if(curr->child[index]) {
                // if this exist
                curr = curr->child[index];
            } else {
               return false;
            }
        }
        if(curr->isEnd) {
            return true;
        }
        return false;
    }
    
    bool startsWith(string prefix) {
         TrieTree* curr = head;
        for(int i=0;i<prefix.length();i++) {
            int index = prefix[i]-'a';
            if(curr->child[index]) {
                // if this exist
                curr = curr->child[index];
            } else {
               return false;
            }
        }
        return true;
    }
};
