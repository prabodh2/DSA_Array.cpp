// deletion of node before a given element
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        cout << "Enter data: ";
        cin >> data;
        next = NULL;
    }
};

int main()
{
    int n;
    cout << "Enter number of nodes: ";
    cin >> n;
    Node *start = NULL;
    Node *ptr = start;
    Node *preptr = ptr;
    Node *temp = ptr;
    for (int i = 0; i < n; i++)
    {
        Node *newnode = new Node();
        if (start == NULL)
        {
            start = newnode;
            ptr = newnode;
        }
        else
        {
            ptr->next = newnode;
            ptr = newnode;
        }
    }
    int a;
    cout << "Enter element to delete a node after: ";
    cin >> a;
    Node* p=start;
    if (ptr == NULL)
    {
        cout << "Underflow" << endl;
    }
    else
    {
        
        while (preptr->data != a)
        {
            
            preptr = p;
            p = p->next;
            if (p==NULL){
                break;
            }
        }if (p==NULL){
            cout<<"no data after "<<a<<" \n";
        }else if(p==start){
            start=p->next;
            delete p;
        }
        else{
            temp = p;
            preptr->next=p->next ;
            delete temp;
        }
        
    }
    Node *ptr2=start;
    cout<<"\n updated linked list \n";
    while (ptr2 != NULL)
    {
        cout << ptr2->data << endl;
        ptr2 = ptr2->next;
    }
    return 0;
}