#include <iostream>
#include <list>

using namespace std;

int Max(list<int> mylist)
{
    if (mylist.size() == 0) 
    {
        return 0; 
    } 
    else 
    {
        int b = mylist.front();  
        mylist.pop_front();  

        int maxRest = Max(mylist);  

        if (b > maxRest) 
        {
            return b;  
        } 
        else 
        {
            return maxRest;
        }
    }
}

int main()
{
    list<int> l = {1, 2, 3};

    cout << Max(l) << endl; 
    return 0;
}
