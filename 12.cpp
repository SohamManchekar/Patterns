/*

Q12.
    input : 4
    expected output : 
                    A 
                    B C 
                    C D E 
                    D E F G 
    Logic :  char ch = 'A' + (i + j) - 2;
    Explanation : 
                'A' + (1+1) - 2 = 'A'

                'A' + (2+1) - 2 = 'B'
                'A' + (2+2) - 2 = 'C'

                'A' + (3+1) - 2 = 'C'
                'A' + (3+2) - 2 = 'D'
                'A' + (3+3) - 2 = 'E'

                'A' + (4+1) - 2 = 'D'
                'A' + (4+2) - 2 = 'E'
                'A' + (4+3) - 2 = 'F'
                'A' + (4+4) - 2 = 'G'

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
            char ch = 'A' + (i + j) - 2;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}