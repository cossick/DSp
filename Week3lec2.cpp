#include <iostream>
#include<vector>
using namespace std;
int findUnique(vector<int> arr){
    int ans=0;
    //we are intializng 0 with xor , because it gives the same number with 0 
    for(int i=0;i<arr.size();i++){
        ans=ans^arr[i];
    }
    return ans;
}

int main(){
    
   
    //UNIQUE ELEMENT 
    int n;
    cin>>n;
    cout<<"enter the size of array ";
    vector<int> arr(n);

    cout<<"enter tjhe elements"<<endl;

    for(int i=0; i<arr.size();i++){
        cin>>arr[i];
    }

    int uniqueElement =findUnique(arr);

    cout<<"unique Element is "<<uniqueElement<<endl;

    // union 
    int arr[]={1,2,3,4};
    int brr[]={5,6,7};
    vector<int> crr;

    for (int )


    //intersction 
    vector<int> arr{1,2,3,4,5,6};
    vector<int> brr{2,3,5};
    vector<int> crr;

    for (int i=0; i<arr.size();i++){
        int element =arr[i];
        for (int j=0;j<brr.size();j++){
            if (element==brr[j]){
                crr.push_back(element);
            }
        }
    }

    

    

   
}