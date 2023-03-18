struct Node
{
   const string url;
   Node *next;
   Node *prev;
   // Node() : url(""), next(nullptr), prev(nullptr) {};
   Node(string x) : url(x), next(nullptr), prev(nullptr){};
   // Node(string x, Node *next, Node *prev) : url(x), next(next), prev(prev) {};
};

class BrowserHistory
{
public:
   Node *curr = NULL;

   BrowserHistory(string homepage)
   {
      curr = new Node(homepage);
   }

   void visit(string url)
   {
      curr->next = new Node(url);
      curr->next->prev = curr;
      curr = curr->next;
   }

   string back(int steps)
   {
      while (curr->prev != NULL && steps > 0)
      {
         curr = curr->prev;
         steps--;
      }
      return curr->url;
   }

   string forward(int steps)
   {
      while (curr->next != NULL && steps > 0)
      {
         curr = curr->next;
         steps--;
      }
      return curr->url;
   }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */