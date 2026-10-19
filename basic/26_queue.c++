#include <iostream>
#include <queue>
using namespace std;

void show(queue<int> q){
    cout << "Queue elements: ";
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main(){
    queue<int> q;

    // 1. push
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    // 2. front & back
    cout << "Front: " << q.front() << endl;
    cout << "Back: " << q.back() << endl;

    // 3. size
    cout << "Size: " << q.size() << endl;

    // 4. display
    show(q);

    // 5. pop
    q.pop();
    cout << "After pop, front: " << q.front() << endl;

    // 6. empty
    if(q.empty())
        cout << "Queue empty\n";
    else
        cout << "Queue not empty\n";

    // 7. swap
    queue<int> q2;
    q2.push(1);
    q2.push(2);

    q.swap(q2);

    cout << "After swap:\n";
    cout << "Queue1 -> "; show(q);
    cout << "Queue2 -> "; show(q2);

    return 0;
}
