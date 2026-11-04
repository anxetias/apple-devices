// name: FUN_100128c00
// address: 100128c00

undefined1 * FUN_100128c00(undefined8 param_1,ulong *param_2)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  uint uVar5;
  
  bVar1 = FUN_10015fc81(param_2,4);
  if (bVar1 == 0xf) {
    bVar1 = FUN_10015fc81(param_2,8);
    uVar5 = bVar1 + 0xe;
  }
  else {
    uVar5 = (uint)bVar1;
  }
  FUN_10015fdfe(param_2,uVar5 << 3);
  puVar4 = (undefined1 *)0x0;
  if (param_2[1] < *param_2) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_10066a870(uVar3);
    }
    FUN_1001782e9(0,0);
    puVar4 = &DAT_ffffff30;
  }
  return puVar4;
}

