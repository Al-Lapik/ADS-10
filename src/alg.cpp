// Copyright 2022 NNTU-CS
#include  <iostream>
#include  <fstream>
#include  <locale>
#include  <cstdlib>
#include  "tree.h"

std::vector<char> getPerm(const Tree& tree, int n) {
  std::string origin = tree[n - 1];
  std::vector<char> perm;
  int i = 0;
  while (i < origin.length()) {
    perm.push_back(origin[i]);
    i++;
  }
  return perm;
}
