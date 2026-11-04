// name: FUN_100529afe
// address: 100529afe

void FUN_100529afe(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = &DAT_1008bfc98;
  do {
    puVar1 = (undefined8 *)*puVar1;
    if (puVar1 == (undefined8 *)0x0) break;
  } while (puVar1 != param_1);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_100528b3a();
    return;
  }
  return;
}

