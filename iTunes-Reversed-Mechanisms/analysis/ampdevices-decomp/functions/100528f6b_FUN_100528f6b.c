// name: FUN_100528f6b
// address: 100528f6b

void FUN_100528f6b(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = &DAT_1008bfc98;
  do {
    puVar1 = (undefined8 *)*puVar1;
    if (puVar1 == (undefined8 *)0x0) break;
  } while (puVar1 != param_1);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_10052897c();
    return;
  }
  return;
}

