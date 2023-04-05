#include <iostream>
#include <queue>

using namespace std;

int main() {
    // Initializing a priority queue
    priority_queue<int> pq;

    // Adding elements to the priority queue
    pq.push(5);
    pq.push(10);
    pq.push(3);
    pq.push(8);

    // Printing the top element of the priority queue
    cout << "Top element: " << pq.top() << endl;

    // Removing the top element of the priority queue
    pq.pop();

    // Printing the size of the priority queue
    cout << "Size of priority queue: " << pq.size() << endl;

    // Checking if the priority queue is empty or not
    cout << "Is priority queue empty: " << (pq.empty() ? "Yes" : "No") << endl;

    // Accessing all the elements of the priority queue
    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;

    return 0;
}
