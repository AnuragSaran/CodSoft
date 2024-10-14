#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct Task
{
    string title;
    bool completed;
};
vector<Task> tasks;
void viewTasks()
{
    if (tasks.empty())
    {
        cout << "No tasks available." << endl;
    }
    else
    {
        cout << "\nTo-Do List:" << endl;
        for (size_t i = 0; i < tasks.size(); ++i)
        {
            string status = tasks[i].completed ? "Completed" : "Pending";
            cout << i + 1 << ". " << tasks[i].title << " - " << status << endl;
        }
    }
    cout << endl;
}
void addTask()
{
    string title;
    cout << "Enter task: ";
    cin.ignore();
    getline(cin, title);
    tasks.push_back({title, false});
    cout << "Task '" << title << "' added successfully." << endl;
}

void completeTask()
{
    viewTasks();
    int taskNum;
    cout << "Enter task number to mark as completed: ";
    cin >> taskNum;

    if (taskNum > 0 && taskNum <= tasks.size())
    {
        tasks[taskNum - 1].completed = true;
        cout << "Task " << taskNum << " marked as completed." << endl;
    }
    else
    {
        cout << "Invalid task number." << endl;
    }
}
void removeTask()
{
    viewTasks();
    int taskNum;
    cout << "Enter task number to remove: ";
    cin >> taskNum;

    if (taskNum > 0 && taskNum <= tasks.size())
    {
        cout << "Task '" << tasks[taskNum - 1].title << "' removed successfully." << endl;
        tasks.erase(tasks.begin() + (taskNum - 1));
    }
    else
    {
        cout << "Invalid task number." << endl;
    }
}
void showChoices()
 {
    int choice;
    do
    {
        cout << "\nTo-Do List Manager" << endl;
        cout << "1. Add Task" << endl;
        cout << "2. View Tasks" << endl;
        cout << "3. Mark Task as Completed" << endl;
        cout << "4. Remove Task" << endl;
        cout << "5. Exit" << endl;
        cout << "Choose an option: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                addTask();
                break;
            case 2:
                viewTasks();
                break;
            case 3:
                completeTask();
                break;
            case 4:
                removeTask();
                break;
            case 5:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice, please try again." << endl;
        }
    }
    while (choice != 5);
}

int main()
{
   showChoices();
    return 0;
}

