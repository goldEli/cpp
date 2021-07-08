//
//  main.cpp
//  testcpp
//
//  Created by 缪宇 on 2021/7/1.
//

/**
 1. 添加联系人
 2. 显示联系人
 3. 删除联系人
 4. 查找联系人
 5. 修改联系人
 6. 清空联系人
 7. 退出通讯录
 */

#include <iostream>
#include <stdlib.h>
#include <cmath>
using namespace std;
#include <string>
#define MAX 1000

struct Person
{
     string m_Name;
     // 男1女2
     int m_Sex;
     int m_Age;
     string m_Phone;
     string m_Addr;
};

struct AddressBooks
{
     struct Person persionArray[MAX];
     int m_Size;
};

void addPerson(AddressBooks *abs)
{
     string name;
     cout << "姓名：";
     cin >> name;
     int sex;
     cout << "男1女2" << endl;
     cout << "性别：";
     while (1)
     {
          if (!cin)
          {
               cin.clear();
               cin.ignore();
          }
          cin >> sex;

          if (sex == 1 || sex == 2)
          {
               break;
          }
          cout << "请输入正确的性别" << endl;
     }

     int age;
     cout << "年龄：";
     cin >> age;
     string phone;
     cout << "电话：";
     cin >> phone;
     string addr;
     cout << "地址：";
     cin >> addr;

     abs->persionArray[abs->m_Size].m_Name = name;
     abs->persionArray[abs->m_Size].m_Sex = sex;
     abs->persionArray[abs->m_Size].m_Age = age;
     abs->persionArray[abs->m_Size].m_Phone = phone;
     abs->persionArray[abs->m_Size].m_Addr = addr;
     abs->m_Size++;
}

int main(int argc, const char *argv[])
{

     AddressBooks abs;

     abs.m_Size = 0;

     while (1)
     {
          int num = 0;
          cout << "*****"
               << "***********"
               << "*******" << endl;
          cout << "*****"
               << "1. 添加联系人"
               << "*****" << endl;
          cout << "*****"
               << "2. 显示联系人"
               << "*****" << endl;
          cout << "*****"
               << "3. 删除联系人"
               << "*****" << endl;
          cout << "*****"
               << "4. 查找联系人"
               << "*****" << endl;
          cout << "*****"
               << "5. 修改联系人"
               << "*****" << endl;
          cout << "*****"
               << "6. 清空联系人"
               << "*****" << endl;
          cout << "*****"
               << "0. 退出通讯录"
               << "*****" << endl;
          cout << "*****"
               << "***********"
               << "*******" << endl;
          cout << "请选择: ";
          cin >> num;
          switch (num)
          {
          case 1:
               addPerson(&abs);
               break;
          case 0:
               cout << "欢迎下次使用" << endl;
               return 0;
          default:
               break;
          }
          system("read -n 1 -s -p \"Press any key to continue...\"");
          system("cls");
          system("clear");
     }

     return 0;
}
