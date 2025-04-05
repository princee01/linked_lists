#include <iostream>
using namespace std;

// 1.insertion at starting position in linkedlist..............................................

// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node(int value)
//     {
//         data = value;
//         next = NULL;
//     }
// };
// int main()
// {
//     Node *HEAD;
//     HEAD = new Node(28);
//     cout << HEAD->data << endl;
//     cout << HEAD->next << endl;
// }
//-------------------------------------or----------------------------------------------
// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node(int value)
//     {
//         data = value;
//         next = NULL;
//     }
// };
// int main()
// {
//     int arr[] = {2, 4, 6, 3};
//     Node *HEAD;
//     HEAD = NULL;
//     for (int i = 0; i < 4; i++)
//     {
//         // linkedlist does not exist
//         if (HEAD == NULL)
//         {
//             HEAD = new Node(arr[i]);
//         }
//         // linkedlist exists
//         else
//         {
//             Node *temp;
//             temp = new Node(arr[i]);
//             temp->next = HEAD;
//             HEAD = temp;
//         }
//     }
//     // print linkedlist values
//     Node *temp = HEAD;
//     // while (temp != NULL)
//     // {
//     //     cout << temp->data << " ";
//     //     temp = temp->next;
//     // }
// }

// 2.insertion at the end of linkedlist...................................................................
class Node
{
public:
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};
int main()
{

    Node *HEAD, *tail;
    tail = HEAD = NULL;
    int arr[] = {2, 3, 4, 6};
    for (int i = 0; i < 4; i++)
    {
        if (HEAD == NULL)
        {
            HEAD = new Node(arr[i]);
            tail = HEAD;
        }
        else
        {
            tail->next = new Node(arr[i]);
            tail = tail->next;
        }
    }
    Node *temp;
    temp = HEAD;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}