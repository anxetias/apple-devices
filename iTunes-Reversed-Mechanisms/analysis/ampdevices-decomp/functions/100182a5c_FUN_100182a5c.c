// name: FUN_100182a5c
// address: 100182a5c

int FUN_100182a5c(long param_1,int param_2,undefined8 *param_3,undefined8 *param_4)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  char local_a0 [80];
  int local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  int local_34;
  
  local_34 = param_2;
  if (param_1 == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_100689d5c(uVar4);
    }
    FUN_1001782e9(0,0);
    iVar3 = -0x32;
  }
  else {
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = 0;
    }
    if (param_4 != (undefined8 *)0x0) {
      *param_4 = 0;
    }
    iVar3 = FUN_10017d406(param_1,0,local_a0,0);
    if (iVar3 != -0x80) {
      if (iVar3 == 0) {
        if (local_a0[0] == '\0') {
          uVar4 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar4,0x10);
          if (cVar2 != '\0') {
            FUN_100689c7a(uVar4);
          }
          FUN_1001782e9(0,0);
          iVar3 = -0x57f;
        }
        else {
          pcVar1 = *(code **)(*(long *)(param_1 + 0x10) + 0x100);
          if ((pcVar1 == (code *)0x0) || (iVar3 = (*pcVar1)(param_1,param_3,param_4), iVar3 == -4))
          {
            if (param_2 == 0) {
              iVar3 = FUN_1001829d6(param_1,&local_34,0,0);
              if (iVar3 == -0x80) {
                return -0x80;
              }
              param_2 = local_34;
              if (iVar3 != 0) {
                uVar4 = FUN_1001cc310();
                cVar2 = _os_log_type_enabled(uVar4,0x10);
                if (cVar2 == '\0') {
                  return iVar3;
                }
                FUN_100689c0e(iVar3,uVar4);
                return iVar3;
              }
            }
            local_48 = 0;
            uStack_40 = 0;
            local_50 = param_2;
            iVar3 = FUN_10017fdd8(param_1,0x7fff,0xc,FUN_100182c40);
            if (param_3 != (undefined8 *)0x0) {
              *param_3 = local_48;
            }
            if (param_4 != (undefined8 *)0x0) {
              *param_4 = uStack_40;
            }
          }
        }
      }
      else {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          FUN_100689cf0(iVar3,uVar4);
        }
      }
    }
  }
  return iVar3;
}

