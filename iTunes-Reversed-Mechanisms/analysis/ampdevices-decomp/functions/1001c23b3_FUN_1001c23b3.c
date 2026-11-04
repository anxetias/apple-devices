// name: FUN_1001c23b3
// address: 1001c23b3

void FUN_1001c23b3(undefined8 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = 0;
    return;
  }
  uVar2 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar2,0x10);
  if (cVar1 != '\0') {
    FUN_1006a5be5(uVar2);
  }
  FUN_1001782e9(0,1);
  return;
}

