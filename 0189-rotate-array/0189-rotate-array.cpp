class Solution {
public:
    void rotate(vector<int>& arr, int d) {
        int n=arr.size();
 if(n == 0) return;

    // Get the effective number of rotations:
    d = d % n;

    // checking if d is a multiple of n:
    if (d == 0) return;

    int temp[d]; // temporary array

    //step 1: Copying last d elements
    // in the temporary array:
    for (int i = n - d; i < n; i++) {
        temp[i - (n - d)] = arr[i];
    }

    // step 2: Shift first (n-d) elements
    // to the right by d places in the given array:
    for (int i = n - d - 1; i >= 0; i--) {
        arr[i + d] = arr[i];
    }

    //step 3: Place the elements of the temporary
    // array in the first d places of the given array:
    for (int i = 0; i < d; i++) {
        arr[i] = temp[i];
      }
    }
};