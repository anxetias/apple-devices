// name: FUN_1001aab96
// address: 1001aab96

long * FUN_1001aab96(long *param_1)

{
  char cVar1;
  long lVar2;
  undefined1 local_40 [16];
  undefined8 local_30;
  long local_28;
  undefined1 local_20 [8];
  undefined1 local_18 [8];
  
  FUN_1001aab60(local_40);
  FUN_1001aaef6(local_18,*(undefined8 *)PTR__kCFErrorUnderlyingErrorKey_10082e0a8);
  FUN_1001a7bac(local_20,local_18);
  local_30 = 0;
  local_28 = 0;
  cVar1 = FUN_1001a93ba(local_40,local_20);
  lVar2 = local_28;
  if (cVar1 == '\0') {
    lVar2 = 0;
  }
  *param_1 = lVar2;
  if (lVar2 != 0) {
    _CFRetain();
  }
  FUN_1001aaab6(&local_28);
  FUN_1001aaab6(&local_30);
  FUN_1001ab240(local_20);
  FUN_1001ab006(local_18);
  FUN_1001a8fac(local_40);
  return param_1;
}

