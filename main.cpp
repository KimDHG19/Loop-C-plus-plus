#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

    int val;
    cout<<"enter a number"<<endl;
    cin>>val;

    while (val != 2)
    {
        cout<<"enter any number, enter 2 to quit "<<endl;
        cin>>val;
    }

    cout<<"you have entered 2 and successfully completed the program "<<endl;

    return 0;
}