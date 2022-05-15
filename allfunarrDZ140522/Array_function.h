#include "include.h"

// функция по выделению памяти под массив
void allocate_memory(int*& ar, int size)
{
    if (size <= 0 || size > 10000)
    {
        // 1) делаем уведомление о неправильном размере и выходим
        cout << "Error size!\n";
        return;

        // 2) генерируем ошибку (исключение)
        // throw "Error size!\n"; // try catch

        // 3) нормализируем размер
        // size = 10;
    }

    // реализация основной задачи
    ar = new int[size];
}

// функция по нормализации размера массива
void check_size(int& size)
{
    if (size <= 0 || size > 10000)
    {
        // 1) делаем уведомление о неправильном размере и выходим
        //cout << "Error size!\n";
        //return;

        // 2) генерируем ошибку (исключение)
        // throw "Error size!\n"; // try catch

        // 3) нормализируем размер
        size = 10;
    }
}

// функция заполняет массив случайными числами в указанном диапазоне
void random_fill_array(int* ar, const unsigned int size, const int min, const int max)
{

    if (size <= 0 || size > 10000)
    {
        // 1) делаем уведомление о неправильном размере и выходим
        cout << "Error size!\n";
        return;

        // 2) генерируем ошибку (исключение)
        // throw "Error size!\n"; // try catch

        // 3) нормализируем размер
        // size = 10;
    }
    
    int k = max - min + 1;
    for (int i = 0; i < size; i++)
    {
        ar[i] = rand() % k + min;
    }
}

// функция показывает элементы массива
void print_array(int* ar, int size)
{
    check_size(size);
    for (int i = 0; i < size; i++)
    {
        cout << ar[i] << ", ";
    }
    cout << "\n\n";
}

// функция заполняет массив числами вручную (cin)
void cin_fill_array(int* ar, const unsigned int size)
{

    if (size <= 0 || size > 10000)
    {
        // 1) делаем уведомление о неправильном размере и выходим
        cout << "Error size!\n";
        return;

        // 2) генерируем ошибку (исключение)
        // throw "Error size!\n"; // try catch

        // 3) нормализируем размер
        // size = 10;
    }
    cout << " Enter members of massive:" << "\n";
    for (int i = 0; i < size; i++)
    {
        cin >> ar[i];
    }
}

// функция по заполнению каким-то одним определённым числом,третий параметр по умолчанию 0  
void fill_array_onenumber(int* ar, const unsigned int size, int number = 0)
{
    if (size <= 0 || size > 10000)
    {
        // 1) делаем уведомление о неправильном размере и выходим
        cout << "Error size!\n";
        return;

        // 2) генерируем ошибку (исключение)
        // throw "Error size!\n"; // try catch

        // 3) нормализируем размер
        // size = 10;
    }

    for (int i = 0; i < size; i++)
    {
        ar[i] = number;
    }
}

//функция высвобождает память от массива
void free_memory(int* ar)
{
    delete[] ar;
}

// добавление элемента в конец массива
void add_element_to_end(int*& ar, int& size, int number)
{
    // 1) выделение памяти под новый массив, в котором будет на 1 элемент больше
    int* temp = new int[size + 1];
    // 2) переносим данные со старого массива в новый
    for (int i = 0; i < size; i++)
    {
        temp[i] = ar[i];
    }
    // 3) ввод значения в конец нового массива
    temp[size] = number;
    // 4) очистка памяти от старого массива
    delete[] ar;
    // 5) перенаправление основного указателя на новый массив
    ar = temp;
    // 6) изменение количество элементов массива
    size++;
}

//функция добавляет элемент в начало массива
void add_element_to_start(int*& ar, int& size, int number)
{
    // 1) выделение памяти под новый массив, в котором будет на 1 элемент больше
    int* temp = new int[size + 1];
    // 2) переносим данные со старого массива в новый
    for (int i = 0; i < size; i++)
    {
        temp[i + 1] = ar[i];
    }
    // 3) ввод значения в начало нового массива
    temp[0] = number;
    // 4) очистка памяти от старого массива
    delete[] ar;
    // 5) перенаправление основного указателя на новый массив
    ar = temp;
    // 6) изменение количество элементов массива
    size++;
}

//функция добавляет элемент в середину массива
void add_element_by_index(int*& ar, int& size, int index, int number)
{
    // 1) выделение памяти под новый массив, в котором будет на 1 элемент больше
    int* temp = new int[size + 1];
    // 2) переносим данные со старого массива в новый
    for (int i = 0; i < index; i++)
    {
        temp[i] = ar[i];
    }
    for (int i = index; i < size + 1; i++)
    {
        temp[i + 1] = ar[i];//???
    }
    // 3) ввод значения в нужный индекс нового массива
    temp[index] = number;
    // 4) очистка памяти от старого массива
    delete[] ar;
    // 5) перенаправление основного указателя на новый массив
    ar = temp;
    // 6) изменение количество элементов массива
    size++;
}

//функция удаляет элемент из середины массива
void delete_element_by_index(int*& ar, int& size, int index)
{
    int* temp = new int[size - 1];
    for (int i = 0; i < index; i++)
    {
        temp[i] = ar[i];//???
    }

    for (int i = index; i < size - 1; i++)
    {
        temp[i] = ar[i + 1];
    }
    delete[] ar;
    ar = temp;
    size--;
}

///функция удаляет элемент в начале
void delete_element_by_start(int*& ar, int& size)
{
    int* temp = new int[size - 1];
    for (int i = 1; i < size; i++)
    {
        temp[i - 1] = ar[i];
    }
    delete[] ar;
    ar = temp;
    size--;
}

///функция удаляет элемент  в конце
void delete_element_by_end(int*& ar, int& size)
{
    int* temp = new int[size - 1];
    for (int i = 0; i < size - 1; i++)
    {
        temp[i] = ar[i];
    }

    delete[] ar;
    ar = temp;
    size--;
}
