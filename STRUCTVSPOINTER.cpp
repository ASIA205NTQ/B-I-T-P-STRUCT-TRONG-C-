#include <iostream>
#include <string>
using namespace std;
// Struct Student
struct Student
{
    int age; // Trường age kiểu int
    string name; // Trường name kiểu string

    Student(int _age, string _name) // Hàm khởi tạo
    {
        age = _age; // Khởi tạo giá trị cho age
        name = _name; // Khởi tạo giá trị cho name
    }
};

int main()
{
    Student student(21, "Long"); // Khởi tạo đối tượng student
    Student *student_ptr = &student; // Tạo con trỏ student_ptr
    cout << student_ptr->name<<student_ptr->age; // In ra tên của đối tượng mà student_ptr đang trỏ đến
    return 0;
}
