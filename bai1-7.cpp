#include <iostream>

using namespace std;
struct Data {
    int x;

};
struct Node {
    Data infor;
    Node * next;

};
struct List {
    Node *head;
    Node *tail;

};
struct Stack {
    List l;

};


// cau 1
int CompareData(Data infor1, Data infor2) {
    if(infor1.x < infor2.x) return -1;
    return infor1.x > infor2.x;

}

// cau 2
void InitList(List &L) {
    L.head = L.tail = nullptr;
}
// cau 3
bool IsEmpTyList(List L) {
    return L.head == nullptr;


}

// cau 4
void PrintList(List L) {
    Node * p = L.head;
    while(p!= nullptr) {
        cout << p->infor.x << " ";
        p=p->next;
    }
    cout << endl;

}
// cau 5
Node * createNode(Data infor) {
    Node*p = new Node;
    p->infor.x = infor.x;
    p->next = nullptr;
    return p;
}
void addTail(List &dslk, Data infor) {
    Node * p = createNode(infor);
    if(dslk.head == nullptr) {
        dslk.head = dslk.tail = p;
        return ;
    }
    dslk.tail->next = p;
    dslk.tail = p;

}
// cau6
Node *GetNodePointer (List L, Data infor) {

    Node * temp = L.head;
    while(temp != nullptr) {
        if(temp->infor.x == infor.x) return temp;
        temp = temp->next;
    }
    return nullptr;
}
// cau 7
Node *GetNodePointerIdx(List L, int idx) {
    if(idx <0) return nullptr;
    Node *p = L.head;
    int i =0;
    while ( p!= nullptr && i<idx) {
        p=p->next;
        ++i;
    }
    return p;

}
int main()
{
    List dslk ;
    InitList(dslk);
    Data infor1,infor2;
    infor1.x=10; infor2.x=20;
    addTail(dslk,infor1);
    addTail(dslk,infor2);
    PrintList(dslk);
    return 0;
}
