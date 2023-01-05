/*

Q14.
    input : 4
    expected output : 
                        *
                       **
                      ***
                     ****
    Logic : 1)
                while (i<=n){
                    int space = n - i;
                    while (space){
                        cout << " ";
                        space--;
                }

            2)
             int j = 1;
                while (j<=i){
                    cout << "*";
                    j++;
                }
                cout << endl;
                i++;

    Explanation : First we have to print space and then pattern.
    Input : 4
    1)
        int space = n - i
        when i = 1  --> n - i = 4 - 1 = 3
                        while (3){      
                        cout << " ";
                        space--;            --> 3,2,1 -> 3 space

        when i = 2  --> n - i = 4 - 2 = 2
                        while (2){      
                        cout << " ";
                        space--;            --> 2,1 -> 2 space

        when i = 3  --> n - i = 4 - 3 = 1
                        while (1){      
                        cout << " ";
                        space--;            --> 1 -> 1space
        
        when i = 4  --> n - i = 4 - 4 = 0
                        while (0){      
                        cout << " ";
                        space--;            --> no space.
        
        output for space will be (number represents space (n-i) just for explanation, no number will be in output.): 
                                   3 2 1 _
                                   2 1 _ _
                                   1 _ _ _
                                   _ _ _ _

        2) It will print star as per condition and the output will be(number represents space (n-i) just for explanation, no number will be in output.) :
                                  3 2 1 *
                                  2 1 * *
                                  1 * * *
                                  * * * *

*/

#include<iostream>
using namespace std;

int main (){
    int n;
    cout << "Enter number : ";
    cin >> n;
    int i = 1;

    while (i<=n){
        int space = n - i;
        while (space){
            cout << " ";
            space--;
        }

        int j = 1;
        while (j<=i){
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
}