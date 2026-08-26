# include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;

    ListNode(int value = 0, ListNode* nextNode = nullptr)
        : val(value), next(nextNode) {}
};

class solution{
    public:
    ListNode *detectCycle(ListNode *head) {
        ListNode*slow = head;
                ListNode*fast = head;
                while(fast!=NULL&&fast->next!=NULL){
                    slow=slow->next;
                    fast= fast->next->next;
                    if(slow==fast){
                        slow=head;
                        while(slow!=fast){
                            slow=slow->next;
                            fast=fast->next;
                        }
                        return slow;
                    }
                }
                return NULL;
    }
};
int main() {
     // Create linked list
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);

    // Create cycle: 4 -> 2
    head->next->next->next->next = head->next;

    solution obj;

    ListNode* result = obj.detectCycle(head);

    if (result != NULL)
        cout << "Cycle starts at node: " << result->val;
    else
        cout << "No cycle";

    return 0;
}

  