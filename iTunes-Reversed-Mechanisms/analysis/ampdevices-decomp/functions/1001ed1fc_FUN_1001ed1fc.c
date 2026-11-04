// name: FUN_1001ed1fc
// address: 1001ed1fc

undefined8 FUN_1001ed1fc(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 == (int *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006c4b89(uVar2);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffce;
  }
  else if (*param_1 == 0x64747120) {
    uVar2 = 0;
    FUN_1001eca8b(*(undefined8 *)(param_1 + 2),0);
    FUN_1001c64c1(param_1);
  }
  else {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006c4b13(uVar2);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffe4;
  }
  return uVar2;
}

