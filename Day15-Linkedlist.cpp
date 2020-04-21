

      Node* insert(Node *head,int data)
      {
          //Complete this method
          Node * newNode = new Node(data);
          Node * tail = head;
          if ( !head ) { return newNode; }
          
          // Locate tail node
          for (;tail->next; tail = tail->next);

          // Insert at end of list
          tail->next = newNode;
          
          return head;
      }


