/* Referance fro, LeetCode Problem No.138
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
private:
    unordered_map<Node*,Node*> mp;
public:
    Node* copyRandomList(Node* head) {
        Node* nd = head;
        // create every nodes
        while(nd){
            Node* copy = new Node(nd->val);
            mp[nd] = copy;
            nd=nd->next;
        }
        nd=head;
        // add pointers which next and random pointing to for each node
        while(nd){
            mp[nd]->next = mp[nd->next];
            mp[nd]->random = mp[nd->random];
            nd=nd->next;
        }
        return mp[head];
    }
};
