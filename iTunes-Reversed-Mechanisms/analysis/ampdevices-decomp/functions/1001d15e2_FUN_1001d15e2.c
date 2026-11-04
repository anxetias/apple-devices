// name: FUN_1001d15e2
// address: 1001d15e2

int FUN_1001d15e2(long param_1,int param_2,int param_3,undefined8 param_4,uint param_5,uint *param_6
                 )

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  int local_70;
  int local_6c;
  char local_68;
  undefined8 local_58;
  uint local_50;
  undefined8 local_48;
  ulong local_40;
  int local_38;
  uint local_34;
  
  local_38 = param_3;
  local_34 = param_5;
  if (param_6 == (uint *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006b179e(uVar3);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
  }
  else {
    *param_6 = 0xffffffff;
    iVar2 = FUN_1001cf1e5();
    if (iVar2 == 0) {
      local_48 = param_4;
      FUN_1001cf3f5(param_1);
      if (*(int *)(param_1 + 0x10) != 0) {
        local_40 = (ulong)local_34;
        uVar4 = 0;
        do {
          iVar2 = FUN_1001cf495(param_1,uVar4,&local_70);
          if (iVar2 != 0) {
            if (iVar2 != -0x80) {
              uVar3 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar3,0x10);
              if (cVar1 != '\0') {
                FUN_1006b1732(iVar2,uVar3);
              }
            }
            FUN_1001cf778(param_1);
            return iVar2;
          }
          if ((((local_68 == '\0') && (local_6c == param_2)) && (local_70 == local_38)) &&
             ((local_50 == local_34 &&
              (cVar1 = FUN_1001c5630(local_58,local_48,local_40), cVar1 != '\0')))) {
            *param_6 = uVar4;
            break;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < *(uint *)(param_1 + 0x10));
      }
      FUN_1001cf778(param_1);
      iVar2 = -0x7ea;
      if (*param_6 < *(uint *)(param_1 + 0x10)) {
        iVar2 = 0;
      }
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_1006b16c6(iVar2,uVar3);
      }
    }
  }
  return iVar2;
}

