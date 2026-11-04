// name: FUN_1001ef466
// address: 1001ef466

void FUN_1001ef466(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_2 == (long *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_1006c5c64(uVar3);
    }
    FUN_1001782e9(0,0);
  }
  else {
    puVar1 = (undefined8 *)*param_1;
    if (*param_2 != 0) {
      uVar3 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 != '\0') {
        FUN_1006c5bee(uVar3);
      }
      FUN_1001782e9(0,0);
    }
    if (puVar1 == (undefined8 *)0x0) {
      *param_2 = 0;
      *param_1 = param_2;
    }
    else {
      do {
        puVar4 = puVar1;
        puVar1 = (undefined8 *)*puVar4;
      } while (puVar1 != (undefined8 *)0x0);
      *param_2 = 0;
      *puVar4 = param_2;
    }
  }
  return;
}

