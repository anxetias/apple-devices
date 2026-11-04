// name: FUN_1001a8c88
// address: 1001a8c88

long FUN_1001a8c88(long *param_1)

{
  double dVar1;
  
  if (*param_1 != 0) {
    dVar1 = (double)_CFDateGetAbsoluteTime();
    return (long)(dVar1 + *(double *)PTR__kCFAbsoluteTimeIntervalSince1970_10082e010) * 1000;
  }
  return 0;
}

