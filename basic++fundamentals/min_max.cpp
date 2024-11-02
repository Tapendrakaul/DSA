#include<bits/stdc++.h>
using namespace std;

int minimum(int num1, int num2){
    return min(num1, num2);

}

int maximum(int num1, int num2){
    return max(num1, num2);
}

int main(){
    int num1, num2;
    cout << "Enter First number :";
    cin >> num1;
    cout << "Enter Second number :";
    cin >> num2;
    int min_num = minimum(num1, num2);
    int max_num = maximum(num1, num2);
    cout << "The minimum number is:" << min_num << endl;
    cout << "The maximum number is:" << max_num << endl;

}