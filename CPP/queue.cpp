#include <iostream>
using namespace std;

class queue{
    public:
    int q[10];
};
int head = 0;

bool isEmpty(){
    return head==0;
}
bool isFull(){
    return head==9;
}
void enqueue(queue &q1, int x){
    if(isFull()) return ;
    q1.q[head++] = x;
}
// Dequeue
int dequeue(queue &q1){
    if(isEmpty()) return -1;
    int x = q1.q[0];
    for (int i = 0; i < head-1; i++){
        q1.q[i] = q1.q[i + 1];
    }
    head--;
    return x;
}
int main(){
    queue q1;
    enqueue(q1, 1);
    enqueue(q1, 2);
    enqueue(q1, 3);
    enqueue(q1, 4);
    cout<< dequeue(q1);
    cout<< dequeue(q1);
    cout<< dequeue(q1);
    cout<< dequeue(q1);
    cout<< dequeue(q1);
}