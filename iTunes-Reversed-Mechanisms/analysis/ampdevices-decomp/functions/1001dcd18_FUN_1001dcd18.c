// name: FUN_1001dcd18
// address: 1001dcd18

undefined8 FUN_1001dcd18(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x73747263)) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006b8101(uVar2);
    }
  }
  else {
    if (0 < param_1[0xf]) {
      param_1[0xf] = param_1[0xf] + -1;
      return 0;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006b808b(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

