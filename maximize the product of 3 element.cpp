#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maximizeProductOfThree(vector<int>& arr) {
    // Sorting the array
    sort(arr.begin(), arr.end());
    int n = arr.size();
    
    // Calculating the product of three largest elements
    int product1 = arr[n-1] * arr[n-2] * arr[n-3];  
    
    // Calculating the product of two smallest and the largest element
    int product2 = arr[0] * arr[1] * arr[n-1];  

    // Returning the maximum of the two products
    return max(product1, product2);
}

int main() {
    // Initializing the array
    vector<int> arr = {1, -2, 3, 4, -5, 6};

    // Calling the function and storing the result
    int maxProduct = maximizeProductOfThree(arr);

    // Printing the result
    cout << "Maximum Product of Three Elements: " << maxProduct << endl;

    return 0;
}

