#include<iostream>
#include<vector>
using namespace std;

void insertion_sort(vector<int> arr){
    int key;
    vector<int> arr2 = arr;
    for (int j = 1; j < arr2.size(); j++){ 
        key = arr2[j];
        int i = j-1; 
        while (i > -1 && arr2[i] > key){ 
            arr2[i+1] = arr2[i];
            i = i - 1;
        }
        arr2[i + 1] = key;
    }
    for (int i = 0; i < arr2.size(); i++){
        cout << arr2[i] << " "; 
    }
    cout << endl;
}

int main(){
    int n = 0;
    cin >> n;
    vector<int> items;
    int value;
    for (int i = 0; i < n; i++){
        cin >> value;
        items.push_back(value);
    }
    insertion_sort(items);
    return 0; 
}
