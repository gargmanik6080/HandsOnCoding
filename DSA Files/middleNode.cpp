#include<iostream>
using namespace std;
class ListNode{
    public:
    int data;
    ListNode* next=NULL;
};
void middleNode(ListNode* head) {
    ListNode* f=head;
    ListNode* s=head;
    ListNode* x;
    while(f->next){
        f=f->next;
        x=s;
        s=s->next;
        if(f->next)f=f->next;
    }
    x->next=s->next;
}
int main(){
    
}