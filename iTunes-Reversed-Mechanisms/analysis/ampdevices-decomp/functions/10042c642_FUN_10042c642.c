// name: FUN_10042c642
// address: 10042c642

void FUN_10042c642(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  while (puVar1 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar1;
    FUN_1001c64c1();
  }
  FUN_1001c62d9(param_1,0x30);
  return;
}

