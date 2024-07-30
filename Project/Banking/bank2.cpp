#include <bits/stdc++.h>
using namespace std;

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

public:
    void setdata()
    {
        int amt;
        int count = 0;
        ifstream idFile("id.txt");
        string line;
        while (getline(idFile, line))
        {
            count++;
        }
        idFile.close();

        int user_count = count;

        id = to_string(user_count + 1);

        cout << "Enter your user name:";
        cin >> user_name;

        cout << "Enter your password:";
        cin >> pass;

        ofstream ids("id.txt", ios::app);
        ids << id << endl;
        ids.close();

        ofstream username("user_name.txt", ios::app);
        username << user_name << endl;
        username.close();

        ofstream password("pass.txt", ios::app);
        password << pass << endl;
        password.close();
        cout << "Enter the deposit amount" << endl;
        cin >> amt;
        ofstream balance("balance.txt", ios::app);
        balance << amt << endl;
        cout << "Registration successful!" << endl;
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
            int i=0;
            string line;
            int t_amt;
            int final_amt;

            fstream temp("temp.txt", ios::in | ios::out | ios::trunc);
            fstream balance("balance.txt", ios::in | ios::out);

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
    cin >> choise;
    while (true)
    {
        if (choise == 1)
        {
            b.setdata();
        }
        else if (choise == 2)
        {
            b.access_check("parth", "125", "3");
            break;
        }
        else if (choise == 3)
        {
            b.deposit("parth", "125", "3", 600);
            break;
        }
        else if (choise == 4)
        {
            b.withdraw("parth","125","3",10000);
            break;
        }
    }
}