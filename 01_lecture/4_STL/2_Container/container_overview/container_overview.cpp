#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>

int main() {
    // Vector: Dynamic array that can grow or shrink in size.
    std::vector<int> vec = {1, 2, 3, 4, 5};
    vec.push_back(6); // Add an element to the end
    vec.pop_back(); // Remove the last element
    vec.insert(vec.begin() + 2, 7); // Insert an element at index 2
    vec.erase(vec.begin() + 3); // Remove the element at index 3
    std::cout << "Vector: ";
    for(int num : vec) std::cout << num << " ";
    std::cout << "\n";

    // List: Doubly linked list allowing insertion and removal from both ends.
    std::list<int> lst = {1, 2, 3, 4, 5};
    lst.push_front(0); // Add an element to the beginning
    lst.pop_back(); // Remove the last element
    lst.insert(++lst.begin(), 6); // Insert an element at index 1
    std::cout << "List: ";
    for(int num : lst) std::cout << num << " ";
    std::cout << "\n";

    // Deque: Double-ended queue allowing insertion and removal from both ends.
    std::deque<int> deq = {2, 3, 4};
    deq.push_front(1); // Add to the beginning
    deq.push_back(5); // Add to the end
    std::cout << "Deque: ";
    for(int num : deq) std::cout << num << " ";
    std::cout << "\n";

    // Map: Collection of key-value pairs, sorted by keys.
    std::map<std::string, int> mp;
    mp["one"] = 1;
    mp["two"] = 2;
    std::cout << "Map: ";
    for(auto& pair : mp) std::cout << "{" << pair.first << ": " << pair.second << "} ";
    std::cout << "\n";

    // Set: Collection of unique elements, sorted by elements.
    std::set<int> st = {1, 2, 4, 5};
    st.insert(6); // Insert an element
    st.erase(3); // Remove an element
    st.insert(3); // Insert an element
    st.erase(4); // Remove an element
    std::cout << "Set: ";
    for(int num : st) std::cout << num << " ";
    std::cout << "\n";

    // Unordered Map: Collection of key-value pairs, hashed by keys.
    std::unordered_map<std::string, int> ump;
    ump["one"] = 1;
    ump["two"] = 2;
    std::cout << "Unordered Map: ";
    for(auto& pair : ump) std::cout << "{" << pair.first << ": " << pair.second << "} ";
    std::cout << "\n";

    // Unordered Set: Collection of unique elements, hashed by elements.
    std::unordered_set<int> ust = {1, 2, 3, 4, 5};
    ust.insert(6); // Insert an element
    std::cout << "Unordered Set: ";
    for(int num : ust) std::cout << num << " ";
    std::cout << "\n";

    return 0;
}