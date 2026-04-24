#include<iostream>
#include<list>
#include<string>
using namespace std;

int const TABLE_SIZE=1000003;
struct Entry
{
    int key;
    string value;
};
list<Entry> table[TABLE_SIZE];

int hashf(int key)
{
    return key%TABLE_SIZE;
}

void insert(int key, const string& value )
{
    int index=hashf(key);
    for (auto& e:table[index])
    {
        if (e.key==key)
        {
            e.value=value;
            return;
        }
    }
    table[index].push_back({key,value});
}

void deletekey(int key)
{
    int index= hashf(key);
    auto& c =table[index];
    for (auto it =c.begin();it!=c.end();++it)
    {
        if (it->key==key)
        {
            c.erase(it);
            return;
        }
    }
}

void search(int key)
{
    int index=hashf(key);
    for (auto& e:table[index])
    {
        if (e.key==key)
        {
            cout<<e.value<<'\n';
            return;
        }
    }
    cout<<"NOT_FOUND\n";
}

int main()
{

    return 0;
}