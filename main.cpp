#include <iostream>
using namespace std;

int main() {
    int arr[8] = {10, 11, 14, 17, 1, 22, 3, 7};
    int sum = 0;
    for (int i : arr) {
        if (i % 2 != 0)
            sum += i;
    }
    cout << "SUM: " << sum << endl;
    return 0;
}
