#pragma once
#include "Row.h"

class Text
{
  std::vector<Row> rows;
public:
  Text();
  Text(const Text& prototype);
  explicit Text(const std::vector<Row> rows);
  ~Text();

  void CleanRow(size_t i);
  void RemoveRow(size_t i);

  Text operator+(const Text &text) const noexcept;
  Text &operator=(const Text &text) noexcept;

  friend std::wostream& operator<<(std::wostream& os, const Text& text);
};

