// name: FUN_1001c5333
// address: 1001c5333

int FUN_1001c5333(int *param_1,ulong param_2,long param_3,ulong param_4,long *param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *local_60;
  long local_58;
  long local_50;
  ulong local_48;
  ulong local_40;
  undefined8 local_38;
  
  if (param_5 != (long *)0x0) {
    *param_5 = 0;
  }
  if ((param_1 == (int *)0x0) || (*param_1 != 0x6d656d62)) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006a852e(uVar4);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
  }
  else if (param_4 == 0) {
    iVar2 = 0;
  }
  else {
    local_50 = param_3;
    iVar2 = FUN_1001c4c19(param_1);
    if (iVar2 == 0) {
      local_40 = *(ulong *)(param_1 + 4);
      uVar6 = local_40 - param_2;
      if (local_40 < param_2) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          FUN_1006a84b8(uVar4);
        }
        FUN_1001782e9(0,0);
        iVar3 = -0x32;
        local_40 = 0;
        local_38._0_1_ = '\0';
      }
      else {
        local_48 = param_4 + param_2;
        local_38 = CONCAT71((int7)(local_40 >> 8),local_40 < local_48);
        iVar3 = FUN_1001c5577(param_1,param_2,&local_60,&local_58);
        if (iVar3 == 0) {
          if (local_40 < local_48) {
            param_4 = uVar6;
          }
          if (param_4 == 0) {
            local_40 = 0;
LAB_1001c5524:
            iVar3 = 0;
          }
          else {
            local_40 = 0;
            lVar5 = local_50;
            plVar7 = local_60;
            do {
              uVar6 = plVar7[3] - local_58;
              if (uVar6 != 0) {
                if (param_4 < uVar6) {
                  uVar6 = param_4;
                }
                FUN_1001c631b(local_58 + plVar7[2],lVar5,uVar6);
                local_40 = local_40 + uVar6;
                param_4 = param_4 - uVar6;
                if (param_4 == 0) goto LAB_1001c5524;
                lVar5 = lVar5 + uVar6;
              }
              plVar7 = (long *)*plVar7;
              local_58 = 0;
            } while (plVar7 != (long *)0x0);
            uVar4 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            if (cVar1 != '\0') {
              FUN_1006a8442(uVar4);
            }
            FUN_1001782e9(0,0);
            iVar3 = -0x24;
          }
        }
        else {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            FUN_1006a83d6(iVar3,uVar4);
          }
          local_40 = 0;
        }
      }
      iVar2 = -0x27;
      if (iVar3 != 0) {
        iVar2 = iVar3;
      }
      if ((char)local_38 == '\0') {
        iVar2 = iVar3;
      }
      if (param_5 != (long *)0x0) {
        *param_5 = local_40;
      }
    }
    else {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        FUN_1006a836a(iVar2,uVar4);
      }
    }
  }
  return iVar2;
}

