// name: FUN_100177cff
// address: 100177cff

void FUN_100177cff(undefined4 *param_1)

{
  double dVar1;
  undefined4 local_1c;
  
  dVar1 = (double)_CFAbsoluteTimeGetCurrent();
  FUN_100177f1b((long)(dVar1 + *(double *)PTR__kCFAbsoluteTimeIntervalSince1904_10082e008),&local_1c
               );
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = local_1c;
  }
  return;
}

