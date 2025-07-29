//----------------------HackerRank Problem-----------------
/*
    Example input type-
    2 2
    3 1 5 4
    5 1 2 8 9 3
    0 1
    1 3
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n>>k;

    //number of array- n
    vector<vector<int>> arrays(n);

    for (int i = 0; i < n; i++) {
        int size;
        cin >> size;//Each element array size

        arrays[i].resize(size);

        for (int j = 0; j < size; j++) {
            cin >> arrays[i][j];//Each element value store
        }
    }
    for (int i = 0; i < k; i++) {
        int no_arr, index;
        cin>>no_arr>>index;
        cout << arrays[no_arr][index] << endl;
    }

    return 0;
}
