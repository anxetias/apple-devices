// name: FUN_10018f68d
// address: 10018f68d

int FUN_10018f68d(undefined8 param_1,undefined2 *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_28 [16];
  
  FUN_1001b7a44(local_28);
  if (param_2 == (undefined2 *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_100693784(uVar3);
    }
    iVar2 = -0x32;
    FUN_1001782e9(0,0);
  }
  else {
    iVar2 = FUN_10018ed0d(param_1,local_28);
    if (iVar2 == 0) {
      iVar2 = 0;
      FUN_1001bb41a(local_28,param_2);
    }
    else {
      *param_2 = 0;
    }
  }
  FUN_1001b7a50(local_28);
  return iVar2;
}

