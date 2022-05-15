#include "include.h"

// ������� �� ��������� ������ ��� ������
void allocate_memory(int*& ar, int size)
{
    if (size <= 0 || size > 10000)
    {
        // 1) ������ ����������� � ������������ ������� � �������
        cout << "Error size!\n";
        return;

        // 2) ���������� ������ (����������)
        // throw "Error size!\n"; // try catch

        // 3) ������������� ������
        // size = 10;
    }

    // ���������� �������� ������
    ar = new int[size];
}

// ������� �� ������������ ������� �������
void check_size(int& size)
{
    if (size <= 0 || size > 10000)
    {
        // 1) ������ ����������� � ������������ ������� � �������
        //cout << "Error size!\n";
        //return;

        // 2) ���������� ������ (����������)
        // throw "Error size!\n"; // try catch

        // 3) ������������� ������
        size = 10;
    }
}

// ������� ��������� ������ ���������� ������� � ��������� ���������
void random_fill_array(int* ar, const unsigned int size, const int min, const int max)
{

    if (size <= 0 || size > 10000)
    {
        // 1) ������ ����������� � ������������ ������� � �������
        cout << "Error size!\n";
        return;

        // 2) ���������� ������ (����������)
        // throw "Error size!\n"; // try catch

        // 3) ������������� ������
        // size = 10;
    }
    
    int k = max - min + 1;
    for (int i = 0; i < size; i++)
    {
        ar[i] = rand() % k + min;
    }
}

// ������� ���������� �������� �������
void print_array(int* ar, int size)
{
    check_size(size);
    for (int i = 0; i < size; i++)
    {
        cout << ar[i] << ", ";
    }
    cout << "\n\n";
}

// ������� ��������� ������ ������� ������� (cin)
void cin_fill_array(int* ar, const unsigned int size)
{

    if (size <= 0 || size > 10000)
    {
        // 1) ������ ����������� � ������������ ������� � �������
        cout << "Error size!\n";
        return;

        // 2) ���������� ������ (����������)
        // throw "Error size!\n"; // try catch

        // 3) ������������� ������
        // size = 10;
    }
    cout << " Enter members of massive:" << "\n";
    for (int i = 0; i < size; i++)
    {
        cin >> ar[i];
    }
}

// ������� �� ���������� �����-�� ����� ����������� ������,������ �������� �� ��������� 0  
void fill_array_onenumber(int* ar, const unsigned int size, int number = 0)
{
    if (size <= 0 || size > 10000)
    {
        // 1) ������ ����������� � ������������ ������� � �������
        cout << "Error size!\n";
        return;

        // 2) ���������� ������ (����������)
        // throw "Error size!\n"; // try catch

        // 3) ������������� ������
        // size = 10;
    }

    for (int i = 0; i < size; i++)
    {
        ar[i] = number;
    }
}

//������� ������������ ������ �� �������
void free_memory(int* ar)
{
    delete[] ar;
}

// ���������� �������� � ����� �������
void add_element_to_end(int*& ar, int& size, int number)
{
    // 1) ��������� ������ ��� ����� ������, � ������� ����� �� 1 ������� ������
    int* temp = new int[size + 1];
    // 2) ��������� ������ �� ������� ������� � �����
    for (int i = 0; i < size; i++)
    {
        temp[i] = ar[i];
    }
    // 3) ���� �������� � ����� ������ �������
    temp[size] = number;
    // 4) ������� ������ �� ������� �������
    delete[] ar;
    // 5) ��������������� ��������� ��������� �� ����� ������
    ar = temp;
    // 6) ��������� ���������� ��������� �������
    size++;
}

//������� ��������� ������� � ������ �������
void add_element_to_start(int*& ar, int& size, int number)
{
    // 1) ��������� ������ ��� ����� ������, � ������� ����� �� 1 ������� ������
    int* temp = new int[size + 1];
    // 2) ��������� ������ �� ������� ������� � �����
    for (int i = 0; i < size; i++)
    {
        temp[i + 1] = ar[i];
    }
    // 3) ���� �������� � ������ ������ �������
    temp[0] = number;
    // 4) ������� ������ �� ������� �������
    delete[] ar;
    // 5) ��������������� ��������� ��������� �� ����� ������
    ar = temp;
    // 6) ��������� ���������� ��������� �������
    size++;
}

//������� ��������� ������� � �������� �������
void add_element_by_index(int*& ar, int& size, int index, int number)
{
    // 1) ��������� ������ ��� ����� ������, � ������� ����� �� 1 ������� ������
    int* temp = new int[size + 1];
    // 2) ��������� ������ �� ������� ������� � �����
    for (int i = 0; i < index; i++)
    {
        temp[i] = ar[i];
    }
    for (int i = index; i < size + 1; i++)
    {
        temp[i + 1] = ar[i];//???
    }
    // 3) ���� �������� � ������ ������ ������ �������
    temp[index] = number;
    // 4) ������� ������ �� ������� �������
    delete[] ar;
    // 5) ��������������� ��������� ��������� �� ����� ������
    ar = temp;
    // 6) ��������� ���������� ��������� �������
    size++;
}

//������� ������� ������� �� �������� �������
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

///������� ������� ������� � ������
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

///������� ������� �������  � �����
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
