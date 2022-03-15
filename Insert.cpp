#include<bits/stdc++.h>
using namespace std;
struct DAT{
    int Table[999]={0};
    void insert(int n)
    {
        Table[n]=1;
    }
    void Delete(int n)
    {
        Table[n]=0;
    }
    int search(int n)
    {
       return Table[n];
    }
};

int main()
{
     DAT dat;
     dat.insert(10);
     dat.insert(20);
     dat.Delete(20);
     cout<<dat.search(20)<<" "<<dat.search(10);
}