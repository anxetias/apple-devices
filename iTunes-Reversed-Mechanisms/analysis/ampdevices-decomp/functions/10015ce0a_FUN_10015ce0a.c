// name: FUN_10015ce0a
// address: 10015ce0a

int FUN_10015ce0a(long *param_1,long *param_2,uint *param_3,undefined8 param_4,undefined8 param_5)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long local_50;
  uint *local_48;
  long local_40;
  uint local_38;
  uint local_34;
  
  if (param_1 == (long *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_10066cc7d(uVar4);
    }
  }
  else if (param_2 == (long *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_10066cc07(uVar4);
    }
  }
  else {
    if (param_3 != (uint *)0x0) {
      *param_2 = 0;
      *param_3 = 0;
      if (*param_1 == 0) {
        return 0;
      }
      uVar1 = **(uint **)(*param_1 + 0x20);
      local_38 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
      if ((int)local_38 < 1) {
        return 0;
      }
      uVar5 = (ulong)local_38;
      local_48 = param_3;
      local_50 = FUN_1001c63e1(uVar5);
      if (local_50 == 0) {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          FUN_10066cb1b(uVar4);
        }
        FUN_1001782e9(0,0);
        return -0x6c;
      }
      local_40 = local_50;
      iVar3 = FUN_10015d000(*param_1,&local_50,uVar5 + local_50,&local_34,param_4,param_5);
      if (iVar3 != -0x80) {
        if (iVar3 == 0) {
          if (local_38 != local_34) {
            uVar4 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar4,0x10);
            if (cVar2 != '\0') {
              FUN_10066ca39(uVar4);
            }
            FUN_1001782e9(0,0);
            local_38 = local_34;
          }
          *param_2 = local_40;
          *local_48 = local_38;
          return 0;
        }
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          FUN_10066caaf(iVar3,uVar4);
        }
      }
      FUN_1001c64c1(local_40);
      return iVar3;
    }
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_10066cb91(uVar4);
    }
  }
  FUN_1001782e9(0,0);
  return -0x32;
}

