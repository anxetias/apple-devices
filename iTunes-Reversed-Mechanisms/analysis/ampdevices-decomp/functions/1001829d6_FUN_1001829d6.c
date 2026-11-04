// name: FUN_1001829d6
// address: 1001829d6

int FUN_1001829d6(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_50 [16];
  undefined4 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  iVar2 = FUN_100189f61(param_1,local_50);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = local_40;
      }
      if (param_3 != (undefined8 *)0x0) {
        *param_3 = local_38;
      }
      if (param_4 != (undefined8 *)0x0) {
        *param_4 = local_30;
      }
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_100689ba2(iVar2,uVar3);
      }
    }
  }
  return iVar2;
}

