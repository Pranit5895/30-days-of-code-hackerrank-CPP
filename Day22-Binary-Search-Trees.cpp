

		int getHeight(Node* root){
          //Write your code here
          if ( !root ) { return -1; }
            int right_height = getHeight(root->right);
            int left_height = getHeight(root->left);
            if (right_height > left_height) { return (right_height + 1); }
            return (left_height + 1);
        }


