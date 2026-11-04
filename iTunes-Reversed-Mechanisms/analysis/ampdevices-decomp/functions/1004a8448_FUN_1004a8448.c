// name: FUN_1004a8448
// address: 1004a8448

void FUN_1004a8448(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  
  FUN_1001e9de0(param_1 + 0x38);
  lVar4 = param_1 + 8;
  uVar1 = FUN_10015a861(lVar4);
  if (uVar1 != 0) {
    uVar3 = 1;
    do {
      puVar2 = (undefined8 *)FUN_10015b12c(lVar4,uVar3);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = 0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 <= uVar1);
  }
  FUN_10015a8b0(lVar4,uVar1,1);
  FUN_1001e9eb9(param_1 + 0x38);
  return;
}

