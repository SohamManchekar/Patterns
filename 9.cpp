/*

Q9. 
    input : 3
    expected output : 
                    A B C 
                    B C D 
                    C D E 
    logic : 'A' + (i+j) - 2;
    Explanation :
                'A' + (1+1) - 2 = 'A';
                'A' + (1+2) - 2 = 'B';
                'A' + (1+3) - 2 = 'C';

                'A' + (2+1) - 2 = 'B';
                'A' + (2+2) - 2 = 'C';
                'A' + (2+3) - 2 = 'D';
                
                'A' + (3+1) - 2 = 'C';
                'A' + (3+2) - 2 = 'D';
                'A' + (3+3) - 2 = 'E';      
                    
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
        while (j<=n){
            char ch = 'A' + (i+j) - 2;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}