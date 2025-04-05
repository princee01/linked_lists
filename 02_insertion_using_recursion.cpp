#include <iostream>
using namespace std;
//1. insertion at the end using recursion...........................................................
 class node
 {
 public:
     int data;
     node *next;
     node(int value)
     {
         data = value;
         next = NULL;
     }
 };
 node *createlinkedlist(int arr[], int index, int size)
 {
     if (index == size)
     {
         return NULL;
     }
     node *temp = new node(arr[index]);
     temp->next = createlinkedlist(arr, index + 1, size);

    return temp;
}
int main()
{

    node *head;
    head = NULL;

    int arr[] = {2, 4, 6, 8};

    head = createlinkedlist(arr, 0, 4);

    node *temp;
    temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

//2insertion at the beginning using recursion.............................................................................
class node
{
public:
    int data;
    node *next;
    node(int value)
    {
        data = value;
        next = NULL;
    }
};
node *fun(int arr[], int index, int size, node *prev)
{
    if (index == size)
    {
        return prev;
    }
    node *temp = new node(arr[index]);
    temp->next = prev;
    return fun(arr, index + 1, size, temp);
}
int main()
{

    node *head;
    head = NULL;

    int arr[] = {2, 4, 6, 8};

    head = fun(arr, 0, 4, NULL);

    node *temp;
    temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

// 3.insertion at given position...................................................
class node
{
public:
    int data;
    node *next;
    node(int value)
    {
        data = value;
        next = NULL;
    }
};
node *createlinkedlist(int arr[], int index, int size)
{
    if (index == size)
    {
        return NULL;
    }
    node *temp = new node(arr[index]);
    temp->next = createlinkedlist(arr, index + 1, size);

    return temp;
}
int main()
{

    node *head;
    head = NULL;

    int arr[] = {2, 4, 6, 8};

    head = createlinkedlist(arr, 0, 4);

    // insert at particular position
    int x = 2;

    node *temp = head;
    x--;

    while (x--)
    {
        temp = temp->next;
    }
    node *temp2 = new node(15);
    temp2->next = temp->next;
    temp->next = temp2;

    temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
