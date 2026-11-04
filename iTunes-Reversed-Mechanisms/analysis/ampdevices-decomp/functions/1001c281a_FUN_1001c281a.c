// name: FUN_1001c281a
// address: 1001c281a

undefined8 * FUN_1001c281a(undefined8 *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_1 == (undefined8 *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_1006a63bb(uVar3);
    }
    puVar4 = (undefined8 *)0x0;
    FUN_1001782e9(0,1);
  }
  else {
    if (((ulong)param_1 & 7) != 0) {
      uVar3 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 != '\0') {
        FUN_1006a6345(uVar3);
      }
      FUN_1001782e9(0,1);
    }
    do {
      puVar4 = (undefined8 *)*param_1;
      if (puVar4 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      LOCK();
      puVar1 = (undefined8 *)*param_1;
      if (puVar4 == puVar1) {
        *param_1 = *puVar4;
      }
      UNLOCK();
    } while (puVar4 != puVar1);
    *puVar4 = 0;
  }
  return puVar4;
}

