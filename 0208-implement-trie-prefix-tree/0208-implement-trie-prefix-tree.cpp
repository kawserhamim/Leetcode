class treenode{
  public :
     treenode* child[26];
     bool end;
   
   treenode()
   {
     for(int i = 0 ; i < 26 ; i++)
     {
        child[i] = nullptr ;
     }
     end = false;
   }


};
class Trie {
private:
 treenode* root ;
public:
    Trie() {
        root = new treenode();
    }
    
    void insert(string word) {
        treenode* node = root ; 
        for(char c : word)
        {
            int x = c - 'a';
            if(node->child[x] == nullptr)
            {
                node->child[x] = new treenode();
            }
            node = node->child[x];
        }
        node->end = true ;
    }
    
    bool search(string word) {
         treenode* node = root ; 
        for(char c : word)
        {
            int x = c - 'a';
            if(node->child[x] == nullptr)
            {
               return false ;
            }
            node = node->child[x];
        }
        return node->end ;
    }
    
    bool startsWith(string prefix) {
       treenode* node = root ; 
        for(char c : prefix)
        {
            int x = c - 'a';
            if(node->child[x] == nullptr)
            {
               return false ;
            }
            node = node->child[x];
        } 
        return true ; 
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */