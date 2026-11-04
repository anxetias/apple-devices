// name: FUN_1001ef510
// address: 1001ef510

void FUN_1001ef510(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_2 == (undefined8 *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_1006c5cda(uVar3);
    }
    FUN_1001782e9(0,0);
  }
  else {
    puVar4 = param_1;
    puVar1 = (undefined8 *)0x0;
    do {
      puVar5 = puVar1;
      puVar4 = (undefined8 *)*puVar4;
      if (puVar4 == (undefined8 *)0x0) {
        return;
      }
      puVar1 = puVar4;
    } while (puVar4 != param_2);
    if (puVar5 != (undefined8 *)0x0) {
      param_1 = puVar5;
    }
    *param_1 = *param_2;
    *param_2 = 0;
  }
  return;
}

