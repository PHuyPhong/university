#include "lecturer.h"
#include "student.h"
int main(){
    Person *stu= new Student("Marry",22,"woman","Electronics1-K53",20080001);
    Person *per= new Person("Phong",22,"man");
    Person *lec= new Lecturer("Michel",22,"man","ElectronicsEngineering",123456789);
    per->display();
    stu->display();
    lec->display();
    delete per;delete stu;delete lec;
}