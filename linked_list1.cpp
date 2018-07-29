#include<iostream>

using namespace std;

    struct node
    {
        int data;
        node *next;
    };
    class list
    {
        private:
        node *head, *tail;
        public:
        list()
        {
            head = NULL;
            tail = NULL;
        }

        void create_node(int value)
        {   
            node *temp = new node;
            temp->data = value;
            temp->next = NULL;
            
            if(head==NULL)
            {
                head = temp;
                tail = temp;
                temp = NULL;
            }
            else
            {
                tail->next = temp;
                tail = temp;
            }
        }

        void disply_node()
        {
            node *temp = new node;
            temp = head;
            while(temp != NULL)
            {
                cout<<temp->data<<endl;
                temp = temp->next;
            }
        }
    };

int main(){


list obj;
obj.create_node(45);
obj.create_node(56);

obj.disply_node();
return 0;
}