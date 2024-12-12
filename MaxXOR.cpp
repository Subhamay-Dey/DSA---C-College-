#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// Trie Node definition
struct TrieNode {
    TrieNode* children[2] = {nullptr, nullptr};
};

class Solution {
public:
    // Function to insert a number into the Trie
    void insert(TrieNode* root, int num) {
        TrieNode* node = root;
        for (int i = 31; i >= 0; --i) {
            int bit = (num >> i) & 1;
            if (!node->children[bit]) {
                node->children[bit] = new TrieNode();
            }
            node = node->children[bit];
        }
    }

    // Function to find the maximum XOR for a number
    int findMaxXOR(TrieNode* root, int num) {
        TrieNode* node = root;
        int maxXOR = 0;
        for (int i = 31; i >= 0; --i) {
            int bit = (num >> i) & 1;
            int oppositeBit = 1 - bit;
            if (node->children[oppositeBit]) {
                maxXOR |= (1 << i);
                node = node->children[oppositeBit];
            } else {
                node = node->children[bit];
            }
        }
        return maxXOR;
    }

    // Main function to find the maximum XOR
    int findMaximumXOR(vector<int>& nums) {
        TrieNode* root = new TrieNode();
        for (int num : nums) {
            insert(root, num);
        }
        int maxResult = 0;
        for (int num : nums) {
            maxResult = max(maxResult, findMaxXOR(root, num));
        }
        return maxResult;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {3, 10, 5, 25, 2, 8};
    cout << "Maximum XOR: " << solution.findMaximumXOR(nums) << endl;
    return 0;
}
