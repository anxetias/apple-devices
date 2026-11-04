// name: FUN_1004ec20c
// address: 1004ec20c

undefined8 FUN_1004ec20c(long param_1,long param_2,char param_3,uint *param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  
  if (param_2 == 0) {
    return 6;
  }
  if (param_2 != 1) {
    if ((param_4 == (uint *)0x0) &&
       (param_4 = (uint *)(param_1 + 0x15430), *(char *)(param_1 + 0x15428) == '\0')) {
      FUN_10031e1d6(*(undefined8 *)(param_1 + 0x30),param_4);
      *(undefined1 *)(param_1 + 0x15428) = 1;
    }
    uVar1 = *param_4;
    if ((ulong)uVar1 == 0) {
      if (param_3 == '\0') {
        return 6;
      }
      lVar3 = 0;
    }
    else {
      uVar2 = 0;
      do {
        if (*(long *)(param_4 + uVar2 * 2 + 2) == param_2) {
          return 0;
        }
        uVar2 = uVar2 + 1;
      } while (uVar1 != uVar2);
      if (param_3 == '\0') {
        return 6;
      }
      lVar3 = 1;
      if (uVar1 != 1) {
        return 8;
      }
    }
    *(long *)(param_4 + lVar3 * 2 + 2) = param_2;
    *param_4 = uVar1 + 1;
  }
  return 0;
}

