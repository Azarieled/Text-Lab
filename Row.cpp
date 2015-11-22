#include "stdafx.h"
#include "Row.h"

Row::Row() : std::wstring()
{
}

Row::Row(const Row &row) : std::wstring(row)
{
}

Row::Row(const std::wstring &row) : std::wstring(row)
{
}

Row::~Row()
{
}
