// hashing is a technique used to map data to
// a fixed size-table using a hash function

// tome complexity for searching in hash table is O(1)
#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, string> students = {{1, "Archita"}, {2, "Asmita"}, {3, "Arup"}};
    students[1] = "Joysree";
    students[5] = "Tuktuk";
    students.insert(make_pair(6, "Bun"));
    for (int i = 1; i <= students.size(); i++)
    {
        cout << "Student : " << i << " named " << students[i] << endl;
    }
    map<int, string>::iterator itr;
    for (itr = students.begin(); itr != students.end(); itr++)
    {
        cout << itr->first << " " << itr->second << endl;
    }
}