/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution
{
public:
   Node *connect(Node *root)
   {
      Node *head = root;
      while (head != nullptr)
      {
         Node *temp = new Node(0);
         Node *curr = temp;

         while (head != NULL)
         {
            if (head->left != nullptr)
            {
               curr->next = head->left;
               curr = curr->next;
            }
            if (head->right != nullptr)
            {
               curr->next = head->right;
               curr = curr->next;
            }
            head = head->next;
         }
         head = temp->next;
      }
      return root;
   }
};