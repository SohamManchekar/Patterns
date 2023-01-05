/*

Q11. 
    input : 4
    expected output : 
                    A 
                    B C 
                    D E F 
                    G H I J
    Logic : int count = 0;
            char ch = 'A' + count;
            count++;
    Explanation : 
                'A' + 0 = 'A'
                .
                .
                .
                'A' + 9 = 'J'
                    
*/

#include<iostream>
using namespace std;

int main (){
    int n;
    cout << "Enter number : ";
    cin >> n;
    int i = 1;
    int count = 0;

    while (i<=n){
        int j = 1;
        while (j<=i){
            char ch = 'A' + count;
            cout << ch << " ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
}