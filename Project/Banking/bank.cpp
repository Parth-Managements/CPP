#include <iostream>
using namespace std;
#include <string>
#include <fstream>
#include <string.h>

class Bank
{
private:
    string id;
    string user_name;
    string pass;
    int balance;
    int p_flag = 0;

public:
    void registerUser()
    {
        cout << "Enter your user name:";
        cin >> user_name;

        cout << "Enter your password:";
        cin >> pass;

        bool userExists = false;
        ifstream idFile("id.txt");
        ifstream usernameFile("user_name.txt");

        string line;
        while (getline(idFile, line))
        {
            if (line == id)
            {
                userExists = true;
                break;
            }
        }

        while (getline(usernameFile, line))
        {
            if (line == user_name)
            {
                userExists = true;
                break;
            }
        }

        idFile.close();
        usernameFile.close();

        if (userExists)
        {
            cout << "User with the same id or username already exists. Please choose a different id or username." << endl;
        }
        else
        {
            int count = 0;
            ifstream idFile("id.txt");
            while (getline(idFile, line))
            {
                count++;
            }
            idFile.close();

            int user_count = count;

            id = to_string(user_count + 1);

            ofstream ids("id.txt", ios::app);
            ids << id << endl;
            ids.close();

            ofstream username("user_name.txt", ios::app);
            username << user_name << endl;
            username.close();

            ofstream password("pass.txt", ios::app);
            password << pass << endl;
            password.close();

            cout << "Registration successful!" << endl;
        }
    }

    void access_check(string t_user_name, string t_pass, string t_id)
    {
        int i = 0;
        string t_username_val;
        string t_id_val;
        string t_pass_val;
        fstream username("user_name.txt", ios::app | ios::out | ios::in);
        fstream ids("id.txt", ios::app | ios::out | ios::in);
        fstream password("pass.txt", ios::app | ios::out | ios::in);
        while (!username.eof())
        {
            getline(ids, t_id_val);
            getline(username, t_username_val);
            getline(password, t_pass_val);

            if (t_id == t_id_val)
            {
                if (t_user_name == t_username_val)
                {
                    if (t_pass == t_pass_val)
                    {
                        p_flag = 1;
                        break;
                    }
                    else
                    {
                        i++;
                    }
                }
                else
                {
                    i++;
                }
            }
            else
            {
                i++;
            }
        }
        username.close();
        ids.close();
        password.close();
    }

    void deposit(string t_user_name, string t_pass, string t_id, int amt)
    {
        access_check(t_user_name, t_pass, t_id);
        if (p_flag == 1)
        {
            cout << "nice work";
        }
        else
        {
            cout << "Access denied";
        }
    }
};

int main()
{
    Bank b;
    b.registerUser();
}