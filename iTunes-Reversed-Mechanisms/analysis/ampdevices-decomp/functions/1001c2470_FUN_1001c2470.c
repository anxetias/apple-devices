// name: FUN_1001c2470
// address: 1001c2470

void FUN_1001c2470(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1 == (undefined8 *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_1006a5dbd(uVar3);
    }
  }
  else {
    if (param_2 != (undefined8 *)0x0) {
      puVar4 = param_1;
      puVar1 = (undefined8 *)0x0;
      do {
        puVar5 = puVar1;
        puVar4 = (undefined8 *)*puVar4;
        puVar1 = puVar4;
      } while (puVar4 != (undefined8 *)0x0);
      *param_2 = 0;
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = param_2;
        return;
      }
      *param_1 = param_2;
      return;
    }
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_1006a5d47(uVar3);
    }
  }
  FUN_1001782e9(0,1);
  return;
}

