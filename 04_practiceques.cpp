#include <iostream>
using namespace std;
// Q1: reversing the list
// steps: using three pointers:1.prev,2.curr,3.fut.
//  class node
//  {
//  public:
//      int data;
//      node *next;

//     node(int val)
//     {
//         data = val;
//         next = NULL;
//     }
// };
// int main()
// {
//     int arr[] = {2, 4, 6, 8, 10};
//     node *head = NULL;
//     for (int i = 0; i < 5; i++)
//     {
//         if (head == NULL)
//         {
//             head = new node(arr[i]);
//         }
//         else
//         {
//             node *temp;
//             temp = new node(arr[i]);
//             temp->next = head;
//             head = temp;
//         }
//     }
//     node *temp = head;
//     while (temp)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }

//     // reversing the list
//     node *curr = head, *prev = NULL, *fut = NULL;
//     while (curr)
//     {
//         fut = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = fut;
//     }
//     cout << endl;
//     temp = prev;
//     while (temp)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
// }

// Q2:count middle of linkedlist
// steps:1.count the number of node.
// step2: half the node and traverse the nodes
// step3: return node;
// class node
// {
// public:
//     int data;
//     node *next;

//     node(int val)
//     {
//         data = val;
//         next = NULL;
//     }
// };
// int main()
// {
//     int arr[] = {2, 4, 6, 8, 10};
//     node *head = NULL;
//     for (int i = 0; i < 5; i++)
//     {
//         if (head == NULL)
//         {
//             head = new node(arr[i]);
//         }
//         else
//         {
//             node *temp;
//             temp = new node(arr[i]);
//             temp->next = head;
//             head = temp;
//         }
//     }
//     node *temp = head;
//     while (temp)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }

//     // return middle element
//     temp = head;
//     int count = 0;
//     while (temp)
//     {
//         count++;
//         temp = temp->next;
//     }
//     count /= 2;
//     temp = head;
//     while (count--)
//     {
//         temp = temp->next;
//     }
//     cout << "middle element is: " << temp->data << endl;
// }

// Q3: Rremove nth node from end
// steps:1.count node and subtract n from that
// step2:move curr pointer until count become 0.
// step3:delete that node

// class node
// {
// public:
//     int data;
//     node *next;

//     node(int val)
//     {
//         data = val;
//         next = NULL;
//     }
// };
// int main()
// {
//     int arr[] = {2, 4, 6, 8, 10};
//     node *head = NULL;
//     for (int i = 0; i < 5; i++)
//     {
//         if (head == NULL)
//         {
//             head = new node(arr[i]);
//         }
//         else
//         {
//             node *temp;
//             temp = new node(arr[i]);
//             temp->next = head;
//             head = temp;
//         }
//     }
//     node *temp = head;
//     while (temp)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;

//     // remove nth node
//     int n;
//     cout << "enter the number of node to be deleted from end.";
//     cin >> n;
//     int count = 0;
//     temp = head;
//     while (temp)
//     {
//         count++;
//         temp = temp->next;
//     }
//     count = count - n;

//     node *curr = head, *prev = NULL;
//     while (count--)
//     {
//         prev = curr;
//         curr = curr->next;
//     }
//     prev->next = curr->next;
//     delete curr;

//     // print list after deletion
//     temp = head;
//     while (temp)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// Q4:delete every kth node
// class node
// {
// public:
//     int data;
//     node *next;

//     node(int val)
//     {
//         data = val;
//         next = NULL;
//     }
// };
// int main()
// {
//     int arr[] = {2, 4, 6, 8, 10};
//     node *head = NULL;
//     for (int i = 0; i < 5; i++)
//     {
//         if (head == NULL)
//         {
//             head = new node(arr[i]);
//         }
//         else
//         {
//             node *temp;
//             temp = new node(arr[i]);
//             temp->next = head;
//             head = temp;
//         }
//     }
//     node *temp = head;
//     while (temp)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;

//     // remove every kth node
//     int k = 2, count = 1;
//     node *curr = head, *prev = NULL;
//     while (curr)
//     {
//         if (count == k)
//         {
//             prev->next = curr->next;
//             delete curr;
//             curr = prev->next;
//             count = 1;
//         }
//         else
//         {
//             prev = curr;
//             curr = curr->next;
//             count++;
//         }
//     }
//     temp = head;
//     while (temp)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
// }

// Q5:Rotate List
// class node
// {
// public:
//     int data;
//     node *next;

//     node(int val)
//     {
//         data = val;
//         next = NULL;
//     }
// };
// int main()
// {
//     int arr[] = {2, 4, 6, 8, 10};
//     node *head = NULL;
//     for (int i = 0; i < 5; i++)
//     {
//         if (head == NULL)
//         {
//             head = new node(arr[i]);
//         }
//         else
//         {
//             node *temp;
//             temp = new node(arr[i]);
//             temp->next = head;
//             head = temp;
//         }
//     }
//     node *temp = head;
//     while (temp)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;

//     // rotate list by k node
//     int k = 2, count = 0;
//     temp = head;
//     while (temp)
//     {
//         count++;
//         temp = temp->next;
//     }
//     count = count - k;

//     node *curr = head, *prev = NULL;
//     while (count--)
//     {
//         prev = curr;
//         curr = curr->next;
//     }
//     prev->next = NULL;

//     node *tail = curr;
//     while (tail->next != NULL)
//     {
//         tail = tail->next;
//     }
//     tail->next = head;
//     head = curr;

//     //print rotated list
//     temp = head;
//     while (temp)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
// }

// Q6:check palindrome
class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};
int main()
{
    int arr[] = {2, 4, 6, 8, 10};
    node *head = NULL;
    for (int i = 0; i < 5; i++)
    {
        if (head == NULL)
        {
            head = new node(arr[i]);
        }
        else
        {
            node *temp;
            temp = new node(arr[i]);
            temp->next = head;
            head = temp;
        }
    }
    node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    // check palindrome
    // step1:break list in two equal half
    // step2:reverse second half
    // step3:check palindrome

    int count = 0;
    temp = head;
    while (temp)
    {
        count++;
        temp = temp->next;
    }
    count /= 2;

    node *curr = head, *prev = NULL;
    while (count--)
    {
        prev = curr;
        curr = curr->next;
    }
    prev->next = NULL;

    node *fut = NULL;
    prev = NULL;
    while (curr)
    {
        fut = curr->next;
        curr->next = prev;
        prev = curr;
        curr = fut;
    }
    node *head1 = head, *head2 = prev;
    while (head1)
    {
        if (head1->data != head2->data)
        {
            cout << "not palindrome..";
        }
        else if (head1->data == head2->data)
        {
            cout << "list is palindrome..";
        }
        head1 = head1->next;
        head2 = head2->next;
    }
}
