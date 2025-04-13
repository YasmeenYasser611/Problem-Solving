#include <iostream>
#include<vector>
#include<list>

using namespace std ;


int Count (list<int> mylist)
{
    
    if(mylist.size() == 0)
    {
        return 0;
    }
    else{
        
        mylist.pop_front();
        return 1+Count(mylist);
    }
}

int main()
{
    list<int> l = {1 , 2 ,3};

    std::cout<< Count( l );
    return 0;
}