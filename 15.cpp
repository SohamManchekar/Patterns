/*

Q15.
    input : 4
    expected output : 
                    * * * * 
                    * * * 
                    * * 
                    * 
    Logic :  int space = n - i + 1;
    Explanation : (number represents space(n - i + 1) just for explanation, no number will be in output.)
                space = 4 - 1 + 1 = 4 (no space , * * * * )
                space = 4 - 2 + 1 = 3 (1 space ,  * * * 1 )
                space = 4 - 3 + 1 = 2 (2 space ,  * * 1 2 )
                space = 4 - 4 + 1 = 1 (3 space ,  * 1 2 3 )

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
        int space = n - i + 1;
        while (j<=space){
            cout << "* ";
            j++;
        }
        cout << endl;
        i++;
    }
}