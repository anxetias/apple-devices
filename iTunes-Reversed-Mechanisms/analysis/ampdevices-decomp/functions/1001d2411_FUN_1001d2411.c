// name: FUN_1001d2411
// address: 1001d2411

undefined8 FUN_1001d2411(long param_1,uint param_2)

{
  ushort *puVar1;
  char cVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_1 != 0) {
    if (1 < param_2) {
      uVar4 = 0;
      do {
        puVar1 = (ushort *)(param_1 + uVar4 * 2);
        *puVar1 = *puVar1 << 8 | *puVar1 >> 8;
        uVar4 = uVar4 + 1;
      } while (param_2 >> 1 != uVar4);
    }
    return 0;
  }
  uVar3 = FUN_1001cc310();
  cVar2 = _os_log_type_enabled(uVar3,0x10);
  if (cVar2 != '\0') {
    FUN_1006b2986(uVar3);
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

