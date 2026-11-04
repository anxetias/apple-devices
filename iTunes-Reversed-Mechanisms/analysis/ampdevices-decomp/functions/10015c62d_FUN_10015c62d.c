// name: FUN_10015c62d
// address: 10015c62d

undefined1 * FUN_10015c62d(long param_1,undefined8 *param_2,code *param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  
  if (*(int *)(param_1 + 4) == 0x766f6f6d) {
    uVar2 = FUN_10015c6df();
    if (uVar2 == 0) {
      if (param_3 == (code *)0x0) {
        param_3 = FUN_10015ca57;
      }
      puVar4 = (undefined1 *)FUN_10015c7aa(*param_2,0,param_3,param_4);
      return puVar4;
    }
    puVar4 = (undefined1 *)(ulong)uVar2;
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10066c05b(uVar2,uVar3);
    }
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10066bfe5(uVar3);
    }
    FUN_1001782e9(0,0);
    puVar4 = &DAT_ffffff30;
  }
  return puVar4;
}

