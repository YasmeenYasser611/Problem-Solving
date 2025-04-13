#include <iostream>
#include<vector>

using namespace std ;


int sum (vector<int> vect)
{
    int b;
    if(vect.size() == 0)
    {
        return 0;
    }
    else{
        b = vect[0];
        vect.erase(vect.begin() );
        return b+sum(vect);
    }
}

int main()
{
    vector<int> v = {1 , 2 ,3};

    std::cout<< sum( v );
    return 0;
}
