#include <iostream>
// insertion
using namespace std;
class node
{
public:
    int data;
    node *prev;
    node *next;
    node(int val)
    {
        data = val;
        prev = NULL;
        next = NULL;
    }
};
int main()
{
    int arr[] = {2, 4, 6, 8};
    // node *head = NULL;

    // 1.insertion at the starting
    //  for (int i = 0; i < 4; i++)
    //  {
    //      if (head == NULL)
    //      {
    //          head = new node(arr[i]);
    //      }
    //      else
    //      {
    //          node *temp = new node(arr[i]);
    //          temp->next = head;
    //          head->prev = temp;
    //          head = temp;
    //      }
    //  }

    // 2,insertion at the end
    // for (int i = 0; i < 4; i++)
    // {
    //     if (head == NULL)
    //     {
    //         head = new node(arr[i]);
    //     }
    //     else
    //     {
    //         node *curr = head;
    //         while (curr->next != NULL)
    //         {
    //             curr = curr->next;
    //         }
    //         node *temp = new node(arr[i]);
    //         curr->next = temp;
    //         temp->prev = curr;
    //     }
    // }

    // 3.insertion at end using tail pointer
    node *head, *tail;
    tail = head = NULL;
    for (int i = 0; i < 4; i++)
    {
        if (head == NULL)
        {
            head = new node(arr[i]);
            tail = head;
        }
        else
        {
            node *temp = new node(arr[i]);
            temp->prev = tail;
            tail->next = temp;
            tail = temp;
        }
    }

    node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    // 4.insertion at given position pos=3;
    // int pos = 0;
    // // insertion at start
    // if (pos == 0)
    // {
    //     // linkedlist do not exist
    //     if (head == NULL)
    //     {
    //         head = new node(5);
    //     }
    //     // exist
    //     else
    //     {
    //         node *temp = new node(5);
    //         temp->next = head;
    //         head->prev = temp;
    //         head = temp;
    //     }
    // }
    // else
    // {
    //     node *curr = head;
    //     // go to the node after which i have to insert
    //     while (--pos)
    //     {
    //         curr = curr->next;
    //     }
    //     // insertion at end
    //     if (curr->next == NULL) // last node
    //     {
    //         node *temp = new node(5);
    //         temp->prev = curr;
    //         curr->next = temp;
    //     }
    //     else
    //     {
    //         // insert at middle
    //         node *temp = new node(5);
    //         temp->next = curr->next;
    //         temp->prev = curr;
    //         curr->next = temp;
    //         temp->next->prev = temp;
    //     }
    // }
    // temp = head;
    // while (temp)
    // {
    //     cout << temp->data << " ";
    //     temp = temp->next;
    // }

    //-----------------------------------------------deletion--------------------------------------------

    // 1.deletion at starting
    // if (head != NULL)
    // {
    //     if (head->next == NULL)
    //     {
    //         delete head;
    //         head = NULL;
    //     }
    //     node *temp = head;
    //     head = head->next;
    //     delete temp;
    // }

    // 2.deletion from end
    // if (head != NULL)
    // {
    //     if (head->next == NULL)
    //     {
    //         delete head;
    //         head = NULL;
    //     }
    //     else
    //     {
    //         node *curr = head;
    //         while (curr->next)
    //         {
    //             curr = curr->next;
    //         }
    //         curr->prev->next = NULL;
    //         delete curr;
    //     }
    // }

    // 3.at given position
    int pos = 3;
    if (head != NULL)
    {
        node *curr = head;
        while (--pos)
        {
            curr = curr->next;
        }
        curr->prev->next = curr->next;
        curr->next = curr->prev;
        delete curr;
    }
    temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}