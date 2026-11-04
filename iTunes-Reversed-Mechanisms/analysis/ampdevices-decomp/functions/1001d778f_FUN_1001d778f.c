// name: FUN_1001d778f
// address: 1001d778f

int FUN_1001d778f(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_148 [16];
  undefined4 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  local_130 = 0;
  local_128 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  uStack_108 = 0;
  iVar2 = FUN_1001d40d0();
  if (iVar2 == 0) {
    iVar2 = FUN_1001d6276(local_148);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        local_138 = 0x416c6f63;
        local_50 = param_2;
        local_48 = param_3;
        local_40 = param_4;
        iVar2 = FUN_1001d62dc(param_1);
        if ((iVar2 != -0x80) && (iVar2 != 0)) {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            FUN_1006b55b6(iVar2,uVar3);
          }
        }
      }
      else {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          FUN_1006b5622(iVar2,uVar3);
        }
      }
    }
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006b554a(iVar2,uVar3);
    }
  }
  return iVar2;
}

