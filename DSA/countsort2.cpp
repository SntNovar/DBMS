#include <iostream>
#include <vector>
#include <algorithm>

class CountingSort {
public:
    // Main method to sort the vector
    void sort(std::vector<int>& arr) {
        if (arr.empty()) return;

        // 1. Identify range boundaries
        int minVal = *std::min_element(arr.begin(), arr.end());
        int maxVal = *std::max_element(arr.begin(), arr.end());
        int range = maxVal - minVal + 1;

        // 2. Initialize frequency and output vectors
        std::vector<int> count(range, 0);
        std::vector<int> output(arr.size());

        // 3. Store the frequency of each element
        for (int num : arr) {
            count[num - minVal]++;
        }

        // 4. Transform frequencies into cumulative positions
        for (int i = 1; i < range; ++i) {
            count[i] += count[i - 1];
        }

        // 5. Place elements into the sorted output array (reverse order for stability)
        for (int i = arr.size() - 1; i >= 0; --i) {
            output[count[arr[i] - minVal] - 1] = arr[i];
            count[arr[i] - minVal]--;
        }

        // 6. Transfer sorted elements back to the original array
        arr = std::move(output);
    }
};

int main() {
    std::vector<int> data = {4, -2, 2, 8, -2, 3, 1};
    
    CountingSort sorter;
    sorter.sort(data);

    std::cout << "Sorted array: ";
    for (int num : data) {
        std::cout << num << " ";
    }
    return 0;
}