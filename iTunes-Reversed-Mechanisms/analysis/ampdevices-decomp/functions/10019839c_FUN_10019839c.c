// name: FUN_10019839c
// address: 10019839c

undefined8 FUN_10019839c(long param_1,ulong param_2,undefined8 param_3)

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
      FUN_100696e03(uVar2);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffce;
  }
  else {
    FUN_1001b81f2(param_3,*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10 + param_2 * 0x30));
    uVar2 = 0;
  }
  return uVar2;
}

