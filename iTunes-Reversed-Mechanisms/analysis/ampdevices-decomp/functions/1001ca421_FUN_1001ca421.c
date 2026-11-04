// name: FUN_1001ca421
// address: 1001ca421

int FUN_1001ca421(long param_1,long param_2,int param_3,int *param_4)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  long in_RAX;
  undefined8 uVar4;
  ulong uVar5;
  long local_38;
  
  if (param_1 == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_1006acd9e(uVar4);
    }
  }
  else if (param_2 == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_1006acd28(uVar4);
    }
  }
  else {
    if (param_4 != (int *)0x0) {
      *param_4 = 0;
      local_38 = in_RAX;
      iVar3 = FUN_10015d28d(param_1,0x6e616d65,&local_38);
      if (iVar3 == -0x80) {
        return -0x80;
      }
      if (iVar3 != 0) {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 == '\0') {
          return iVar3;
        }
        FUN_1006acc46(iVar3,uVar4);
        return iVar3;
      }
      if (local_38 == 0) {
        return 0;
      }
      uVar1 = **(uint **)(local_38 + 0x20);
      uVar5 = (long)(int)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                         uVar1 << 0x18) - 0xc;
      if ((ulong)(long)param_3 <= uVar5) {
        uVar5 = (long)param_3;
      }
      iVar3 = (int)uVar5;
      if (iVar3 == 0) {
        return 0;
      }
      FUN_1001c631b(*(uint **)(local_38 + 0x20) + 3,param_2,(long)iVar3);
      *param_4 = iVar3;
      return 0;
    }
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_1006accb2(uVar4);
    }
  }
  FUN_1001782e9(0,0);
  return -0x32;
}

