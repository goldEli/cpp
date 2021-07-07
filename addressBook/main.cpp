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
     int m_Sex;
     int m_Age;
     string m_Phone;
     string m_Addr;
};

struct AddressBook
{
     struct Person persionArray[MAX];
     int m_Size;
};

int main(int argc, const char *argv[])
{

     while (1)
     {
          system("cls");
          system("clear");
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
               cout << num << endl;
               system("read -n 1 -s -p \"Press any key to continue...\"");
               break;
          case 0:
               cout << "欢迎下次使用" << endl;
               return 0;
          default:
               break;
          }
     }

     system("read -n 1 -s -p \"Press any key to continue...\"");

     return 0;
}
