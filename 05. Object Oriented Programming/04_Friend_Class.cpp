#include <bits/stdc++.h>
using namespace std;

class Node
{
    private:
        int key;
        Node *next;
        Node(int key) : key(key), next(nullptr) {}
        
    public:
        friend class LinkedList;
};

class LinkedList
{
    public:
        Node *root;
        
        LinkedList(int key) {
            root = new Node(key);
        }
        
        void insert(int key) {
            Node *trav = root;
            while (trav->next != nullptr)
                trav = trav->next;
            trav->next = new Node(key);
        }
        
        void print() {
            Node *trav = root;
            while (trav != nullptr) {
                cout << trav->key << " ";
                trav = trav->next;
            }
            cout << endl;    
        }
};

int main()
{
     LinkedList list(0);
     
     list.insert(1);
     list.insert(2);
     list.insert(3);
     list.insert(4);
     
     list.print();
     
     return 0;
}