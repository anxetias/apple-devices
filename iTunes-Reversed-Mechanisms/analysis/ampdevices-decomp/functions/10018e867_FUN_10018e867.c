// name: FUN_10018e867
// address: 10018e867

void FUN_10018e867(long param_1,undefined4 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    *param_2 = *(undefined4 *)(param_1 + 0xc);
    return;
  }
  uVar2 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar2,0x10);
  if (cVar1 != '\0') {
    FUN_100693190(uVar2);
  }
  FUN_1001782e9(0,0);
  return;
}

