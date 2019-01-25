#include <iostream>
#include <fstream>
using namespace std;

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