// name: FUN_100182803
// address: 100182803

int FUN_100182803(long param_1,uint param_2,long *param_3,long *param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  char local_88 [32];
  long local_68;
  long local_60;
  uint local_34;
  
  local_34 = param_2;
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_100689b2c(uVar3);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
  }
  else {
    if (param_3 != (long *)0x0) {
      *param_3 = 0;
    }
    if (param_4 != (long *)0x0) {
      *param_4 = 0;
    }
    iVar2 = FUN_10017d406(param_1,0,local_88,0);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        if (local_88[0] == '\0') {
          if (param_3 != (long *)0x0) {
            *param_3 = local_60 + local_68;
          }
          if (param_4 == (long *)0x0) {
            iVar2 = 0;
          }
          else {
            if (param_2 == 0) {
              iVar2 = FUN_1001829d6(param_1,&local_34,0,0);
              if (iVar2 == -0x80) {
                return -0x80;
              }
              param_2 = local_34;
              if (iVar2 != 0) {
                uVar3 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar3,0x10);
                if (cVar1 == '\0') {
                  return iVar2;
                }
                FUN_100689a54(iVar2,uVar3);
                return iVar2;
              }
            }
            uVar5 = (ulong)param_2;
            uVar4 = (local_68 + uVar5) - 1;
            iVar2 = 0;
            *param_4 = (uVar4 - (((local_60 + uVar5) - 1) % uVar5 + uVar4 % uVar5)) +
                       local_60 + uVar5 + -1;
          }
        }
        else {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            FUN_1006899de(uVar3);
          }
          FUN_1001782e9(0,0);
          iVar2 = -0x516;
        }
      }
      else {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          FUN_100689ac0(iVar2,uVar3);
        }
      }
    }
  }
  return iVar2;
}

