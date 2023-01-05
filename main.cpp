#include "queue2.h"
int main()
{
    Queue q;
    infotype x;
    q = createqueue();

    cout<<"Queue dienqueue penuh DAHYUN"<<endl;
    enqueue(q, 'D');
    enqueue(q, 'A');
    enqueue(q, 'H');
    enqueue(q, 'Y');
    enqueue(q, 'U');
    enqueue(q, 'N');

    show(q);
    cout<<endl;

    cout<<"Queue didequeue 3 kali"<<endl;
    dequeue(q, x);
    dequeue(q, x);
    dequeue(q, x);

    show(q);
    cout<<endl;
    cout<<"Queue dienqueu YUN"<<endl;
    enqueue(q, 'Y');
    enqueue(q, 'U');
    enqueue(q, 'N');

    show(q);
    return 0;
}
