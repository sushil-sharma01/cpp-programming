#include <iostream>
#include <vector>
#include <list>
using namespace std;
int main() {
    // -------- Vector Operations --------
    vector<int> numbers;
    numbers.push_back(5);
    numbers.push_back(15);
    numbers.push_back(25);

    cout << "Vector elements: ";
    for (int i = 0; i < numbers.size(); i++)
        cout << numbers[i] << " ";
    cout << "\nSize: " << numbers.size() << ", Capacity: " << numbers.capacity() << endl;

    numbers.pop_back();
    cout << "After pop_back, Vector elements: ";
    for (auto it = numbers.begin(); it != numbers.end(); ++it)
        cout << *it << " ";
    cout << endl;
    // -------- List Operations --------
    list<int> items;
    items.push_back(200);
    items.push_front(100);
    items.push_back(300);

    cout << "\nList elements: ";
    for (auto it = items.begin(); it != items.end(); ++it)
        cout << *it << " ";

    items.remove(200);  // remove element
    cout << "\nAfter removing 200, List elements: ";
    for (int val : items)
        cout << val << " ";
    cout << endl;
    return 0;
}