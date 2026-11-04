// name: FUN_10010a5ac
// address: 10010a5ac

void FUN_10010a5ac(undefined8 param_1,int param_2,int *param_3,int *param_4,char param_5,
                  uint param_6,int param_7,int param_8,int param_9)

{
  ulong uVar1;
  int iVar2;
  int *piVar3;
  ulong uVar4;
  int iVar5;
  
  uVar1 = (ulong)param_6;
  if (param_2 == 1) {
    if (param_5 == '\0') {
      iVar2 = *param_3;
      iVar5 = param_9;
      if (iVar2 < param_9) {
        iVar5 = iVar2;
      }
      if (iVar2 < param_8) {
        iVar5 = param_8;
      }
      *param_3 = iVar5;
      if (1 < (int)param_6) {
        iVar2 = *param_3;
        uVar4 = 1;
        do {
          iVar5 = iVar2 + param_3[uVar4];
          iVar2 = param_9;
          if (iVar5 < param_9) {
            iVar2 = iVar5;
          }
          if (iVar5 < param_8) {
            iVar2 = param_8;
          }
          param_3[uVar4] = iVar2;
          uVar4 = uVar4 + 1;
        } while (uVar1 != uVar4);
      }
    }
    else {
      if ((int)param_6 < 1) {
        return;
      }
      uVar4 = 0;
      do {
        iVar5 = param_3[uVar4] + *param_4;
        iVar2 = iVar5;
        if (param_9 <= iVar5) {
          iVar2 = param_9;
        }
        if (iVar5 < param_8) {
          iVar2 = param_8;
        }
        param_3[uVar4] = iVar2;
        uVar4 = uVar4 + 1;
        param_4 = param_4 + param_7;
      } while (uVar1 != uVar4);
    }
  }
  else {
    if ((int)param_6 < 1) {
      return;
    }
    ___bzero(param_3,uVar1 << 2);
  }
  if (0 < (int)param_6 && param_7 == 2) {
    uVar1 = (ulong)(param_6 * 2);
    iVar2 = param_6 * 2 + 1;
    piVar3 = param_3 + (ulong)(param_6 * 2 - 2) + 1;
    do {
      uVar1 = uVar1 - 1;
      *piVar3 = param_3[uVar1 >> 1 & 0x7fffffff];
      iVar2 = iVar2 + -1;
      piVar3 = piVar3 + -1;
    } while (2 < iVar2);
  }
  return;
}

