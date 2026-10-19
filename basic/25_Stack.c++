#include <iostream>
#include <stack>
using namespace std;

void show(stack<int> s){
    cout << "Stack elements: ";
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main(){
    stack<int> s;

    // 1. Push
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    // 2. Top
    cout << "Top element: " << s.top() << endl;

    // 3. Size
    cout << "Size: " << s.size() << endl;

    // 4. Display (using copy)
    show(s);

    // 5. Pop
    s.pop();
    cout << "After pop, top: " << s.top() << endl;

    // 6. Emplace
    s.emplace(99);
    cout << "After emplace, top: " << s.top() << endl;

    // 7. Empty check
    if(s.empty())
        cout << "Stack is empty\n";
    else
        cout << "Stack not empty\n";

    // 8. Swap
    stack<int> s2;
    s2.push(1);
    s2.push(2);

    s.swap(s2);

    cout << "After swap:\n";
    cout << "Stack 1 -> "; show(s);
    cout << "Stack 2 -> "; show(s2);

    // 9. Comparison
    if(s == s2)
        cout << "Stacks are equal\n";
    else
        cout << "Stacks not equal\n";

    return 0;
}
