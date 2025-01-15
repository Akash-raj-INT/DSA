#include <iostream>
#include <vector>
#include <algorithm>

int maximizeArraySum(std::vector<int>& arr) {
    std::sort(arr.begin(), arr.end(), std::greater<int>());
    int sum = 0;
    for (int num : arr) {
        sum += num;
    }
    return sum;
}

int main() {
    std::vector<int> arr = {1, -2, 3, 4, -5, 6};
    int maxSum = maximizeArraySum(arr);
    std::cout << "Maximum Sum: " << maxSum << std::endl;
    return 0;
}

