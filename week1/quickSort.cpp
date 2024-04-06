#include <iostream>
using namespace std;

int partition(int arr[], int s, int e){
    int pivot = arr[s];
    int cnt = 0;

    for(int i=s+1; i<=e; i++){
        if(arr[i] < pivot){
            cnt++;
        }
    }

    int pivotInex = s + cnt;
    swap(arr[pivotInex], arr[s]);

    int i = s, j = e;

    while(i<pivotInex && j>pivotInex){

        while(arr[i] <= pivot){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }
        if(i<pivotInex && j>pivotInex){
            swap(arr[i++], arr[j--]);
        }
    }


    return pivotInex;
}

void quickSort(int arr[], int s, int e){

    if(s>=e){
        return;
    }

    int p = partition(arr, s, e);

    quickSort(arr, s, p-1);
    quickSort(arr, p+1, e);


}

int main(){
    int arr[5] = {5, 1, 6, 4, 9};
    int n = 5;

    quickSort(arr, 0, n-1);

    for(int i=0; i<n; i++) 
    {
        cout << arr[i] << " ";
    } cout << endl;


    return 0;
}