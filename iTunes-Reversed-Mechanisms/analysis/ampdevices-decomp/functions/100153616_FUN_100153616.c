// name: FUN_100153616
// address: 100153616

void FUN_100153616(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  if (puVar1 != (undefined8 *)0x0) {
    (*(code *)PTR__objc_release_10082c7b0)(*puVar1);
    operator_delete(puVar1);
    return;
  }
  return;
}

