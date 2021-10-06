#include "mylib.h"
#include <fstream>
#include <iostream>
#include <random>
#include <tuple>

#define CHECK(x,y) ((0 <= x) && (x < y)) ? true : false
#define SWAP_INT(a, b) std::swap (a,b)

void float_array::array_init(std::array<float, 15> & cur_array)
    {
        for (auto &element : cur_array)
        {
            element = {1.1f};
        }
    }

void float_array::array_print(std::array<float, 15>& cur_array)
    {
        for (const auto element : cur_array)
        {
            std::cout << element << " ";
        }
        std::cout << "\n";
    }

void float_array::array_check(std::array<float, 15> & cur_array)
    {
        int check_plus {};
        int check_minus {};
        int check_zero {};
        for (const auto element : cur_array)
        {
            if (element > 0)
            {
                check_plus ++;
            }
            else if (element < 0)
            {
                check_minus ++;
            }
            else
                check_zero ++;
        }
        std::cout << "More, than zero: " << check_plus << "\n";
        std::cout << "Less, than zero: " << check_minus << "\n";
        std::cout << "Zero: " << check_zero << "\n";
    }


void define_check()
{
    int x {};
    std::cin >> x;
    int y {10};
    if (CHECK(x,y))
    {
        std::cout << "True\n";
    }
    else
        std::cout << "False\n";
}


void create_new_empolee()
{
    // Динамически объявляем переменную и инициализируем:
    employee *empolee_ptr = new employee;
    empolee_ptr->age = 24;
    empolee_ptr->experience = 3;
    empolee_ptr->rank = 'B';

    // Вводим имя нового сотрудника:
    std::cout << "Write the name of the new employee:\n";
    std::cin >> empolee_ptr->name;
    std::ofstream new_empolee ((empolee_ptr->name + ".txt"));
    new_empolee << "Name: " <<  empolee_ptr->name << std::endl;
    new_empolee << "Age: " <<  empolee_ptr->age << std::endl;
    new_empolee << "Experiance: " <<  empolee_ptr->experience << std::endl;
    new_empolee << "Rank: " <<  empolee_ptr->rank << std::endl;
    new_empolee.close();

    //Выводим размер структуры:
    std::cout << sizeof(*empolee_ptr) << "\n";

    // Выводим записанные в файл данные:
    std::ifstream cur_empolee((empolee_ptr->name + ".txt"));
    if (cur_empolee.is_open())
    {
        while (!cur_empolee.eof())
        {
            std::string buffer;
            getline(cur_empolee, buffer);
            if (buffer != "") // чтобы не выводились пустые строки
            {
                std::cout << buffer << "\n";
            }
        }
    }
}

// Временно для рандомной инициализации массива:
int get_random_number()
{
    std::random_device rd;   // non-deterministic generator
    std::mt19937 gen(rd());  // to seed mersenne twister.
    std::uniform_int_distribution<> dist(0,127); // distribute results between 1 and 6 inclusive.
    return dist(gen);
}
void r_init_array(std::array<int, ARRAY_SIZE> &my_array)
{
    for (auto &element : my_array)
    {
        element = get_random_number();
    }
}

void init_array(std::array<int, ARRAY_SIZE> &my_array)
{
    for (auto &element : my_array)
    {
        std::cin >> element;
    }
}

void print_array(std::array<int, ARRAY_SIZE>& my_array)
{
    for (const auto array : my_array)
    {
        std::cout << array << " ";
    }
    std::cout << "\n";
}

// Для вывода хода выполнения быстрой сортировки
void print_piace_array(std::array<int, ARRAY_SIZE>& my_array, int start, int end, int pivot_value)
{
    while (start <= end)
    {
        std::cout << my_array[start] << " ";
        start ++;
    }
    std::cout <<"Pivot value: " << pivot_value << "\n";
}

// Алгоритм быстрой сортировки
void quick_sort_array (std::array<int, ARRAY_SIZE> &my_array, int start, int end)
{
    int left_index {start};
    int right_index {end - 1};
    int pivot_value {my_array[((start + end)/2)]};
    
    /*
    std::cout <<"Start: " << left_index << " End: " << end << "\n";
    print_piace_array(my_array, left_index, right_index, pivot_value);
    */

    do
    {
        while (my_array[left_index] < pivot_value )
        {
            left_index ++;
        }

        while (my_array [right_index] > pivot_value)
        {
            right_index --;
        }
        
        if (left_index <= right_index) 
        {
            //std::cout <<"Left index value: " << my_array [left_index] << " Right index value: " << my_array [right_index] << "\n";
            SWAP_INT (my_array[left_index++], my_array[right_index--]);
        }
    }
    while (left_index <= right_index);

    if (right_index > start)
    {
        // std::cout << "\n Left \n";
        quick_sort_array(my_array, (start), (right_index + 1));
    }

    
    if (left_index < end)
    {
        // std::cout << "\n Right \n";
        quick_sort_array(my_array, (left_index), (end));
    }
}

/*
std::cout <<"Left index: " << left_index << " Right index: " << right_index << "\n";
std::cout <<"Left index value: " << my_array [left_index] << " Right index value: " << my_array [right_index] << "\n";
std::cout <<"Pivot value: " << pivot_value << "\n";
*/