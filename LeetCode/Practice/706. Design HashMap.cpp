// class MyHashMap {
// public:

//     vector<int> arr;
//     MyHashMap() {
//         arr.resize(1000001, -1);
//         // memset(arr, -1, 1000001);
//         cout << arr[250005];
//     }

//     void put(int key, int value) {
//         arr[key] = value;
//     }

//     int get(int key) {
//         return arr[key];
//     }

//     void remove(int key) {
//         arr[key] = -1;
//     };
// };

// /**
//  * Your MyHashMap object will be instantiated and called as such:
//  * MyHashMap* obj = new MyHashMap();
//  * obj->put(key,value);
//  * int param_2 = obj->get(key);
//  * obj->remove(key);
//  */

class MyHashMap
{
public:
   unordered_map<int, int> ump;
   // MyHashMap() {
   // }

   void put(int key, int value)
   {
      ump[key] = value;
   }

   int get(int key)
   {
      return ump.find(key) == ump.end() ? -1 : ump[key];
   }

   void remove(int key)
   {
      ump.erase(key);
   };
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */