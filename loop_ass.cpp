// //WAP TO PRINT THE MULTIPLICATION TABLE OF A NUMBER , ENTERED BY THE USER

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the number: ";
//     cin>>n;
//     for(int i = 1; i<=10 ;i++){
//         cout<<n*i<<endl;
//     }
// }


// // WAP TO INPUT A NUMBER AND CHECK WHETHER THE NUMBER IS AN ARMSTRONG NUMBER OR NOT

// #include<iostream>
// using namespace std;
// int main(){
//     int n = 564;
//     int num = n;
//     int cubeSum = 0;
//     while(num>0){
//         int lastDigit = num%10;
//         cubeSum += lastDigit * lastDigit * lastDigit;
//         num /= 10;
        
//     }if (n == cubeSum){
//         cout<<"number is armstrong";
//     }
//     else{
//         cout<<"number is not armstrong";
//     }
// }



//print all the prime number fron 2 to N

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter your number: ";
//     cin>>n;
    
//     for(int i=2;i<=n;i++){
//         int curr=i;
//         bool isPrime =true;
//         for(int j=2; j*j<=1;j++){
//             if(curr % j==0){
//             isPrime=false;
//             }
//         }
// if(isPrime){
//     cout<<curr<<" ";
// }
//     }

// }



#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"enter your number: ";
    cin>>n;
    int first = 0 , second = 1;
    cout<<first<<" "<< second <<" ";
    for(int i = 0;i<n; i++){
    int third= first + second;
    cout<<third<<" ";
    first = second;
    second = third;
    }

}