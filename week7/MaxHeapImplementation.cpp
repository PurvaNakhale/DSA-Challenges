#include <iostream>
using namespace std;

class heap {
    public:
    int arr[100];
    int size = 0;

    heap(){
        arr[0] = -1;
        size = 0;
    }

    void insert(int val){
        size = size + 1;
        int index = size;
        arr[index] = val;

        while(index > 1){
            int parent = index/2;
            if(arr[parent] < arr[index]){
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else{
                return;
            }
        }
    }

    void deleteHeapNode() {
        if(size == 0){
            cout<<"Nothing to delete";
        }

        arr[1] = arr[size];
        size--;

        int i = 1;
        while(i < size){
            int leftIndex = i*2;
            int rightIndex = i*2+1;

            if(leftIndex < size && arr[i] < arr[leftIndex]){
                swap(arr[i], arr[leftIndex]);
                i = leftIndex;
            }
            else if(rightIndex < size && arr[i] < arr[rightIndex]){
                swap(arr[i], arr[rightIndex]);
                i = rightIndex;
            }
            else{
                return;
            }
        }
    }

    void print(){
        for(int i=1; i<=size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){

    heap h;
    h.insert(50);
    h.insert(28);
    h.insert(44);
    h.insert(30);
    h.insert(80);

    h.print();

    h.deleteHeapNode();

    h.print();

    return 0;
}