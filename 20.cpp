/*

Q20.
    input : 4
    expected output : 
                        1
                       121
                      12321
                     1234321
    Logic : 
        1) //? create space
            int space = n - i;
            while (space) {
                cout << " ";
                space--;
            }

        2) //? create first left triangle till middle
            int j = 1;
            while(j<=i){
                cout << j ;
                j++;
            }

        3) //? create right triangle 
            int start = i - 1;
            while(start){
                cout << start;
                start--;
            }

    Explanation :
        1) int space = n - i
                     = 4 - 1 = 3
                     = 4 - 2 = 2
                     = 4 - 3 = 1
                     = 4 - 4 = 0
        output( _ represents space (n-i),no _ or * will be printed as output): 
                _ _ _ *
                _ _ * *
                _ * * *
                * * * *

        2) left triangle :
            while(j<=i){
                cout << j;
                j++;
            }
        output only till left triangle( _ represents space (n-i), no _ will be in output.): 
                _ _ _ 1
                _ _ 1 2
                _ 1 2 3
                1 2 3 4

        3) right triangle:
            int start = i - 1;
                      = 1 - 1 = 0
                      = 2 - 1 = 1
                      = 3 - 1 = 2
                      = 4 - 1 = 3
            while(start){
                cout << start;
                start--;
            }

            output when right triangle created( _ represents space (n-i), no _ will be in output.): 
                    _ _ _ 1
                    _ _ 1 2 1
                    _ 1 2 3 2 1
                    1 2 3 4 3 2 1

*/

#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter number : ";
    cin >> n;
    int i = 1;

    while(i<=n){

        //? create space
        int space = n - i;
        while (space) {
            cout << " ";
            space--;
        }

        //? create first left triangle till middle
        int j = 1;
        while(j<=i){
            cout << j ;
            j++;
        }

        //? create right triangle 
        int start = i - 1;
        while(start){
            cout << start;
            start--;
        }

        cout << endl;
        i++;
        
    }
}