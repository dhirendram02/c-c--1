
//forward declaration
class list;

class Node{
    int data;
    

public:
    Node* next;
    Node(int d):data(d),next(NULL){}

    int getdata(){
        return data;
    }

    friend class list;
};

class list{
    Node * head;
    Node * tail;
public:
     
    list():head(NULL),tail(NULL){}

    Node* begin(){
        return head;
    }

    void push_front(int data){
        if(head==NULL){
            Node * n = new Node(data);
            head = tail = n;
            return;
        }
        else{
            Node * n = new Node(data);
            n->next = head;
            head = n;
        }
    }
    void push_back(int data){
        if(head==NULL){
            Node * n = new Node(data);
            head = tail = n;
        }
        else{
            Node * n = new Node(data);
            tail->next = n;
            tail = n;
        }

    }
    void insert(int data,int pos){
        if(pos==0){
            push_front(data);
            return;

        }
        //otherwise
        Node* temp = head;
        for(int jump=1;jump<=pos-1;jump++){
            temp = temp->next;
        }
        Node * n = new Node(data);
        n->next = temp->next;
        temp->next = n;
    }

};