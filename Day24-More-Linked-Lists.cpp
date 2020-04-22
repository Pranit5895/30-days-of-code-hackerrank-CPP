 Node* removeDuplicates(Node *head)
          {
            //Write your code here
              Node *curr = head;
        while (curr && curr->next) {
            while (curr->next && curr->data == curr->next->data) {
                curr->next = curr->next->next;
            }
            curr = curr->next;
        }
        return head;
          }
