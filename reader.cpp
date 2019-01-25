#include <iostream>
#include <fstream>
using namespace std;

/*
 * Lauren Rose
 * ITEC 371
 * Department of Information Technology
 * Radford University
 * 
 * This program reads a binary file
 * and outputs the contents.
 */

int main(int argc, char** argv) {
    ifstream ifile;
    ifile.open(argv[1], ios::binary | ios::out);
    ifile.seekg(0, ios::end);
    int size = ifile.tellg();
    ifile.seekg(0, ios::beg);
    int data;
    int cur = 0;
    while (cur != size) {
        ifile.read((char*)&data, sizeof(data));
        cout << data << endl;
        cur = cur + sizeof(data);
        ifile.seekg(cur);
    }
    return 0;
}