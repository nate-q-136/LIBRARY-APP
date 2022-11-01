#pragma once
#include "StudentBorrow.h"
#include<vector>
#include<fstream>
#include<string.h>
extern StudentBorrow Data_Of_Gui[100];
extern string IdStudentBorrow;
void Load_Data_Of_Library();
void Save_Data_Of_Library();
string get_Correct_String(string& temp);
void Load_Data_Of_Borrowed_Book();
void Save_Data_Of_Borrowed_Book();