#include <iostream>
#include <random>
#include <vector>

#include <add_array.hh>

using namespace add_array;

int main() {
	std::vector<float> A, B, C;

  // ensure the vectors are contiguous
	A.reserve(n);
	B.reserve(n);
	C.reserve(n);

	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_real_distribution<float> dis(0.0f, 1.0f);

  // use a random value to initialize the first element to avoid compiler
  // optimizations
	float value = dis(gen);
	A.push_back(value);
	B.push_back(value - 1.0f);

  // initialize the array
  // ...

	// add the two vectors
  // ...

  // print the first 8 elements
  // ...
}
