#include<iostream> // C++ 
#include<stdint.h> // C library


using namespace std;

class Node {
private:
    // (this) is a keyword for defualt pointer
    int id; // Data part
public:
    Node* next; // Pointer Variable to store address

    //Constructor function of the Node class
    Node() {};
    Node(int id) { this->id = id; }

    // Function to read the data
    int read_data() {
        return this->id;
    }
    // //Function to store/set the data
    // void store_data(int id) {
    //     this->id = id;
    // }

    // Function to print data
    void print_data(Node* hh) {
        // loop through the linked list each node
        while (hh != nullptr)
        {
            // print each id number
            cout << hh->read_data() << endl;

            // Move to next pointer/ node
            hh=hh->next;
        }
    }

};// End class Node


int main(void)
{
    Node ll;
    Node* n1, * n2, * n3, * n4; // Declare pointer nodes

    Node* head = nullptr; // null pointer HAS nothing

    // Create nodes with memory 
    //head = new Node(10);// new is a keyword to create memory structure
    n1 = new Node(10);// new is a keyword to create memory structure
    n2 = new Node(20);// new is a keyword to create memory structure
    n3 = new Node(30);// new is a keyword to create memory structure
    n4 = new Node(40);// new is a keyword to create memory structure

    head = n1; // store starting address for the linked list

    // n1->store_data(10); // store id number 
    n1->next = n2; // store address for the next Node

    // set your next n2 node
   // n2->store_data(20);
    n2->next = n3;

    // set n3 

    //n3->store_data(30);
    n3->next = n4;


    // set n4
    //n4->store_data(40);
    n4->next = nullptr;

    
    ll.print_data(head);
    return 0; // end programm
}
