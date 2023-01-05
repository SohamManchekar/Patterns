/*

Q13. 
    input : 4
    expected output : 
                    D 
                    C D 
                    B C D 
                    A B C D
    Logic : char ch = 'A' + (n - i + j) - 1;
    Explanation : 
                'A' + (4 - 1 + 1) - 1 = 'D'

                'A' + (4 - 2 + 1) - 1 = 'C' 
                'A' + (4 - 2 + 2) - 1 = 'D' 

                'A' + (4 - 3 + 1) - 1 = 'B' 
                'A' + (4 - 3 + 2) - 1 = 'C' 
                'A' + (4 - 3 + 3) - 1 = 'D' 

                'A' + (4 - 4 + 1) - 1 = 'A' 
                'A' + (4 - 4 + 2) - 1 = 'B' 
                'A' + (4 - 4 + 3) - 1 = 'C' 
                'A' + (4 - 4 + 4) - 1 = 'D' 
                    
*/

#include<iostream>
using namespace std;

int main (){
    int n;
    cout << "Enter number : ";
    cin >> n;
    int i = 1;

    while (i<=n){
        int j = 1;
        while (j<=i){
            char ch = 'A' + (n - i + j) - 1;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}