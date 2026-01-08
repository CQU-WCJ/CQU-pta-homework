#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    list<string> queue;  
    
    for (int i = 0; i < N; i++) {
        string command;
        cin >> command;
        
        if (command == "in") {
            string name;
            cin >> name;
            queue.push_back(name); 
        }
        else if (command == "out") {
            if (!queue.empty()) {
                queue.pop_front();  
            }
        }
        else if (command == "q") {
            if (!queue.empty()) {
                cout << queue.front() << endl; 
            } else {
                cout << "NULL" << endl;
            }
        }
    }
    
    return 0;
}