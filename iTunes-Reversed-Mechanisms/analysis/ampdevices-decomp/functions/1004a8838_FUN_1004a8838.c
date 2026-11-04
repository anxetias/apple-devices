// name: FUN_1004a8838
// address: 1004a8838

undefined8 FUN_1004a8838(long param_1,int param_2,char param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  
  FUN_1001e9de0(param_1 + 0x38);
  uVar1 = FUN_10015a861(param_1 + 8);
  if (uVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = 1;
    uVar4 = 0;
    do {
      puVar2 = (undefined8 *)FUN_10015b12c(param_1 + 8,uVar3);
      if ((puVar2 != (undefined8 *)0x0) && (*(int *)(puVar2 + 1) == param_2)) {
        uVar4 = *puVar2;
        break;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 <= uVar1);
  }
  if (param_3 != '\0') {
    FUN_1004a88cf(uVar4);
  }
  FUN_1001e9eb9(param_1 + 0x38);
  return uVar4;
}

