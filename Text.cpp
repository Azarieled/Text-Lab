#include "stdafx.h"
#include "Text.h"


Text::Text()
{
}


Text::Text(const Text& prototype)
{
  rows = prototype.rows;
}


Text::Text(const std::vector<Row> rows)
{
  this->rows = rows;
}


Text::~Text()
{
}


void Text::CleanRow(size_t i)
{
  rows[i] = Row(L"");
}


void Text::RemoveRow(size_t i)
{
  rows.erase(rows.begin() + i);
}


Text Text::operator+(const Text& other) const noexcept
{
  auto result = *this;
  result.rows.insert(result.rows.end(), other.rows.begin(), other.rows.end());
  return result;
}


Text &Text::operator=(const Text& text) noexcept
{
  return *this;
}

std::wostream& operator<<(std::wostream& os, const Text& text)
{
  for (size_t i = 0; i < text.rows.size(); i++)
  {
    os << text.rows[i] << std::endl;
  }
  return os;
}
