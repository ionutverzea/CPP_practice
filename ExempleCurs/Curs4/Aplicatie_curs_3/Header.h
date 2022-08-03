#pragma once

#ifndef LibraryEXPORT
  #define LibraryAPI __declspec(dllexport)
#else
  #define LibraryAPI __declspec(dllimport)
#endif


int LibraryAPI sum(int a, int b);

// this method returns sum of positive numbers
bool LibraryAPI sumB(const int& a, const int& b, int& result);
