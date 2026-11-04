// name: FUN_10052b7f4
// address: 10052b7f4

ulong FUN_10052b7f4(long *param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  
  (**(code **)(*param_1 + 0x20))();
  uVar1 = FUN_10015a861(param_1 + 1);
  if (uVar1 != 0) {
    uVar3 = 1;
    do {
      plVar2 = (long *)FUN_10015b12c(param_1 + 1,uVar3);
      if ((plVar2 != (long *)0x0) && (*plVar2 == param_2)) {
        uVar4 = CONCAT71((int7)((ulong)param_2 >> 8),1);
        goto LAB_10052b84c;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 <= uVar1);
  }
  uVar4 = 0;
LAB_10052b84c:
  (**(code **)(*param_1 + 0x28))(param_1);
  return uVar4 & 0xffffffff;
}

