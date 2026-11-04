// name: FUN_1001c2b73
// address: 1001c2b73

void FUN_1001c2b73(undefined8 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  uVar2 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar2,0x10);
  if (cVar1 != '\0') {
    FUN_1006a651d(uVar2);
  }
  FUN_1001782e9(0,1);
  return;
}

