// name: FUN_1002e85fc
// address: 1002e85fc

undefined8 FUN_1002e85fc(long param_1,ulong param_2,char param_3)

{
  char cVar1;
  ulong uVar2;
  
  if ((((param_1 != 0) && (*(long *)(param_1 + 8) != 0)) &&
      (*(long *)(*(long *)(param_1 + 8) + 0x10) != 0)) && (*(int *)(param_1 + 0x3c) != 0x44574e4c))
  {
    uVar2 = param_2 & 0xffffffff;
    cVar1 = FUN_1002b0c30(param_1);
    if (cVar1 == '\0') {
      if (param_3 != '\0') {
        uVar2 = 0;
        cVar1 = FUN_1002e8670(*(undefined8 *)(param_1 + 8),param_2 & 0xff,0);
        if (cVar1 == '\0') {
          return 0;
        }
      }
      return CONCAT71((int7)(uVar2 >> 8),*(byte *)(param_1 + 0x45) < 2);
    }
  }
  return 0;
}

