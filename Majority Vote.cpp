class Solution {
public:
    // Function to delete a node from the circular linked list
    Node* deleteNode(Node* head, int key) {
        if (!head) return NULL; // If the list is empty
        
        Node* curr = head;
        Node* prev = NULL;

        // If the node to be deleted is the head
        if (head->data == key) {
            // If there's only one node in the list
            if (head->next == head) {
                delete head;
                return NULL;
            }

            // Find the last node
            Node* last = head;
            while (last->next != head) {
                last = last->next;
            }

            // Move head to next node and adjust the last node to point to the new head
            Node* new_head = head->next;
            last->next = new_head;
            delete head;
            return new_head;
        }

        // If the node to be deleted is not the head
        do {
            prev = curr;
            curr = curr->next;
        } while (curr != head && curr->data != key);

        if (curr->data == key) {
            prev->next = curr->next;
            delete curr;
        }

        return head;
    }

    // Function to reverse a circular linked list
    Node* reverse(Node* head) {
        if (!head || head->next == head) return head; // If the list is empty or has only one node
        
        Node* prev = NULL;
        Node* curr = head;
        Node* next = NULL;
        
        do {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        } while (curr != head);
        
        // Adjust the head's next pointer to make it circular again
        head->next = prev;
        return prev;
    }
};
