// name: FUN_100177d5c
// address: 100177d5c

void FUN_100177d5c(undefined4 *param_1)

{
  double dVar1;
  
  dVar1 = (double)_CFAbsoluteTimeGetCurrent();
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (int)(long)(dVar1 + *(double *)PTR__kCFAbsoluteTimeIntervalSince1904_10082e008);
  }
  return;
}

