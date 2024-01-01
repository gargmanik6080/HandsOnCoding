#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(){
        this->data = 0;
        this->next = NULL;
    }
    Node(int data){
        this->data = data;
        this->next = next;
    }
};
int main(){
    Node* head=new Node;
    Node* cur=head;
    for(int i=0;i<5;i++){
        int x;
        cin>>x;
        Node* tmp= new Node(x);
        cur->next = tmp;
        cur=cur->next;
    }
    head=head->next;
    cur = cur->next;
    while(cur!=NULL){
        cout<<cur->data<<" ";
        cur=cur->next;
    }

}