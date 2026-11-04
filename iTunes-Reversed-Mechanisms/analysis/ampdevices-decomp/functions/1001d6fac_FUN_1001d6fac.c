// name: FUN_1001d6fac
// address: 1001d6fac

int FUN_1001d6fac(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_130 [16];
  undefined4 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  iVar2 = FUN_1001d40d0();
  if (iVar2 == 0) {
    iVar2 = FUN_1001d6276(local_130);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        local_120 = 0x4b696c6c;
        iVar2 = FUN_1001d62dc(param_1);
        if ((iVar2 != -0x80) && (iVar2 != 0)) {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            FUN_1006b4d34(iVar2,uVar3);
          }
        }
      }
      else {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          FUN_1006b4da0(iVar2,uVar3);
        }
      }
    }
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006b4cc8(iVar2,uVar3);
    }
  }
  return iVar2;
}

