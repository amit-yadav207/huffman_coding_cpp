#include <iostream>
#include "huffmanCode.hpp"
using namespace std;

int main(int argc, char* argv[]) {
    if (argc != 3) {
        cout << "Failed to detect Files";
		exit(1);
	}

    huffman obj(argv[1], argv[2]);
    obj.decompress();
    cout << "Decompressed successfully" << endl;

    return 0;
}