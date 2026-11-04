// name: FUN_1001c509c
// address: 1001c509c

int FUN_1001c509c(int *param_1,ulong param_2,long param_3,ulong param_4,ulong *param_5,char param_6)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *local_50;
  long local_48;
  long local_40;
  ulong local_38;
  
  if (param_5 != (ulong *)0x0) {
    *param_5 = 0;
  }
  if ((param_1 == (int *)0x0) || (*param_1 != 0x6d656d62)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006a82f4(uVar3);
    }
    FUN_1001782e9(0,0);
    return -0x32;
  }
  if (param_4 == 0) {
    return 0;
  }
  if (((param_6 == '\0') || (*(long *)(param_1 + 8) == 0)) ||
     (lVar5 = *(long *)(param_1 + 10),
     0x1ffff < lVar5 + param_4 || *(long *)(param_1 + 4) + lVar5 != param_2)) {
    local_40 = param_3;
    iVar2 = FUN_1001c4c19(param_1);
    if (iVar2 != 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 == '\0') {
        return iVar2;
      }
      FUN_1006a80c4(iVar2,uVar3);
      return iVar2;
    }
    if (*(ulong *)(param_1 + 4) < param_2) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_1006a827e(uVar3);
      }
      param_4 = 0;
      FUN_1001782e9(0,0);
      iVar2 = -0x32;
    }
    else {
      if ((*(ulong *)(param_1 + 4) < param_4 + param_2) &&
         (iVar2 = FUN_1001c4f51(param_1), iVar2 != 0)) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          FUN_1006a8130(iVar2,uVar3);
        }
      }
      else {
        iVar2 = FUN_1001c5577(param_1,param_2,&local_50,&local_48);
        if (iVar2 != -0x80) {
          if (iVar2 == 0) {
            local_38 = 0;
            plVar4 = local_50;
            lVar5 = local_40;
            uVar6 = param_4;
            do {
              uVar7 = plVar4[3] - local_48;
              if (uVar6 < (ulong)(plVar4[3] - local_48)) {
                uVar7 = uVar6;
              }
              if (uVar7 != 0) {
                FUN_1001c631b(lVar5,local_48 + plVar4[2],uVar7);
                param_4 = local_38 + uVar7;
                uVar6 = uVar6 - uVar7;
                if (uVar6 == 0) {
                  iVar2 = 0;
                  goto LAB_1001c52fe;
                }
                lVar5 = lVar5 + uVar7;
                local_38 = param_4;
              }
              plVar4 = (long *)*plVar4;
              local_48 = 0;
            } while (plVar4 != (long *)0x0);
            uVar3 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar3,0x10);
            if (cVar1 != '\0') {
              FUN_1006a819c(uVar3);
            }
            FUN_1001782e9(0,0);
            iVar2 = -0x24;
            param_4 = local_38;
            goto LAB_1001c52fe;
          }
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            FUN_1006a8212(iVar2,uVar3);
          }
        }
      }
      param_4 = 0;
    }
  }
  else {
    FUN_1001c631b(param_3,*(long *)(param_1 + 8) + lVar5,param_4);
    *(ulong *)(param_1 + 10) = *(long *)(param_1 + 10) + param_4;
    iVar2 = 0;
  }
LAB_1001c52fe:
  if (param_5 != (ulong *)0x0) {
    *param_5 = param_4;
  }
  return iVar2;
}

