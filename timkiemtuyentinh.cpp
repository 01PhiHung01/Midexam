//tuyentinh {2,3,4,10,40} tim 10
#include <iostream>
using namespace std;

int linearS(int arr[], int n,int x) {
    for (int i=0;i<n;i++) 
        if (arr[i]==x)
            return i;
        return -1;
    
}
int main() {
    int arr[] = {2,3,4,10,40};
    int x =10;
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = linearS(arr,n,x);
    if (result==-1) 
        cout<<"Ko tim thay";
    else cout <<"Vi tri la " <<result;
}
    
