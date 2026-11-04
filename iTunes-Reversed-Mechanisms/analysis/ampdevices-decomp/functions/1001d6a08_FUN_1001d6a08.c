// name: FUN_1001d6a08
// address: 1001d6a08

int FUN_1001d6a08(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_150 [20];
  int local_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_38;
  
  local_138 = 0;
  local_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_38 = *param_2;
  *param_2 = 0;
  iVar2 = FUN_1001d40d0();
  if (iVar2 == 0) {
    iVar2 = FUN_1001d6276(local_150);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        iVar2 = FUN_1001d6b5b(param_1,&local_38,param_3,param_4,local_150);
        if (iVar2 == 0) {
          FUN_1001d67d7(local_150);
          *param_2 = local_38;
          iVar2 = local_13c;
        }
        else {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            FUN_1006b49ca(iVar2,uVar3);
          }
          *param_2 = local_38;
          FUN_1001d6790(local_150);
        }
      }
      else {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          FUN_1006b4a36(iVar2,uVar3);
        }
      }
    }
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006b495e(iVar2,uVar3);
    }
  }
  return iVar2;
}

