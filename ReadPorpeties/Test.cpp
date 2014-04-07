#include "stdafx.h"
#include "ReadProperties.h"
#include <iostream>
using namespace std;
void main() { 
	ReadProperties prop("config.properties");  
	string info = prop.getValue("key2");
	cout<<info;   
}