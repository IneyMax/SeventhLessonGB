#include <iostream>

#include "mylib.h"


/*
3.
Задайте массив типа int.
Пусть его размер задается через
директиву препроцессора #define.
Инициализируйте его через
ввод с клавиатуры.
Напишите для него свою функцию
сортировки
Реализуйте перестановку
элементов как макрокоманду SwapINT(a, b), вызывайте ее из
цикла сортировки.
*/

int main()
{
    
    std::array<float, 15> f_array;
    float_array::array_init(f_array);
    float_array::array_print(f_array);
    float_array::array_check(f_array);
    
    define_check();

    create_new_empolee();
    

    /* TODO quick_sort
    std::array<int, ARRAY_SIZE> my_array;
    init_array(my_array);
    print_array(my_array);
    quick_sort_array(my_array, ARRAY_SIZE);
    print_array(my_array);
    */
    
    return 0;
}
