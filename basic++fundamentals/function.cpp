#include<bits/stdc++.h>
using namespace std;
// functions are set of the code which performs something for you.
// functions are used to modularise code
// functions are used to increase readibility.
// functions are used to use same code multiple times
// void - does not return anything

// sum of two numbers;

int sum(int num1, int num2){
    int num3 = num1 + num2;
    return num3;
}

int main(){
    int num1, num2;
    cin >> num1 >> num2;
    int res = sum(num1,num2);
    cout << "The sum of "  << num1 << " and " << num2 << " is : "  << res << endl;
    return 0;
}