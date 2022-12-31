#include <iostream>

class Student {
 protected:
  int rollNo;
  std::string name;
};

class Sports : virtual  public Student {
 protected:
  int sp1, sp2, sp3;
};

class Academic : virtual public Student {
 protected:
  int m1, m2, m3, m4, m5;
};

class Result : public Sports, public Academic {
 private:
  int totalMarks;

 public:
  void Total() {
    totalMarks = sp1 + sp2 + sp3 + m1 + m2 + m3 + m4 + m5;
  }

  void display() {
    std::cout << "Roll No: " << rollNo << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Total Marks: " << totalMarks << std::endl;
  }
};

int main() {
  Result student;
  student.rollNo = 123;
  student.name = "John";
  student.sp1 = 90;
  student.sp2 = 80;
  student.sp3 = 70;
  student.m1 = 95;
  student.m2 = 85;
  student.m3 = 75;
  student.m4 = 65;
  student.m5 = 55;

  student.Total();
  student.display();

  return 0;
}
