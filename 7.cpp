/*

Q7. 
    input : 3
    expected output : 
                     A B C 
                     A B C 
                     A B C 
    logic : char ch = 'A' + j - 1;
    Explanation :
                'A' + 1 - 1 = 'A'
                'A' + 2 - 1 = 'B'
                'A' + 3 - 1 = 'C'

                'A' + 1 - 1 = 'A'
                'A' + 2 - 1 = 'B'
                'A' + 3 - 1 = 'C'
                
                'A' + 1 - 1 = 'A'
                'A' + 2 - 1 = 'B'
                'A' + 3 - 1 = 'C'
                     
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number : ";
    cin >> n;
    int i = 1;

    while (i<=n){
        int j = 1;
        while (j<=n){
            char ch = 'A' + j - 1;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}