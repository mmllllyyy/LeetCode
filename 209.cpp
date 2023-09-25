#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *p, *q;
        p = head;
        while (p->next != nullptr) {
            q = p->next;
            if (q->val == val) {
                p->next = q->next;
                p = p->next;
            }
            else
                p = q;
        }
        return head;
    }
};
int main()
{
    return 0;
}