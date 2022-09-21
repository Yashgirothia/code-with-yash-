//accessing private variable with member function

#include<iostream.h>
#include<conio.h>
class a
{
private :
int salary;
public :
int setsalary( int s)
{
cout<<"Salary =" <<s;
}
int getsalary()
{
return salary;
}
};
void main()
{
clrscr();
a c1;
c1.setsalary(10000);
getch();
}
