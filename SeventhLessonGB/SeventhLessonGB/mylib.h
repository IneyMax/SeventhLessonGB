#pragma once
#include <array>
#include <string>
#define ARRAY_SIZE 9

//ДЗ 7 п.1,5:
namespace float_array
{
    void array_init(std::array<float, 15> & cur_array);
    void array_print(std::array<float, 15>& cur_array);
    void array_check(std::array<float, 15> & cur_array);
}

//ДЗ 7 п.2:
void define_check();


//ДЗ 7 п.4:
#pragma pack(push, 1)
struct employee
{
    int age;
    int experience;
    char rank;
    std::string name;
};
#pragma pack(pop)

void create_new_empolee();

//ДЗ 7 п.3:
void init_array(std::array<int, ARRAY_SIZE> &my_array);
void print_array(std::array<int, ARRAY_SIZE>& my_array);
void quick_sort_array (std::array<int, ARRAY_SIZE> &my_array, int size_array);





