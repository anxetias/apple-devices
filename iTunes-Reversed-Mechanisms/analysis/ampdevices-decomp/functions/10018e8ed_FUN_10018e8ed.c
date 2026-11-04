// name: FUN_10018e8ed
// address: 10018e8ed

void FUN_10018e8ed(long param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10069327c(uVar2);
    }
    FUN_1001782e9(0,0);
    return;
  }
  if (*(char *)(param_1 + 8) != '\0') {
    return;
  }
  *(undefined4 *)(param_1 + 0x38) = param_2;
  *(undefined4 *)(param_1 + 0x3c) = param_3;
  return;
}

