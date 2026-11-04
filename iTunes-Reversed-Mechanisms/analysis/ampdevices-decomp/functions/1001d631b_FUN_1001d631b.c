// name: FUN_1001d631b
// address: 1001d631b

int FUN_1001d631b(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_140 [16];
  undefined4 local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_48;
  undefined8 local_40;
  
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  iVar2 = FUN_1001d40d0();
  if (iVar2 == 0) {
    if (*(char *)(param_1 + 0x953) == '\0') {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_1006b42ce(uVar3);
      }
      FUN_1001782e9(0,0);
      iVar2 = -0x32;
    }
    else {
      iVar2 = FUN_1001d6276(local_140);
      if (iVar2 != -0x80) {
        if (iVar2 == 0) {
          local_130 = 0x50757368;
          local_48 = param_3;
          local_40 = param_2;
          iVar2 = FUN_1001d62dc(param_1);
          if ((iVar2 != -0x80) && (iVar2 != 0)) {
            uVar3 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar3,0x10);
            if (cVar1 != '\0') {
              FUN_1006b41f6(iVar2,uVar3);
            }
          }
        }
        else {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            FUN_1006b4262(iVar2,uVar3);
          }
        }
      }
    }
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006b418a(iVar2,uVar3);
    }
  }
  return iVar2;
}

