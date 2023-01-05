/*

Q16. 
    input : 4
    expected output : 
                1)
                     ****
                      ***
                       **
                        *
    Logic : 
        1) int space = i - 1;
                while (space){
                    cout << " ";
                    space--;
                }

        2) int j = n - i + 1;
            while(j>0){
                cout << "*";     
                j--;
            }

    Explanation : First we have to print space and then pattern.
        1) when i = 1;
            int space = 1 - 1;
                while (0){
                    cout << " ";
                    space--;        --> no space
                }
            
            when i = 2;
            int space = 2 - 1;
                while (1){
                    cout << " ";
                    space--;        --> 1 space
                }

            when i = 3;
            int space = 3 - 1;
                while (2){
                    cout << " ";
                    space--;        --> 2 space
                }

            when i = 4;
            int space = 4 - 1;
                while (3){
                    cout << " ";
                    space--;        --> 3 space
                }

            output for space will be (number represents space (i-1) just for explanation, no number will be in output.): 
                       _ _ _ _
                       1 _ _ _
                       1 2 _ _
                       1 2 3 _

            2) (number represents space (i-1) just for explanation, no number will be in output.): 
                int j = n - i + 1;
                while(j>0){
                    cout << "*";     
                    j--;
                }
                when j = 4 - 1 + 1 = 4  --> * * * *
                when j = 4 - 3 + 1 = 3  --> 1 * * *
                when j = 4 - 2 + 1 = 2  --> 1 2 * *
                when j = 4 - 1 + 1 = 1  --> 1 2 3 *
   
*/

#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter number : ";
    cin >> n;
    int i = 1;

    while (i<=n){
        int space = i - 1;
        while (space){
            cout << " ";
            space--;
        }
        int j = n - i + 1;
        while(j>0){
            cout << "*";     
            j--;
        }
        cout << endl;
        i++;
    }
}