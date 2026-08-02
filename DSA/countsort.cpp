#include <bits/stdc++.h>
using namespace std;

void countingSort(vector<int>& arr) {
    if (arr.empty()) return;
    int minVal = *min_element(arr.begin(), arr.end());
    int maxVal = *max_element(arr.begin(), arr.end());
    int range = maxVal - minVal + 1;

    vector<int> count(range);
    for (int num : arr) {
        count[num - minVal]++;
    }

    int index = 0;
    for (int i = 0; i < range; ++i) {
        while (count[i]--) {
            arr[index++] = i + minVal;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    countingSort(arr);

    for (int i = 0; i < n; ++i) {
        cout << arr[i];
        if (i + 1 < n) cout << ' ';
    }
    cout << '\n';
    return 0;
}
