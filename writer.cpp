#include <iostream>
#include <fstream>
using namespace std;

/*
 * Lauren Rose
 * ITEC 371
 * Department of Information Technology
 * Radford University
 * 
 * This program overwrites values 
 * in a binary file.
 */

int main(int argc, char** argv) {
    ofstream ofile;
    ofile.open(argv[1], ios::binary | ios::in | ios::app);
    ofile.close();
    ofile.open(argv[1], ios::binary | ios::in);
    ofile.seekp(0, ios::beg);

    int num = 0;
    cout << "Number please! ";
    cin >> num;
    int cur = 0;
    while (num != -1) {
        ofile.write((char*)&num, sizeof(num));
        cur = cur + sizeof(num);
        ofile.seekp(cur);
        cout << "Number please! ";
        cin >> num;
    }
    ofile.close();
    return 0;
}