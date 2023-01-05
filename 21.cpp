/*

Q21.
    input : 5
    expected output : 
                    1 2 3 4 5 5 4 3 2 1
                    1 2 3 4 * * 4 3 2 1
                    1 2 3 * * * * 3 2 1
                    1 2 * * * * * * 2 1
                    1 * * * * * * * * 1
    Logic : 
        1) //? 1st triangle
            int j = 1;
            while(j<= n - i + 1){
                cout << j;
                j++;
            }

         2) //? 2nd triangle 
            int l = 1;
            while(l<= i - 1){
                cout << "**";
                l++;
            }

         3) //? 3rd triangle
            int r = n - i + 1;
            while(r>0){
                cout << r;
                r--;
            }
    Explanation : 
        1)  int j = 1;
            while(j<= n - i + 1){
                cout << j;
                j++;
            }

        --> j <= 5 - 1 + 1 = 5 --> 1 2 3 4 5
        --> j <= 5 - 2 + 1 = 4 --> 1 2 3 4
        --> j <= 5 - 3 + 1 = 3 --> 1 2 3
        --> j <= 5 - 4 + 1 = 2 --> 1 2 
        --> j <= 5 - 5 + 1 = 1 --> 1 

        ! left side created

        2)  int l = 1;
            while(l<= i - 1){
                cout << "**";
                l++;
            }

        --> l <= 1 - 1 = 0 --> 1 2 3 4 5
        --> l <= 2 - 1 = 1 --> 1 2 3 4 * *
        --> l <= 3 - 1 = 2 --> 1 2 3 * * * *
        --> l <= 4 - 1 = 3 --> 1 2 * * * * * *
        --> l <= 5 - 1 = 4 --> 1 * * * * * * * *

        ! middle portion created

        3) int r = n - i + 1;
            while(r>0){
                cout << r;
                r--;
            }

        -- > r = 5 - 1 + 1 = 5 --> 1 2 3 4 5 5 4 3 2 1
        -- > r = 5 - 2 + 1 = 4 --> 1 2 3 4 * * 4 3 2 1
        -- > r = 5 - 3 + 1 = 3 --> 1 2 3 * * * * 3 2 1
        -- > r = 5 - 4 + 1 = 2 --> 1 2 * * * * * * 2 1
        -- > r = 5 - 5 + 1 = 1 --> 1 * * * * * * * * 1

        ! right side created


*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number : ";
    cin >> n;
    int i = 1;

    while(i<=n){

        //? 1st triangle
        int j = 1;
        while(j<= n - i + 1){
            cout << j;
            j++;
        }

        //? 2nd triangle 
        int l = 1;
        while(l<= i - 1){
            cout << "**";
            l++;
        }

        //? 3rd triangle
        int r = n - i + 1;
        while(r>0){
            cout << r;
            r--;
        }

        cout << endl;
        i++;
    }
}