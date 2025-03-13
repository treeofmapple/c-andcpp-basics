#include <iostream>
#include <random>

using namespace std;

int generateRandom() {

	random_device rd;

	mt19937 gen(rd());

	uniform_int_distribution<> distrib(1, 100);

	cout << "Random Numbers: "; 
	for (int n = 0; n < 10; ++n) {
		cout << distrib(gen) << " ";
	}
	cout << std::endl;
	
	return 0;
}

void guess() {







}


void guesstries() {



}


void win() {


}

void lose() {

}