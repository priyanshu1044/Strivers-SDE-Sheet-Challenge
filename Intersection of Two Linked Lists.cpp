/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };

*****************************************************************/

int findIntersection(Node *headA, Node *headB)
{
    //Write your code here
    if(headA==NULL||headB==NULL)return NULL;
        Node*a=headA;
        Node*b=headB;
        while(a!=b){
            a=a==NULL?headB:a->next;
            b=b==NULL?headA:b->next;
            
        }
        return a;
}