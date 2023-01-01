#include <iostream>
#include <string.h>
#include <cstring>
using namespace std;

class Club
{
    struct member
    {
        char name[30];
        int prn;
        member *next;
    };
    member *head = new member, *tail = new member;

public:
    Club()
    {
        strcpy(head->name, "None");
        strcpy(tail->name, "None");
        head->prn = 0;
        tail->prn = 0;
        head->next = tail;
        tail->next = NULL;
    }

    void addPresident(char name[30], int prn)
    {
        strcpy(head->name, name);
        head->prn = prn;
    }

    void addSecretary(char name[30], int prn)
    {
        strcpy(tail->name, name);
        tail->prn = prn;
    }

    void addMember(int prn,char name[30])
    {
        member *tmp = new member;
        strcpy(tmp->name, name);
        tmp->prn = prn;
        tmp->next = tail;

        member *tmp2 = head;
        while (tmp2->next != tail)
        {
            tmp2 = tmp2->next;
        }
        tmp2->next = tmp;
    }

    void delPresident()
    {
        if (head->name == "None")
        {
            cout << "There is no President to remove" << endl;
        }
        else
        {
            cout << "President" << head->name << " (PRN- " << head->prn << " ) has been removed" << endl;
            strcpy(head->name, "None");
            head->prn = 0;
        }
    }

    void delSecretary()
    {
        if (tail->name == "None")
        {
            cout << "There is no secretary to remove" << endl;
        }
        else
        {
            cout << "Secretary" << tail->name << " (PRN- " << tail->prn << " ) has been removed" << endl;
            strcpy(tail->name, "None");
            tail->prn = 0;
        }
    }

    void delMember(char name[30])
    {
        member *temp, *p;
        temp = head;

        if (strcmp(head->name, "None") == 0 && strcmp(tail->name, "None") == 0 && head->next == tail)
        {
            cout << "No member is present in club" << endl;
        }
        else
        {

            while (temp != NULL)
            {
                if (strcmp(head->name, name) == 0)
                {
                    cout << "President cannot be removed" << endl;
                    break;
                }
                else if (strcmp(tail->name, name) == 0)
                {
                    cout << "Secretary Cannot be removed" << endl;
                    break;
                }
                else if (strcmp(temp->name, name) == 0)
                {
                    cout << "Member " << temp->name << " (PRN- " << temp->prn << ")"
                         << "is removed." << endl;
                    p->next = temp->next;
                    delete temp;
                    break;
                }
                else
                {
                    p = temp;
                    temp = temp->next;
                }
                if (temp == NULL)
                {
                    cout << "Member Not Found" << endl;
                }
            }
        }
    }

    void display()
    {
        member *temp;
        temp = head;
        if (strcmp(head->name, "None") == 0 && strcmp(tail->name, "None") == 0 && head->next == tail)
        {
            cout << "No members present in the club" << endl;
        }
        else
        {

            while (temp != NULL)
            {

                if (temp == head)
                {
                    cout << "President: " << temp->name << " (PRN- " << temp->prn << ")" << endl;
                    temp = temp->next;
                }

                else if (temp->next == NULL)
                {
                    cout << "Secretary: " << temp->name << " (PRN- " << temp->prn << ")" << endl;
                    temp = temp->next;
                }

                else
                {
                    cout << "Member: " << temp->name << " (PRN- " << temp->prn << ")" << endl;
                    temp = temp->next;
                }
            }
        }
    }

    void count()
    {
        int count = 0;
        member *tmp;
        tmp = head;

        if (strcmp(head->name, "None") == 0 && strcmp(tail->name, "None") == 0 && head->next == tail)
        {
            count = 0;
        }

        else if ((strcmp(head->name, "None") == 0 || strcmp(tail->name, "None") == 0) && head->next == tail)
        {
            count = 1;
        }

        else
        {
            while (tmp != NULL)
            {
                count++;
                tmp = tmp->next;
            }
        }

        cout << "Total Number of Count: " << count << endl;
    }

    void concatenate(Club c1, Club c2)
    {
        member *temp1, *temp2;
        temp1 = c1.head;

        while (temp1 != NULL)
        {
            addMember(temp1->prn, temp1->name);
            temp1 = temp1->next;
        }

        temp1 = c2.head;

        while (temp1 != NULL)
        {
            addMember(temp1->prn, temp1->name);
            temp1 = temp1->next;
        }
    }
};

void menu(Club c)
{
    int choice;
    char name[30];
    int prn;

    do
    {
        cout << "\nWhat do you Want to do?" << endl;
        cout << "1.Add President" << endl;
        cout << "2.Add Secretary" << endl;
        cout << "3.Add Member" << endl;
        cout << "4.Remove President" << endl;
        cout << "5.Remove Secretary" << endl;
        cout << "6.Remove Member" << endl;
        cout << "7.Display Members" << endl;
        cout << "8.Count Members" << endl;
        cout << "9.Exit" << endl;
        cout << "\nEnter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\nEnter Name of President";
            (cin>>ws).getline(name,30);
            cout << "Enter PRN of President: ";
            cin >> prn;
            c.addPresident(name, prn);
            break;

        case 2:
            cout << "\nEnter Name of Secretary";
            (cin>>ws).getline(name,30);
            cout << "Enter PRN of Secretary: ";
            cin >> prn;
            c.addSecretary(name, prn);
            break;

        case 3:
            cout << "\nEnter Name of Member";
            (cin>>ws).getline(name,30);
            cout << "Enter PRN of Member: ";
            cin >> prn;
            c.addMember(prn,name);
            break;

        case 4:
            c.delPresident();
            break;

        case 5:
            c.delSecretary();
            break;

        case 6:
            cout << "Enter the Name of Member: ";
            (cin>>ws).getline(name,30);
            c.delMember(name);

        case 7:
            cout << "Members of Pinnacle Club are" << endl;
            c.display();

        case 8:
            c.count();
            break;

        case 9:
            cout << "Exiting!!!" << endl;
            break;
        default:
            cout << "Invalid Choice " << endl;
            break;
        }
    } while (choice != 9);
}

int main()
{

    Club c1, c2, conclub;
    int ch;

    do
    {
        cout << "Which Class you want to work with?" << endl;
        cout << "1.Class A" << endl;
        cout << "2.Class B" << endl;
        cout << "3.Concatenate Two Class " << endl;
        cout << "4.Exit" << endl;
        cout << "\nEnter your choice: ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            menu(c1);
            break;
        case 2:
            menu(c2);
            break;
        case 3:
            conclub.concatenate(c1, c2);
            cout << "Concatenate Class is: " << endl;
            conclub.display();
            break;
        case 4:
            cout << "Exiting!!!!" << endl;
            break;
        default:
            cout << "\nInvalid Choice" << endl;
            break;
        }
    } while (ch != 4);
    cout << "\nThank You for using Program!!!" << endl;

    getchar();

    return 0;
}
