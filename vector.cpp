#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv) {
	
 	vector<int> vectorOne(10,5);
	
 	for (long index=0; index<20; ++index) {
		try {
			cout << "Element " << index << ": " << vectorOne.at(index) << endl;
		}
		catch (exception& e) {
			cout << "Element " << index << ": index exceeds vector dimensions." << endl;
		}
	}
	
	return EXIT_SUCCESS;
}

