// name: FUN_1001d6666
// address: 1001d6666

int FUN_1001d6666(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_138 [20];
  int local_124;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  
  local_120 = 0;
  local_118 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  iVar2 = FUN_1001d40d0();
  if (iVar2 == 0) {
    iVar2 = FUN_1001d6276(local_138);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        iVar2 = FUN_1001d65d5(param_1,param_2,0,local_138);
        if (iVar2 == 0) {
          FUN_1001d67d7(local_138);
          iVar2 = local_124;
        }
        else {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            FUN_1006b45ea(iVar2,uVar3);
          }
          FUN_1001d6790(local_138);
        }
      }
      else {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          FUN_1006b4656(iVar2,uVar3);
        }
      }
    }
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006b457e(iVar2,uVar3);
    }
  }
  return iVar2;
}

