// name: FUN_1001d68ec
// address: 1001d68ec

int FUN_1001d68ec(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_130 [20];
  int local_11c;
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
        iVar2 = FUN_1001d686e(param_1,0,local_130);
        if (iVar2 == 0) {
          FUN_1001d67d7(local_130);
          iVar2 = local_11c;
        }
        else {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            FUN_1006b4886(iVar2,uVar3);
          }
          FUN_1001d6790(local_130);
        }
      }
      else {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          FUN_1006b48f2(iVar2,uVar3);
        }
      }
    }
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006b481a(iVar2,uVar3);
    }
  }
  return iVar2;
}

