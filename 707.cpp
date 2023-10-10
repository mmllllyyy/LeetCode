#include <iostream>
#include <cstdio>

using namespace std;


class MyLinkedList {
private:
    struct ListNode
    {
        int val = NULL;
        struct ListNode* next = nullptr;
    };
    ListNode* head;
    int lenght;
public:
    MyLinkedList() {
        head = new ListNode;
        head->val = NULL;
        head->next = nullptr;
        lenght = 0;
    }

    int get(int index) {
        if (index >= lenght)
            return -1;
        ListNode* p = head;
        for (int i = 0; i <= index; i++) {
            p = p->next;
        }
        return p->val;
    }

    void addAtHead(int val) {
        lenght++;

        if (!head->next) {
            ListNode* p = new ListNode;
            head->next = p;
            p->val = val;
            return;
        }
        ListNode* p = new ListNode;
        p->val = val;
        p->next = head->next;
        head->next = p;
    }

    void addAtTail(int val) {
        lenght++;

        ListNode* p = head;
        while (p->next) {
            p = p->next;
        }
        ListNode* q = new ListNode;
        q->val = val;
        p->next = q;
        return;
    }

    void addAtIndex(int index, int val) {
        if (index > lenght)
            return;
        lenght++;
        ListNode* p = head;
        for (int i = 0; i < index; i++) {
            p = p->next;
        }
        ListNode* q = new ListNode;
        q->next = p->next;
        p->next = q;
        q->val = val;
        return;
    }

    void deleteAtIndex(int index) {
        if (index >= lenght)
            return;
        lenght--;
        ListNode* p = head;
        for (int i = 0; i < index; i++) {
            p = p->next;
        }
        ListNode* q = p->next;
        p->next = q->next;
        delete q;
    }

    void printList() {
        if (!head->next) {
            cout << "empty list" << endl;
            return;
        }
        ListNode* p = head;
        while (p->next) {
            p = p->next;
            cout << p->val << " " ;
        }
        cout << endl;
    }
};


void main()
{
    MyLinkedList L;
    L.addAtHead(10);
    L.addAtHead(20);
    L.addAtTail(30);
    //L.addAtIndex(3, 1);
    //L.addAtIndex(1, 0);
    //L.addAtIndex(6, 10);
    L.printList();
    /*cout << "get 3  " << L.get(3) << endl;
    cout << "get 2  " << L.get(2) << endl;
    cout << "get 1  " << L.get(1) << endl;
    cout << "get 0  " << L.get(0) << endl;*/
    L.deleteAtIndex(3);
    L.deleteAtIndex(2);
    L.deleteAtIndex(0);
    L.printList();

}
/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */