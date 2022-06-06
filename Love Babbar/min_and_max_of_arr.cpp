
#include <bits/stdc++.h>
using namespace std;

int max(int arr[],int n){
    int temp = 0;
    for (int i = 0; i<n-1; i++){
        temp = arr[0];
        if(arr[i]>temp)
            temp = arr[i];
        

    }
    cout<< temp<<" "<<endl;
    return 0;


}
int min (int arr[], int n){
    int temp2 = 0;
    for (int i = 0; i<n-1;i++){
        temp2 = arr[0];
        if(arr[i]<temp2)
            temp2 = arr[i];

    }
    cout<<temp2<<" "<<endl;
    return 0;

}
int main(){
    int arr[]= {1,0,50,19,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    max(arr,n);
    min(arr,n);

    return 0;
}