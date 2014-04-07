#pragma  once 
#include "stdafx.h"
#include <string>
#include <iostream>
#define COMMENT_CHAR '#'//注释符
using namespace std;

class ReadProperties
{
private :
	ifstream *infile;
public:
	//参数filename，配置文件的名字
	ReadProperties(const string & filename);
	//参数name，配置项的名字
	//返回值，对应配置项name的value值
	string getValue(const string & name);
};