#include <bits/stdc++.h>
class Node{
    public:
        std::vector<Node*> children; 
        int freq = 0;
        Node() {
            children.resize(26, nullptr);
    }
};
class Tree{
    public:
        Node* root = new Node();
        void insert(std::string word){
            Node* cur = root;
            for (char c : word){
                int index = c - 'a';
                if (cur->children[index] == nullptr) {
                    cur->children[index] = new Node(); 
                }
                cur = cur->children[index];
                cur->freq += 1;
            }
        }
        bool find(std::string word){
            Node* cur = root;
            for( char c: word){
                cur = cur->children[c-'a'];
            }
            return cur->freq==1;
        }
};
class PrefixFreeSets{
    public:
        int maxElements(std::vector<std::string> words){
            std::unordered_set<std::string> wordSet;
            int res = 0;
            Tree prefixTree = Tree();
            for (auto w:words){
                if ( wordSet.find(w) == wordSet.end()){
                    wordSet.insert(w);
                    prefixTree.insert(w);
                    }
            }
            for (auto w:wordSet){
                if (prefixTree.find(w)){
                    res+=1;
                }
            
            }
            return res;
        }
};