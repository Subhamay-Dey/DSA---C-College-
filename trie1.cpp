#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class TrieNode {
public:
    unordered_map<char, TrieNode*> children;
    bool isEnd = false;
};

class Trie {
public:
    TrieNode* root;
    Trie() {
        root = new TrieNode();
    }

    void insert(string word) {
        TrieNode* node = root;
        for (char ch : word) {
            if (node->children.find(ch) == node->children.end()) {
                node->children[ch] = new TrieNode();
            }
            node = node->children[ch];
        }
        node->isEnd = true;
    }

    bool isValidPrefix(string word) {
        TrieNode* node = root;
        for (char ch : word) {
            if (node->children.find(ch) == node->children.end() || !node->children[ch]->isEnd) {
                return false;
            }
            node = node->children[ch];
        }
        return true;
    }
};

string longestWord(vector<string>& words) {
    Trie trie;
    for (string word : words) {
        trie.insert(word);
    }

    string longest = "";

    for (string word : words) {
        if (trie.isValidPrefix(word)) {
            if (word.size() > longest.size() || (word.size() == longest.size() && word < longest)) {
                longest = word;
            }
        }
    }
    
    return longest;
}
