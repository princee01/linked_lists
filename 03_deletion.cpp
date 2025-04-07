#include <iostream>
using namespace std;
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
    // creation of linkedlist
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

    // 1. deletion of starting node.

    // if (HEAD != NULL)
    // {
    //     Node *n = HEAD;
    //     HEAD = HEAD->next;
    //     delete n;
    // }

    // 2.deletion from end

    // if (HEAD != NULL)
    // {
    //     // if one node present
    //     if (HEAD->next == NULL)
    //     {
    //         Node *temp = HEAD;
    //         delete temp;
    //         HEAD = NULL;
    //     }
    //     // more than a node present
    //     else
    //     {
    //         Node *curr = HEAD;
    //         Node *prev = NULL;
    //         while (curr->next != NULL)
    //         {
    //             prev = curr;
    //             curr = curr->next;
    //         }

    //         delete curr;
    //         prev->next = NULL;
    //     }
    // }

    // 3.delete node from a given posisition

    int x = 3;
    if (x == 1)
    {
        Node *temp = HEAD;
        HEAD = HEAD->next;
        delete temp;
    }
    else
    {
        Node *prev, *curr;
        prev = NULL;
        curr = HEAD;
        x--;
        while (x--)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        delete curr;
    }

    // print new array
    Node *temp;
    temp = HEAD;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}