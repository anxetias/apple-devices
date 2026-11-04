// name: FUN_10015cd83
// address: 10015cd83

undefined8 FUN_10015cd83(long *param_1,uint *param_2)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  
  if (param_1 == (long *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_10066c9c3(uVar3);
    }
  }
  else {
    if (param_2 != (uint *)0x0) {
      *param_2 = 0;
      if (*param_1 == 0) {
        return 0;
      }
      uVar1 = **(uint **)(*param_1 + 0x20);
      *param_2 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
      return 0;
    }
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_10066c94d(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

