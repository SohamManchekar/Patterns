/*

Q18. 
    input : 4
    expected output :
                       1
                      22
                     333
                    4444
    Logic : 
         1) int space = n - i;
                while (space)
                {
                    cout << " ";
                    space--;
                }
        2)  int j = 1;
                while(j<=i){
                    cout << i;
                    j++;
                } 

    Explanation : First we have to print space and then pattern.
        1) when i = 1;
            int space = 4 - 1;
                while (3){
                    cout << " ";
                    space--;        --> 3 space
                }
            
            when i = 2;
            int space = 4 - 2;
                while (2){
                    cout << " ";
                    space--;        --> 2 space
                }

            when i = 3;
            int space = 4 - 3;
                while (1){
                    cout << " ";
                    space--;        --> 1 space
                }

            when i = 4;
            int space = 4 - 4;
                while (0){
                    cout << " ";
                    space--;        --> 0 space
                }

            output for space will be ( _ represents space (n-i) just for explanation, no 1's will be in output.): 
                       _ _ _ 1
                       _ _ 1 1
                       _ 1 1 1
                       1 1 1 1  

            2) ( _ represents space (n-i) just for explanation, no _ will be in output.): 
                int j = 1;
                    while(j<=i){
                        cout << i;
                        j++;
                    } 
                when j = 1  --> _ _ _ 1
                when j = 2  --> _ _ 2 2
                when j = 3  --> _ 3 3 3
                when j = 4  --> 4 4 4 4
                    
*/

#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter number : ";
    cin >> n;
    int i = 1;

    while (i<=n){
        int space = n - i;
        while (space)
        {
            cout << " ";
            space--;
        }
        int j = 1;
        while(j<=i){
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }
}