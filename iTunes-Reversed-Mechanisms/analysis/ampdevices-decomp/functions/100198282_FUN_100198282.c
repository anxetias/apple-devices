// name: FUN_100198282
// address: 100198282

undefined8 FUN_100198282(long param_1,ulong param_2,long *param_3)

{
  char cVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  param_2 = param_2 & 0xffffffff;
  uVar3 = (*(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x28) >> 4) * -0x5555555555555555;
  if (uVar3 < param_2 || uVar3 - param_2 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_100696ca1(uVar2);
    }
  }
  else {
    if (*param_3 == 0) {
      *param_3 = *(long *)(*(long *)(param_1 + 0x28) + param_2 * 0x30);
      return 0;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_100696d17(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

