// name: FUN_1002d8000
// address: 1002d8000

undefined8 FUN_1002d8000(long param_1,ulong param_2,ulong param_3,ulong param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  if (param_2 < 2) {
    return 1;
  }
  if (param_5 == (uint *)0x0) {
    if (*(char *)(param_1 + 0x15429) == '\0') {
      FUN_1002d7d5c(param_1,param_1 + 0x15448);
      *(undefined1 *)(param_1 + 0x15429) = 1;
    }
    param_5 = (uint *)(param_1 + 0x15448);
  }
  uVar1 = *param_5;
  uVar3 = (ulong)uVar1;
  if (uVar3 == 0) {
    if ((param_4 & 0xff0000) == 0) goto LAB_1002d80d0;
    if (param_3 == 0) {
      param_3 = param_2;
    }
  }
  else {
    lVar5 = 0;
    do {
      if (*(ulong *)((long)param_5 + lVar5 + 8) == param_2) {
        if ((param_4 & 0xff0000) == 0) {
          return 1;
        }
        if (param_3 != 0) {
          param_2 = param_3;
        }
        uVar4 = 0;
        do {
          if (*(ulong *)(param_5 + uVar4 * 2 + 0xca) == param_2) {
            return 1;
          }
          uVar4 = uVar4 + 1;
        } while (uVar3 != uVar4);
        uVar1 = param_5[1];
        if (4 < (ulong)uVar1) {
          return 0;
        }
        *(ulong *)(param_5 + (ulong)uVar1 * 2 + 0xca) = param_2;
        param_5[1] = uVar1 + 1;
        return 1;
      }
      lVar5 = lVar5 + 0x10;
    } while (uVar3 << 4 != lVar5);
    if (0x31 < uVar1) {
      return 0;
    }
    if ((param_4 & 0xff0000) == 0) goto LAB_1002d80d0;
    if (param_3 == 0) {
      param_3 = param_2;
    }
    uVar4 = 0;
    do {
      if (*(ulong *)(param_5 + uVar4 * 2 + 0xca) == param_3) goto LAB_1002d80d0;
      uVar4 = uVar4 + 1;
    } while (uVar3 != uVar4);
  }
  uVar2 = param_5[1];
  if (4 < (ulong)uVar2) {
    return 0;
  }
  *(ulong *)(param_5 + (ulong)uVar2 * 2 + 0xca) = param_3;
  param_5[1] = uVar2 + 1;
LAB_1002d80d0:
  *(ulong *)(param_5 + uVar3 * 4 + 2) = param_2;
  *(undefined1 *)(param_5 + uVar3 * 4 + 4) = 0;
  *param_5 = uVar1 + 1;
  return 1;
}

