#include <iostream>

double* create_array(int size) {
    return new double[size]();
}

int main() {
    int size;
    
    std::cout << "Введите размер массива: ";
    std::cin >> size;
    
    double* arr = create_array(size);
    
    std::cout << "Массив: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i];
        if (i < size - 1) {
            std::cout << " ";
        }
    }
    std::cout << std::endl;
    
    delete[] arr;
    
    return 0;
}

