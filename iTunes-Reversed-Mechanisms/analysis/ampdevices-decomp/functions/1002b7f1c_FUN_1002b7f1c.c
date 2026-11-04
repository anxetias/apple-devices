// name: FUN_1002b7f1c
// address: 1002b7f1c

undefined8 * FUN_1002b7f1c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)param_1[2];
  if (puVar1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  puVar2 = (undefined8 *)*puVar1;
  if (puVar2 == param_1) {
    *puVar1 = 0;
    while (puVar2 = (undefined8 *)puVar1[1], (undefined8 *)puVar1[1] != (undefined8 *)0x0) {
      do {
        puVar1 = puVar2;
        puVar2 = (undefined8 *)*puVar1;
      } while ((undefined8 *)*puVar1 != (undefined8 *)0x0);
    }
  }
  else {
    puVar1[1] = 0;
    while (puVar2 != (undefined8 *)0x0) {
      do {
        puVar1 = puVar2;
        puVar2 = (undefined8 *)*puVar1;
      } while ((undefined8 *)*puVar1 != (undefined8 *)0x0);
      puVar2 = (undefined8 *)puVar1[1];
    }
  }
  return puVar1;
}

