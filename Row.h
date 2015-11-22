#pragma once
class Row : public std::wstring
{
public:
  Row();
  Row(const Row &row);
  explicit Row(const std::wstring &row);
  ~Row();
};

