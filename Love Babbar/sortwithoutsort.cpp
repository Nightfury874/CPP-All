# include <bits/stdc++.h>
using namespace std;

int sortarr(int arr[], int n){
    int count1 = 0, count0=0, count2=0;

    for (int i = 0; i<n; i++){
        if (arr[i]==1){
            count1++;
        }
        if (arr[i]==0){
            count0++;
        }
        if (arr[i]==2){
            count2++;
        }
    }
   // cout<<count0<<" "<<count1<< " "<<count2<<" "<<endl;
    for(int i = 0; i<count0;i++){
        arr[i] = 0;
    }
    int y = count0-1;
    for (int i = y; i<count1; i++){
        arr[i] = 1;
    }
    int x = count0 + count1;
    for (int i =x; i<n; i++) {
        arr[i]= 2;
    }
    return 0;

}
int main(){
    int arr[] = {0,2,0,1,0,1,2,0,2,0,2,1,2,0,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i<n; i++){
        cout << arr[i]<<" "<<endl;
        
    }
    
    sortarr(arr,n);
    for (int i = 0; i<n; i++){
        cout << arr[i]<<" ";
    }
    return 0;
}