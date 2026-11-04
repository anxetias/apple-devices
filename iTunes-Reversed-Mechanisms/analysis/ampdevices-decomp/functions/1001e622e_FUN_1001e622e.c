// name: FUN_1001e622e
// address: 1001e622e

void FUN_1001e622e(short *param_1,uint param_2,int param_3,undefined2 *param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  
  if (param_1 == (short *)0x0 || param_4 == (undefined2 *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006bf856(uVar3);
    }
  }
  else {
    if (0 < param_3) {
      iVar6 = 0;
      if ((param_3 != 1 && 0 < (int)param_2) && *param_1 != 0) {
        uVar5 = 1;
        do {
          iVar2 = FUN_1001e39bb(param_1[uVar5 - 1]);
          if (iVar2 != 4) {
            lVar4 = (long)iVar6;
            iVar6 = iVar6 + 1;
            param_4[lVar4 + 1] = param_1[uVar5 - 1];
          }
        } while (((*param_1 != 0) && (uVar5 < param_2)) && (uVar5 = uVar5 + 1, iVar6 < param_3 + -1)
                );
      }
      *param_4 = (short)iVar6;
      return;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006bf8cc(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return;
}

