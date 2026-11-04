// name: FUN_1002c0a63
// address: 1002c0a63

undefined8 * FUN_1002c0a63(undefined8 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x18,(nothrow_t *)PTR_nothrow_10082c970);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
  }
  FUN_1002c0ab5(param_1,param_2,puVar1);
  return puVar1;
}

