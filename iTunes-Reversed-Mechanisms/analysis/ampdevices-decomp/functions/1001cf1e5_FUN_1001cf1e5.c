// name: FUN_1001cf1e5
// address: 1001cf1e5

undefined8 FUN_1001cf1e5(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((param_1 == (int *)0x0) || (uVar2 = 0, *param_1 != 0x534c7374)) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006afe3c(uVar2);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffce;
  }
  return uVar2;
}

