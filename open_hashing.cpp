/* Demonstration of collision resolution through open hashing */
#include<iostream>
#include<vector>
using namespace std;
void insert(vector<string> hashTable[],string s,int hashTableSize);
void search(vector<string> hashTable[],string s,int hashTableSize);
int main()
{
    vector<string> hashTable[20];
    int hashTableSize=20;
    insert(hashTable,"abcd",20);
    insert(hashTable,"bcda",20);
    insert(hashTable,"efgh",20);

    search(hashTable,"bcda",20);
    search(hashTable,"efgh",20);
    search(hashTable,"cdab",20);
    return 0;
}

void insert(vector<string> hashTable[],string s,int hashTableSize)
{
    int sum=0,len=s.length();
    for(int i=0;i<len;i++)
    {
        sum+=s[i];
    }
    int index=sum%hashTableSize;
    hashTable[index].push_back(s);
}

void search(vector<string> hashTable[],string s,int hashTableSize)
{
    int sum=0,len=s.length();
    for(int i=0;i<len;i++)
    {
        sum+=s[i];
    }
    int index=sum%hashTableSize;
    int size=hashTable[index].size();
    for(int i=0;i<size;i++)
    {
        if(hashTable[index][i]==s)
        {
            cout<<s<<" is found!"<<endl;
            return;
        }
    }
    cout<<s<<" is not found!"<<endl;
}