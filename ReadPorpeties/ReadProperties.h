#pragma  once 
#include "stdafx.h"
#include <string>
#include <iostream>
#define COMMENT_CHAR '#'//ע�ͷ�
using namespace std;

class ReadProperties
{
private :
	ifstream *infile;
public:
	//����filename�������ļ�������
	ReadProperties(const string & filename);
	//����name�������������
	//����ֵ����Ӧ������name��valueֵ
	string getValue(const string & name);
};