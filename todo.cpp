#include <bits/stdc++.h>
using namespace std;

int main(int argc, char **argv)
{

    int pending = 0;
    int completed = 0;
    string help = "Usage :-\
\n$ ./todo add \"todo item\"  # Add a new todo\
\n$ ./todo ls               # Show remaining todos\
\n$ ./todo del NUMBER       # Delete a todo\
\n$ ./todo done NUMBER      # Complete a todo\
\n$ ./todo help             # Show usage\
\n$ ./todo report           # Statistics";
    vector<string> todos;

    if (argc == 1)
    {
        cout << help;
    }
    else if (argc > 1)
    {
        string str = argv[1];
        if (str.compare("report") == 0)
        {
            ifstream inTodo;
            inTodo.open("todo.txt");

            ifstream inDone;
            inDone.open("done.txt");

            // counting the pending
            pending = 0;
            string str;
            while (getline(inTodo, str))
            {
                // if (!todo.compare("") == 0)
                pending++;
            }

            // counting the done
            completed = 0;
            while (getline(inDone, str))
            {
                // if (!todo.compare("") == 0)
                completed++;
            }

            time_t now = time(0);
            tm *ltm = localtime(&now);
            // cout << ltm->tm_mday << "/" << ltm->tm_mon << "/" << (1900 + ltm->tm_year) << " ";
            // cout << "Pending : " << pending << " Completed : " << completed << endl;

            // cout << (1900 + ltm->tm_year) << "-" << ltm->tm_mon << "-" << ltm->tm_mday << " ";
            // cout << "Pending : " << pending << " Completed : " << completed;

            printf("%d-%d-%d Pending : %d Completed : %d", (1900 + ltm->tm_year), ltm->tm_mon + 1, ltm->tm_mday, pending, completed);

            inDone.close();
            inTodo.close();
        }
        else if (str.compare("help") == 0)
        {
            cout << help;
        }
        else if (str.compare("ls") == 0)
        {
            ifstream inTodo;
            inTodo.open("todo.txt");

            todos.clear();
            string todo;
            while (getline(inTodo, todo))
            {
                // if (!todo.compare("") == 0)
                todos.push_back(todo);
            }

            int todos_size = todos.size();
            if (todos_size == 0)
            {
                cout << "There are no pending todos!";
                return 0;
            }

            for (int it = todos.size() - 1; it >= 0; it--)
            {
                // cout << "[" << (todos_size--) << "] " << *it << endl;
                const char *temp = todos[it].c_str();
                printf("[%d] %s", todos_size, temp);
                todos_size += -1;
                cout << endl;
            }
        }
        else if (str.compare("add") == 0)
        {
            if (argc == 2)
            {
                cout << "Error: Missing todo string. Nothing added!";
                return 0;
            }
            // todos clear
            todos.clear();

            // open file and
            ifstream inTodo;
            inTodo.open("todo.txt");

            string str_temp;

            // read to do one by one into todos variable
            string todo;
            while (getline(inTodo, todo))
            {
                if (!todo.compare("") == 0)
                    todos.push_back(todo);
            }

            // push_back to todos
            string new_task = argv[2];
            cout << "Added todo: \"" << new_task << "\"";
            todos.push_back(new_task);

            // incrementing pending
            pending += 1;

            // write to file
            ofstream temp("todo.txt");
            for (auto it = todos.begin(); it != todos.end(); it++)
            {
                temp << *it << endl;
            }
        }

        else if (str.compare("done") == 0)
        {
            if (argc == 2)
            {
                cout << "Error: Missing NUMBER for marking todo as done.";
                return 0;
            }

            // clear todos and load the content from file
            todos.clear();
            string todo;

            ifstream inTodo;
            inTodo.open("todo.txt");

            while (getline(inTodo, todo))
            {
                if (!todo.compare("") == 0)
                    todos.push_back(todo);
            }

            /*
            // printing the data before deleting
            int todos_size = todos.size();
            for (auto it = todos.rbegin(); it != todos.rend(); it++)
            {
                cout << "[" << (todos_size--) << "] " << *it << endl;
            }
            cout << "index=" << index << ", item=" << todos.at(index) << endl
                 << endl;


            */

            // getting index, error if index > size
            int index = atoi(argv[2]);
            if (index > todos.size() || index == 0)
            {
                cout << "Error: todo #" << index << " does not exist.";
                return 0;
            }

            // deleting the item
            string deletedString = todos[index - 1];
            todos.erase(todos.begin() + index - 1);

            // Simplying opening file, erases the content of it
            // erase the file and add the remaining items in file
            ofstream temp("todo.txt");

            for (auto it = todos.begin(); it != todos.end(); it++)
            {
                temp << *it << endl;
            }

            /*
            // After Deletion Printing
            cout << endl
                 << endl
                 << " Printing after deletion" << endl;
            int todo_size = todos.size();
            for (auto it = todos.rbegin(); it != todos.rend(); it++)
            {
                cout << "[" << (todo_size--) << "] " << *it << endl;
            }

            */
            cout << "Marked todo #" << index << " as done.";

            // add that completed todo in done.txt
            ofstream outDone;

            outDone.open("done.txt", fstream::app);
            // outDone << deletedString << endl;
            // cout << " Deleted String : " << deletedString << endl;

            // current Date
            time_t now = time(0);
            tm *ltm = localtime(&now);
            outDone << "x " << (1900 + ltm->tm_year) << "-" << ltm->tm_mon << "-" << ltm->tm_mday << " " << deletedString << endl;
        }
        else if (str.compare("del") == 0)
        {
            if (argc == 2)
            {
                cout << "Error: Missing NUMBER for deleting todo.";
                return 0;
            }

            // clear todos and load the content from file
            todos.clear();
            string todo;

            ifstream inTodo;
            inTodo.open("todo.txt");

            while (getline(inTodo, todo))
            {
                if (!todo.compare("") == 0)
                    todos.push_back(todo);
            }

            /*
            // printing the data before deleting
            int todos_size = todos.size();
            for (auto it = todos.rbegin(); it != todos.rend(); it++)
            {
                cout << "[" << (todos_size--) << "] " << *it << endl;
            }
            cout << "index=" << index << ", item=" << todos.at(index) << endl
                 << endl;


            */

            // getting index
            int index = atoi(argv[2]);
            if (index > todos.size() || index == 0)
            {
                cout << "Error: todo #" << index << " does not exist. Nothing deleted.";
                return 0;
            }

            // deleting the item
            todos.erase(todos.begin() + index - 1);

            // Simplying opening file, erases the content of it
            // erase the file and add the remaining items in file
            ofstream outTodo("todo.txt");

            for (auto it = todos.begin(); it != todos.end(); it++)
            {
                outTodo << *it << endl;
            }

            /*
            // After Deletion Printing
            cout << endl
                 << endl
                 << " Printing after deletion" << endl;
            int todo_size = todos.size();
            for (auto it = todos.rbegin(); it != todos.rend(); it++)
            {
                cout << "[" << (todo_size--) << "] " << *it << endl;
            }

            */
            cout << "Deleted todo #" << index;
        }
    }

    return 0;
}
