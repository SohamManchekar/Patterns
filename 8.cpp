/*

Q8. 
    input : 4
    expected output : 
                    A B C D 
                    E F G H 
                    I J K L 
                    M N O P
    Logic : int count = 0;
            ch = 'A' + count;
            count++;
    Explanation:
            ch = 'A' + 0 = 'A'
            ch = 'A' + 1 = 'B'
            ch = 'A' + 2 = 'C'
            ch = 'A' + 3 = 'D'

            ch = 'A' + 4 = 'E'
            ch = 'A' + 5 = 'F'
            ch = 'A' + 6 = 'G'
            ch = 'A' + 7 = 'H'

            ch = 'A' + 8 = 'I'
            ch = 'A' + 9 = 'J'
            ch = 'A' + 10 = 'K'
            ch = 'A' + 11 = 'L'

            ch = 'A' + 12 = 'M'
            ch = 'A' + 13 = 'N'
            ch = 'A' + 14 = 'O'
            ch = 'A' + 15 = 'P'

*/

#include<iostream>
using namespace std;

int main (){
    int n;
    cout << "Enter number : ";
    cin >> n;
    int i = 1;
    int count = 0;

    while (i<=n){
        int j = 1;
        while (j<=n){
            char ch = 'A' + count;
            cout << ch << " ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
}