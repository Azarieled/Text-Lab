// text-lab.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Text.h"

using std::wcout;
using std::endl;

int main()
{
  Text text({Row(L"string1"), Row(L"string2"), Row(L"string3")});
  wcout << L"Before" << endl << text << endl;
  text.CleanRow(1);
  wcout << L"After clean row" << endl << text << endl;
  text.RemoveRow(2);
  wcout << L"After remove row" << endl << text << endl;
  return 0;
}

