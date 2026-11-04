// name: FUN_1001c26bc
// address: 1001c26bc

undefined8 * FUN_1001c26bc(undefined8 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006a60f7(uVar2);
    }
    puVar3 = (undefined8 *)0x0;
    FUN_1001782e9(0,1);
  }
  else {
    puVar3 = (undefined8 *)*param_1;
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)0x0;
    }
    else {
      *param_1 = *puVar3;
      *puVar3 = 0;
    }
  }
  return puVar3;
}

