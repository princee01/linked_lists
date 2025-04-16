#include <iostream>
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
node *createdll(int arr[], int index, int size, node *back)
{
    if (index == size)
    {
        return NULL;
    }
    node *temp = new node(arr[index]);
    temp->prev = back;
    temp->next = createdll(arr, index + 1, size, temp);
    return temp;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    node *head;
    head = createdll(arr, 0, 5, NULL);

    node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}