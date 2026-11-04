// name: FUN_1001e5408
// address: 1001e5408

void FUN_1001e5408(long param_1,uint param_2,uint param_3)

{
  ushort *puVar1;
  char cVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_3 < param_2) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_1006be82c(uVar3);
    }
    FUN_1001782e9(0,0);
  }
  if (param_2 < param_3) {
    param_3 = param_2;
  }
  if (param_3 != 0) {
    uVar4 = 0;
    do {
      puVar1 = (ushort *)(param_1 + uVar4 * 2);
      *puVar1 = *puVar1 << 8 | *puVar1 >> 8;
      uVar4 = uVar4 + 1;
    } while (param_3 != uVar4);
  }
  return;
}

