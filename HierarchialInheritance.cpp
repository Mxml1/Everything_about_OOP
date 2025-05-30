#include"iostream"
using namespace std;
class CommunityMember{



};
class Employee : public CommunityMember{



};
class Student : public CommunityMember{


};
class Alumni : public CommunityMember{


};

class Faculty : public Employee{


};
class staff : public Employee{


};

class Adminstration : public Faculty{


};
class Teacher : public Faculty{


};

class AdminstratorTeacher : public Adminstration ,public Teacher{

    
};