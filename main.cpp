#include <iostream>

using namespace std;

void InsertSort(int arr[], int n){
    int key, i;
    for (int k = 1; k < n; k++) {
        key = arr[k];
        i = k - 1;
        while ((i >= 0)&&(arr[i]>key)) {
            arr[i + 1] = arr[i];
            i = i - 1;
        }
        arr[i + 1] = key;
    }
}


int main(){
    
    int arr[10] = {6, 4, 3, 7, 3, 5, 7, 2, 3, 9};
    
    for (int i = 0; i < 10; i++){
        cout << arr[i] << " ";
    }
    
    cout << endl << "SORT:" << endl;
    InsertSort(arr, 10);
    
    for (int i = 0; i < 10; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}
