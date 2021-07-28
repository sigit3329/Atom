#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main() {
	const int max_array =6;
	string nama_s;//_s = string
	string matkul_s[max_array];

	for (int x = 0; x < max_array; x++)
	{
		cout << "Silakan kak " << nama_s << " memasukan nama Mata Kuliah Ke-" << x + 1 << ". ";
		getline(cin, matkul_s[x]);
		cout << "\n";

}

}
