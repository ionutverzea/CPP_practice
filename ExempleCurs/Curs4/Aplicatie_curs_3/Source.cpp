int sum(int a, int b)
{
  int result = a + b;

  return result;
  // return (a + b); // one way to do the sum
}

bool sumB(const int& a, const int& b, int& result)
{
  if (a > 0 && b > 0)
  {
    result = a + b;
  }
  else
  {
    result = -1;
    return false;
  }

  return true;
}