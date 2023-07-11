#include <iostream>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *swapPairs(ListNode *head)
{
    if (head == NULL || head->next == NULL)
        return head;
    ListNode *p = head;
    ListNode *q = head->next;
    ListNode *r = q->next;

    q->next = p;
    p->next = swapPairs(r);
    return q;
}

int main()
{
    ListNode *head = new ListNode(1);
    ListNode *p = head;
    for (int i = 2; i < 6; i++)
    {
        ListNode *q = new ListNode(i);
        p->next = q;
        p = q;
    }
    p = head;
    while (p != NULL)
    {
        cout << p->val << " ";
        p = p->next;
    }
    cout << endl;
    p = swapPairs(head);
    while (p != NULL)
    {
        cout << p->val << " ";
        p = p->next;
    }
    cout << endl;
    return 0;
}
