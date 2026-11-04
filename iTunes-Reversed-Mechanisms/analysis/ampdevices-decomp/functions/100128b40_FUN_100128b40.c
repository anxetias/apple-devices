// name: FUN_100128b40
// address: 100128b40

undefined1 * FUN_100128b40(undefined8 param_1,ulong *param_2)

{
  char cVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  uint uVar5;
  
  FUN_10015fc81(param_2,4);
  cVar1 = FUN_10015fd4e(param_2);
  bVar2 = FUN_10015fc81(param_2,8);
  if (bVar2 == 0xff) {
    bVar2 = FUN_10015fc81(param_2,8);
    uVar5 = bVar2 + 0xff;
  }
  else {
    uVar5 = (uint)bVar2;
  }
  if (cVar1 != '\0') {
    FUN_10015fe19(param_2,0);
  }
  FUN_10015fdfe(param_2,uVar5 << 3);
  puVar4 = (undefined1 *)0x0;
  if (param_2[1] < *param_2) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10066a7f0(uVar3);
    }
    FUN_1001782e9(0,0);
    puVar4 = &DAT_ffffff30;
  }
  return puVar4;
}

