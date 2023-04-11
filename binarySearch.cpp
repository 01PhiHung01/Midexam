//cho mang 2,3,4,10,40 tim gia tri 10
#include <iostream>
using namespace std;

int bS(int arr[], int left, int right, int x) {
    int middle;
    while (left<=right) {
        middle = (left+right)/2;
    if (arr[middle]==x)
        return middle;
    if (x>arr[middle])
        left = middle+1;
    else
        right = middle-1;
    }
    return -1;
}
int main() {
    int arr[] = {2,3,4,10,40};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 10;
    int result = bS(arr,0,n-1,x);
    cout<<result;
}
