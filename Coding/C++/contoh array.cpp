#include <iostream>

int main() {
 
    int data[] = {8, 3, 9, 12, 56, 8};
    int total = 0;
    double rata;
 
    int length = (sizeof(data) / sizeof(*data));
 
    std::cout << "Data\t\t: ";
 
    for(int i = 0; i < length; i++) {
 
        std::cout << data[i] << " ";
    }
 
    std::cout << "\n" << std::endl;
 
    for(int i = 0; i < length; i++) {
 
        total += data[i];
    }
 
    rata = ((double)total) / length;
 
    std::cout << "Total\t\t: " << total << std::endl;
    std::cout << "Rata - rata\t: " << rata << std::endl;
 
    std::cout << std::endl;
 
    return 0;
}
