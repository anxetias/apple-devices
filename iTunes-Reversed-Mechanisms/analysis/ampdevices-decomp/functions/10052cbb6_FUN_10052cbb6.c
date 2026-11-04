// name: FUN_10052cbb6
// address: 10052cbb6

void FUN_10052cbb6(long param_1)

{
  long lVar1;
  char cVar2;
  
  lVar1 = param_1 + 0x550;
  cVar2 = FUN_1001e9c23(lVar1);
  if (cVar2 != '\0') {
    FUN_1001e9de0(lVar1);
  }
  FUN_1001c64c1(*(undefined8 *)(param_1 + 0x598));
  *(undefined8 *)(param_1 + 0x598) = 0;
  *(undefined8 *)(param_1 + 0x508) = 0;
  *(undefined8 *)(param_1 + 0x510) = 0;
  *(undefined8 *)(param_1 + 0x5a8) = 0;
  *(undefined8 *)(param_1 + 0x5b0) = 0;
  cVar2 = FUN_1001e9c23(lVar1);
  if (cVar2 != '\0') {
    FUN_1001e9eb9(lVar1);
    return;
  }
  return;
}

