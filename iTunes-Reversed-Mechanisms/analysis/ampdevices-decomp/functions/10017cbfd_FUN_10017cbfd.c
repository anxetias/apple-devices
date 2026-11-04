// name: FUN_10017cbfd
// address: 10017cbfd

void FUN_10017cbfd(undefined4 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    return;
  }
  uVar2 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar2,0x10);
  if (cVar1 != '\0') {
    FUN_100684b0a(uVar2);
  }
  FUN_1001782e9(0,0);
  return;
}

