// name: FUN_1001c4b9c
// address: 1001c4b9c

undefined8 FUN_1001c4b9c(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x6d656d62)) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006a7b50(uVar2);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffce;
  }
  else {
    FUN_1001c4c19(param_1);
    FUN_1001c4c8b(param_1);
    if (*(long *)(param_1 + 8) != 0) {
      FUN_1001c64c1();
    }
    FUN_1001c62d9(param_1,0x40);
    uVar2 = 0;
  }
  return uVar2;
}

