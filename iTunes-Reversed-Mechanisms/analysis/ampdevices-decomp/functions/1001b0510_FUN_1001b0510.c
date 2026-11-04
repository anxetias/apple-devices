// name: FUN_1001b0510
// address: 1001b0510

undefined8 * FUN_1001b0510(void)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (DAT_1008c5320 == 0) {
    if (DAT_1008c524c != 0) {
      puVar2 = (undefined8 *)FUN_1001b06f8();
      if (puVar2 != (undefined8 *)0x0) {
        if (*(int *)((long)puVar2 + 0x1c) == 0) {
          FUN_1001b0756(*puVar2,puVar2);
          FUN_1001b07e6(puVar2,0);
          puVar2[9] = 0;
        }
        DAT_1008c524c = 0;
        return puVar2;
      }
      DAT_1008c524c = 0;
    }
    puVar2 = DAT_1008c5290;
    if (DAT_1008c5290 == (undefined8 *)0x0) {
      puVar2 = DAT_1008c5268;
    }
    if (puVar2 != (undefined8 *)0x0) {
      return puVar2;
    }
  }
  puVar2 = DAT_1008c5250;
  if (DAT_1008c5250 != (undefined8 *)0x0) {
    if (*(int *)((long)DAT_1008c5250 + 0x1c) == 0) {
      FUN_1001b0756(*DAT_1008c5250,DAT_1008c5250);
      FUN_1001b07e6(puVar2,0);
    }
    return puVar2;
  }
  uVar3 = FUN_1001cc310();
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  cVar1 = _os_log_type_enabled(uVar3,0x10);
  if (cVar1 != '\0') {
    FUN_10069f7c2(uVar3);
  }
  (*(code *)PTR__objc_release_10082c7b0)();
  FUN_1001782e9(0,0);
                    /* WARNING: Subroutine does not return */
  _exit(0);
}

