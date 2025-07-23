#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> todoList; //holds all tasks
    int choice; // stores the menu option the user selects

    do { //acts as a while statements (only runs at least once unless statement is true)
        cout << "\nTo-Do List Menu:\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Remove Task\n";
        cout << "4. Exit\n";
        cout << "Choose an option: ";
        cin >> choice;

        cin.ignore(); // Clear newline for getline
        if (choice == 1) {
            string task;
            cout << "Enter new task: ";
            getline(cin, task); // reads the whole line, including spaces
            todoList.push_back(task); // adds this string to the end of vector
            cout << "Task added.\n";
        } else if (choice == 2) {
            cout << "Your tasks:\n";
            for (size_t i = 0; i < todoList.size(); i++)
                cout << i + 1 << ". " << todoList[i] << endl; // i+1 = shows tasks as 1,2,3 instead of 0,1,2
        } else if (choice == 3) {
            int num;
            cout << "Enter task number to remove: ";
            cin >> num;
            if (num >= 1 && num <= (int)todoList.size()) {
                todoList.erase(todoList.begin() + (num - 1));
                cout << "Task removed.\n";
            } else {
                cout << "Invalid task number.\n";
            }
        } else if (choice != 4) {
            cout << "Invalid option.\n";
        }
    } while (choice != 4);

    cout << "Goodbye!\n";
    return 0;
}