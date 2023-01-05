/*

Q22.
    input : 4
    expected output : 
                    4 3 2 1 2 3 4
                      3 2 1 2 3
                        2 1 2
                          1 
    Logic : 
        1) //? left space
            int space = i - 1;
                while(space){
                    cout << " ";
                    space--; 
                }

        2) //? create 1st triangle till 1
            int j = n - i + 1;
                while(j>0){
                    cout << j;
                    j--;
                }

        3) //? create 2nd triangle after 1
            int r = 2;
                while (r<=n - i + 1){
                    cout << r;
                    r++;
                }

    Explanation :  
        1) int space = i - 1
         while(space){
                    cout << " ";
                    space--; 
                }
        --> space = 1 - 1 = 0 space --> * * * *
        --> space = 2 - 1 = 1 space --> _ * * *
        --> space = 3 - 1 = 2 space --> _ _ * * 
        --> space = 4 - 1 = 3 space --> _ _ _ *

            ! left space created.
            ( _ represents space (i-1), no _ or * will be in output.)

        2) int j = n - i + 1;
                while(j>0){
                    cout << j;
                    j--;
                }
        --> j = 4 - 1 + 1 = 4 --> 4 3 2 1
        --> j = 4 - 2 + 1 = 3 --> _ 3 2 1
        --> j = 4 - 3 + 1 = 2 --> _ _ 2 1
        --> j = 4 - 4 + 1 = 1 --> _ _ _ 1

        ! middle triangle created till 1
        ( _ represents space (i-1), no _ will be in output.)

        3)int r = 2;
                while (r<=n - i + 1){
                    cout << r;
                    r++;
                }
        --> r <= 4 - 1 + 1 = 4 -- > 4 3 2 1 2 3 4
        --> r <= 4 - 2 + 1 = 3 -- > _ 3 2 1 2 3 
        --> r <= 4 - 3 + 1 = 2 -- > _ _ 2 1 2 
        --> r <= 4 - 4 + 1 = 1 -- > _ _ _ 1 

        ! right triangle created 
        ( _ represents space (i-1), no _ will be in output.)

*/

#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter number : ";
    cin >> n;
    int i = 1;

    while(i<=n){

        //? create space from left to right
        int space = i - 1;
        while(space){
            cout << " ";
            space--; 
        }

        //? create 1st triangle till 1
        int j = n - i + 1;
        while(j>0){
            cout << j;
            j--;
        }

        //? create 2nd triangle after 1
        int r = 2;
        while (r<=n - i + 1){
            cout << r;
            r++;
        }
    
        cout << endl;
        i++;

    }
}