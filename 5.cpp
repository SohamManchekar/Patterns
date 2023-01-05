/*

Q5. 
    input : 4
    expected output :
                    1 
                    2 1
                    3 2 1 
                    4 3 2 1 

    logic: ((i - j) + 1); which will create upper value as expected.
    Explanation:
                1 - 1 + 1 = 1

                2 - 1 + 1 = 2
                2 - 2 + 1 = 1

                3 - 1 + 1 = 3
                3 - 2 + 1 = 2
                3 - 3 + 1 = 1

                4 - 1 + 1 = 4
                4 - 2 + 1 = 3
                4 - 3 + 1 = 2
                4 - 4 + 1 = 1

*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number : ";
    cin >> n;
    int i = 1;

    while (i<=n){
        int j = 1;
        while (j<=i){
            cout << i - j + 1 << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}