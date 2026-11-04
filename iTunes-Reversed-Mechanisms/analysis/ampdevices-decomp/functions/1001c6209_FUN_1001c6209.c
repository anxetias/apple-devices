// name: FUN_1001c6209
// address: 1001c6209

void FUN_1001c6209(long *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_1001c5dea();
  if (cVar1 != '\0') {
    if (*param_1 != 0) {
      FUN_1001c64c1();
      *param_1 = 0;
    }
    *(undefined4 *)(param_1 + 1) = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    FUN_1001c64c1(param_1);
    return;
  }
  uVar2 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar2,0x10);
  if (cVar1 != '\0') {
    FUN_1006a93ee(uVar2);
  }
  FUN_1001782e9(0,0);
  return;
}

