// name: FUN_1006277cf
// address: 1006277cf

void FUN_1006277cf(undefined8 *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_1001d30c7(*param_1);
  *(undefined4 *)(param_1 + 1) = uVar2;
  cVar1 = FUN_1001e96b8((long)param_1 + 0xc);
  if (cVar1 != '\0') {
    FUN_1001e9809((long)param_1 + 0xc);
    return;
  }
  cVar1 = FUN_1001e8dbb(param_1 + 4);
  if (cVar1 != '\0') {
    FUN_1001e8f15(param_1 + 4);
    return;
  }
  return;
}

