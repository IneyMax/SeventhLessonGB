#include <iostream>

#include "mylib.h"


/*
3.
Реализуйте перестановку
элементов как макрокоманду SwapINT(a, b), вызывайте ее из
цикла сортировки. (Уточнить, подходит ли команда std::swap?)
*/

int main()
{
    //ДЗ 7 п.1,5:
    std::array<float, 15> f_array;
    float_array::array_init(f_array);
    float_array::array_print(f_array);
    float_array::array_check(f_array);

    //ДЗ 7 п.2:
    define_check();

    //ДЗ 7 п.4:
    create_new_empolee();

    //ДЗ 7 п.3:
    std::array<int, ARRAY_SIZE> my_array;
    r_init_array(my_array); // Для инициализации массива случайными числами
    //init_array(my_array);
    print_array(my_array);
    quick_sort_array(my_array, 0, ARRAY_SIZE);
    print_array(my_array);
    
    
    return 0;
}
