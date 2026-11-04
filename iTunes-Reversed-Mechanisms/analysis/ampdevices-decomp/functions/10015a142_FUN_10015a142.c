// name: FUN_10015a142
// address: 10015a142

void FUN_10015a142(undefined8 *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = FUN_1001e9eb9(*param_1);
  if ((iVar2 != -0x80) && (iVar2 != 0)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10066aa35(iVar2,uVar3);
    }
  }
  return;
}

