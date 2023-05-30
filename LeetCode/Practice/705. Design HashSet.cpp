class MyHashSet
{
public:
   int arr[1000001];

   MyHashSet()
   {
      memset(arr, 0, 1000001);
   }

   void add(int key)
   {
      arr[key] = 1;
   }

   void remove(int key)
   {
      arr[key] = 0;
   }

   bool contains(int key)
   {
      return arr[key] == 1;
   }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */