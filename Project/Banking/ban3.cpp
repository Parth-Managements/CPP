#include <iostream>
using namespace std;
#include <string>
#include <fstream>
#include <string.h>
#include <cstdio>

class Bank
{
private:
    int i = 0;
    string id;
    string user_name;
    string pass;
    int balance;
    int p_flag = false;
    int count = 0;
    int amt;

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
        while (getline(usernameFile, line))
        {
            if (line == user_name)
            {
                userExists = true;
                break;
            }
        }

        usernameFile.close();

        if (userExists)
        {
            cout << "User with the same username already exists. Please choose a different username." << endl;
        }
        else
        {
            int user_count = 0;
            string temp_id;
            int new_id;
            while (getline(idFile, line))
            {
                user_count++;
                temp_id = line;
            }
            idFile.close();

            new_id = stoi(temp_id) + 1;
            id = to_string(new_id);

            ofstream ids("id.txt", ios::app);
            ids << id << endl;
            ids.close();

            ofstream username("user_name.txt", ios::app);
            username << user_name << endl;
            username.close();

            ofstream password("pass.txt", ios::app);
            password << pass << endl;
            password.close();


            while (true)
            {
                cout << "Enter the deposit amount (minimum amount: 1000):" << endl;
                cin >> amt;
                if (amt < 1000)
                {
                    cout << "Minimum amount must be 1000." << endl;
                }
                else
                {
                    fstream balance("balance.txt", ios::out | ios::app);
                    balance << amt << endl;
                    balance.close();
                    break;
                }
            }

            cout << "Registration successful!" << endl;
        }
    }

    void access_check(string t_user_name, string t_pass, string t_id)
    {
        string t_username_val;
        string t_id_val;
        string t_pass_val;
        fstream username("user_name.txt", ios::in);
        fstream ids("id.txt", ios::in);
        fstream password("pass.txt", ios::in);

        while (getline(ids, t_id_val) && getline(username, t_username_val) && getline(password, t_pass_val))
        {
            if (t_id == t_id_val)
            {
                if (t_user_name == t_username_val)
                {
                    if (t_pass == t_pass_val)
                    {
                        p_flag = true;
                        break;
                    }
                }
            }
            i++;
        }
        username.close();
        ids.close();
        password.close();
    }
    void deposit(string t_user_name, string t_pass, string t_id, int amt)
    {
        int current_line = 0;
        access_check(t_user_name, t_pass, t_id);
        if (p_flag == true)
        {
            string str_amt;
            string line;
            int t_amt;
            int final_amt;
            fstream temp("temp.txt", ios::in | ios::out | ios::app);
            fstream balance("balance.txt", ios::out | ios::in | ios::app);
            while (getline(balance, line))
            {
                if (current_line == i)
                {
                    t_amt = stoi(line);
                    final_amt = t_amt + amt;
                    temp << final_amt << endl;
                }
                else
                {
                    temp << line << endl;
                }
                current_line++;
            }
            balance.close();
            temp.close();
            remove("balance.txt");
            rename("temp.txt", "balance.txt");

            ifstream updated_balance("balance.txt");
            if (updated_balance.is_open())
            {
                while (getline(updated_balance, line))
                {
                    cout << "Updated balance: " << line << endl;
                }
                updated_balance.close();
            }
            else
            {
                cout << "Error:" << endl;
            }
        }
        else
        {
            cout << "ACCESS DENIED" << endl;
        }
    }

    void withdraw(string t_user_name, string t_pass, string t_id, int amt)
    {
        access_check(t_user_name, t_pass, t_id);

        if (p_flag == true)
        {
            int i = 0;
            string line;
            int t_amt;
            int final_amt;

            fstream temp("temp.txt", ios::in | ios::out | ios::trunc);
            fstream balance("balance.txt", ios::in | ios::out);

            int current_line = 0;
            while (getline(balance, line))
            {
                if (current_line == i)
                {
                    t_amt = stoi(line);
                    if (amt > t_amt)
                    {
                        cout << "Insufficient balance." << endl;
                        temp << line << endl;
                    }
                    else
                    {
                        final_amt = t_amt - amt;
                        temp << final_amt << endl;
                    }
                }
                else
                {
                    temp << line << endl;
                }
                current_line++;
            }

            balance.close();
            temp.close();

            remove("balance.txt");
            rename("temp.txt", "balance.txt");

            ifstream updated_balance("balance.txt");
            if (updated_balance.is_open())
            {
                while (getline(updated_balance, line))
                {
                    cout << "Updated balance: " << line << endl;
                }
                updated_balance.close();
            }
            else
            {
                cout << "Error" << endl;
            }
        }
        else
        {
            cout << "ACCESS DENIED" << endl;
        }
    }
};

int main()
{
    Bank b;
    int choise;
    string user_name;
    string pass;
    int amt;
    string id;

    while (true)
    {
        cout << "1:REGISTRATION\n2:DEPOSIT\n3:WITHDRAW\n4:EXIT";
        cin >> choise;
        switch (choise)
        {
        case 1:
        {
            b.registerUser();
            break;
        }
        case 2:
        {
            cout << "ENTER ID" << endl;
            cin >> id;
            cout << "ENTER USERNAME" << endl;
            cin >> user_name;
            cout << "ENTER PASSWORD" << endl;
            cin >> pass;
            cout << "ENTER THE AMOUNT TO DEPOSIT" << endl;
            cin >> amt;
            b.deposit(user_name, pass, id, amt);
            break;
        }
        case 3:
        {
            cout << "ENTER ID" << endl;
            cin >> id;
            cout << "ENTER USERNAME" << endl;
            cin >> user_name;
            cout << "ENTER PASSWORD" << endl;
            cin >> pass;
            cout << "ENTER THE AMOUNT TO WITHDRAW" << endl;
            cin >> amt;
            b.withdraw(user_name, pass, id, amt);
            break;
        }
        case 4:
        {
            exit(0);
        }
        }
    }
}