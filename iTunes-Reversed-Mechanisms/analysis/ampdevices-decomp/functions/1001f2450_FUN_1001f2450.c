// name: FUN_1001f2450
// address: 1001f2450

void FUN_1001f2450(undefined4 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1[1] != 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006c609b(uVar2);
    }
    FUN_1001782e9(0,0);
  }
  if (*(long *)(param_1 + 2) != 0) {
    FUN_1001c64c1();
  }
  if (*(long *)(param_1 + 6) != 0) {
    FUN_1001c64c1();
  }
  if (*(long *)(param_1 + 10) != 0) {
    FUN_1001c64c1();
  }
  *param_1 = 0;
  return;
}

