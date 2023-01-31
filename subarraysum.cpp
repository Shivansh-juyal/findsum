#include <bits/stdc++.h>
using namespace std;
int main(){
    int s,sum,ab=0;
    cout<<"enter the size of array";
    cin>>s;
    int arr[s];
    //to input array 
    cout<<"enter the element"<<endl;
    for (int i = 0 ; i < s ; i++){
        cin>>arr[i];
    }
    //to find the sum
    cout<<"enter the sum you wanna find"<<endl;
    cin>>sum;
    for (int i =0 ; i<s ; i++)
    
    {
       if (ab==3)
       break;
        for(int j = 0 ; j<s;j++){
            int temp=arr[i]+arr[j];
            if(sum==temp){  
                ab=3;
                cout<<"the sum of element from "<<  i <<" psition to " << j <<" is "<<sum<<endl;
                break;
            
            }
        }

    }
   
    return 0;
}