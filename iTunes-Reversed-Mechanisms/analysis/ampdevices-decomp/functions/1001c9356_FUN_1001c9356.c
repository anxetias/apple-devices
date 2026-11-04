// name: FUN_1001c9356
// address: 1001c9356

undefined8 FUN_1001c9356(int *param_1,uint *param_2)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x6d657461)) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_1006ab878(uVar3);
    }
  }
  else {
    if (param_2 != (uint *)0x0) {
      *param_2 = 0;
      if (*(long *)(param_1 + 0x10) == 0) {
        return 0;
      }
      uVar1 = **(uint **)(*(long *)(param_1 + 0x10) + 0x20);
      *param_2 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
      return 0;
    }
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_1006ab802(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

