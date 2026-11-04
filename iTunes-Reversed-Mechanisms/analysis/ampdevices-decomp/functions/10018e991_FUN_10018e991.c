// name: FUN_10018e991
// address: 10018e991

void FUN_10018e991(long param_1,undefined2 param_2,undefined2 param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_100693368(uVar2);
    }
    FUN_1001782e9(0,0);
    return;
  }
  if (*(char *)(param_1 + 8) != '\0') {
    *(undefined2 *)(param_1 + 0x34) = param_2;
    *(undefined2 *)(param_1 + 0x32) = param_3;
    return;
  }
  *(undefined2 *)(param_1 + 0x44) = param_2;
  *(undefined2 *)(param_1 + 0x42) = param_3;
  return;
}

