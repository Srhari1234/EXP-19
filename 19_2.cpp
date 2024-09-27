//Name: Saaj Mulik
//Prn: 23070123109
//Class: EnTC B-2
#include <iostream>
using namespace std;

#define size 5   
#define ERROR -9999  

class Queue {
    int rear, front, ar[size];  

public:
   
    Queue() {
        rear = -1;
        front = 0;  
    }

   
    void enqueue(int num) {
        if (rear == (size - 1)) {
            cout << "Queue is full" << endl;
        } else {
            rear++;
            ar[rear] = num;
            cout << "Enqueued: " << num << endl;
        }
    }

    
    int dequeue() {
        if (front > rear) {
            cout << "Queue is empty" << endl;
            return ERROR;
        } else {
            int temp = ar[front];
            front++;
            return temp;
        }
    }

    
    void disp() {
        if (front > rear) {
            cout << "Queue is empty" << endl;
        } else {
            cout << "Queue elements: ";
            for (int i = front; i <= rear; i++) {
                cout << ar[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);  

    q.disp();  

    cout << "Dequeued: " << q.dequeue() << endl;
    cout << "Dequeued: " << q.dequeue() << endl;

    q.disp(); 

    return 0;
}