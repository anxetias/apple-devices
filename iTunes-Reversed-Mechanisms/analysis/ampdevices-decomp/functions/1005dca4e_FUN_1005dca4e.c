// name: FUN_1005dca4e
// address: 1005dca4e

void FUN_1005dca4e(undefined8 param_1,char param_2,char param_3)

{
  undefined8 *puVar1;
  int iVar2;
  
  for (iVar2 = FUN_10015a861(); iVar2 != 0; iVar2 = iVar2 + -1) {
    puVar1 = (undefined8 *)FUN_10015b12c(param_1,iVar2);
    if ((param_3 == '\0') || (*(char *)((long)puVar1 + 0x1d) != '\0')) {
      FUN_1001c64c1(*puVar1);
      *puVar1 = 0;
      puVar1[1] = 0;
      FUN_10015a8b0(param_1,1,iVar2);
    }
  }
  if (param_2 != '\0') {
    return;
  }
  FUN_10015a7f4(param_1);
  return;
}

