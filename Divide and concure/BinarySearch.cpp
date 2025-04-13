#include <iostream>
#include <array>

using namespace std;

int BinarySearch(array<int, 10> arr, int target, int low, int high);

int main() 
{
    /* Some needed variables */
    std::array<int, 10> arr = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; /* the array in which we will search, it must be sorted */
    int counter = 0;
    int low = 0;
    int high = arr.size() - 1;
    int target = 0;
    int result = -1;

    /* Ask the user to enter the target number */
    std::cout << "Please enter the number: ";
    std::cin >> target;

    /* Print the elements with their indices */
    for (const auto& iter : arr) 
    {
        std::cout << "The Element No: " << counter << " = " << iter << "\n";
        counter++;
    }

    counter = 0;
    std::cout << "\n";

    result = BinarySearch(arr, target, low, high);

    // If not found
    if (result == -1) 
    {
        std::cout << "The Element Not found !!!! \n";
    } 
    else 
    {
        /* If found, print the found index */
        std::cout << "The Element Found at: " << result << "\n";
    }

    return 0;
}

int BinarySearch(array<int, 10> arr, int target, int low, int high) 
{
    int result = -1;
    if (low <= high) 
    {
        int mid = (low + high) / 2;
        if (target == arr[mid]) 
        {
            result = mid;
        } 
        else if (target > arr[mid]) 
        {
            result = BinarySearch(arr, target, mid + 1, high);
        } 
        else 
        {
            result = BinarySearch(arr, target, low, mid - 1);
        }
    }
    return result;
}

