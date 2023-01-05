#ifndef QUEUE2_H_INCLUDED
#define QUEUE2_H_INCLUDED
#include <iostream>
#define info(q) (q)->info
#define head(q) ((q).head)
#define tail(q) ((q).tail)

using namespace std;

typedef char infotype;
const int idmax = 6;

typedef int adr;
struct Queue{
    infotype info[idmax];
    adr head, tail;
};

bool isempty(Queue q);
bool isfull(Queue q);
Queue createqueue();
void enqueue(Queue &q, infotype p);
void dequeue(Queue &q, infotype &p);
void show(Queue q);

#endif // QUEUE2_H_INCLUDED
