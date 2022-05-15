#include "Array_function.h"
#include "include.h"

//DZ
// 1) написать ещё одну функцию по заполнению массива, но не случайно, а вручную (заполнение сиином)
// 2) написать третью функцию по заполнению каким-то одним определённым числом fill_array(ar, size, 5); - третий параметр сделать со значением по умолчанию 0 
// 3) функция высвобождает память от массива - free_memory(ar);
// 4) функция добавляет элемент в начало массива
// 5) функция добавляет элемент в середину массива
// 6) 3 функции по удалению - с конца, с начала, по индексу delete_element_by_index(ar, size, 4);
// 7) для всех функций сделать прототипы
// 8) для всех функций сделать шаблоны (работают с массивами любого типа)
// 9) вынести все эти функции в отдельный заголовочный файл

void allocate_memory(int*& ar, int size);
void check_size(int& size);
void random_fill_array(int* ar, const unsigned int size, const int min, const int max);
void print_array(int* ar, int size);
void cin_fill_array(int* ar, const unsigned int size);
void fill_array_onenumber(int* ar, const unsigned int size, int number);
void free_memory(int* ar);
void add_element_to_end(int*& ar, int& size, int number);
void add_element_to_start(int*& ar, int& size, int number);
void add_element_by_index(int*& ar, int& size, int index, int number);
void delete_element_by_index(int*& ar, int& size, int index);
void delete_element_by_start(int*& ar, int& size);
void delete_element_by_end(int*& ar, int& size);

int main()
{
    int size = 5;
    int* ar = new int[size];
    ///* cin_fill_array(ar, size);
    // print_array(ar, size);
     /*fill_array_onenumber(ar, size);
     print_array(ar, size);*/
    fill_array_onenumber(ar, size, 5);
    print_array(ar, size);
    add_element_by_index(ar, size, 2, 27);
    print_array(ar, size);
    delete_element_by_start(ar, size);
    print_array(ar, size);
    fill_array_onenumber(ar, size);
    print_array(ar, size);
}
