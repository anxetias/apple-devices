// name: FUN_100151a22
// address: 100151a22

undefined8 * FUN_100151a22(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x18,(nothrow_t *)PTR_nothrow_10082c970);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
  }
  FUN_1001505d2(puVar1);
  *param_1 = puVar1;
  return param_1;
}

