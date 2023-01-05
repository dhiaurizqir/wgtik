#include "queue2.h"

bool isempty(Queue q){
    return q.head == -1 && q.tail == -1;
}

bool isfull(Queue q){
    return q.head == 1 && q.tail == idmax-1;
}
Queue createqueue(){
    Queue q;

    q.head = -1;
    q.tail = -1;
    return q;
}
void enqueue(Queue &q, infotype p){
    int x,y;

    if(isfull(q)){
        cout<<"Queue penuh"<<endl;
    }else if(isempty(q)){
        q.head++;
        q.tail++;
        q.info[q.tail] = p;
    }else if(q.tail == idmax-1){
        x =  q.head;
        y = 0;
        while(x<=q.tail){
            q.info[x] = q.info[y];
            x++;
            y++;
        }
        q.head = 0;
        q.tail = y;
        q.info[q.tail] = p;
    }else{
        q.tail++;
        q.info[q.tail] = p;
    }
}

void dequeue(Queue &q, infotype &p){
    if(isempty(q)){
        cout<<"Queue Kosong"<<endl;
    }else{
        p = q.info[q.head];
        if(q.head == q.tail){
            q.head = -1;
            q.tail = -1;
        }else{
            q.head++;
        }
    }
}

void show(Queue q){
    int i;

    for(i = q.head; i <= q.tail; i++){
        cout<<q.info[i]<<"";
    }
}

