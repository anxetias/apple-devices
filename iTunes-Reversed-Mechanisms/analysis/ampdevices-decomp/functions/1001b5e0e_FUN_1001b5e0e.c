// name: FUN_1001b5e0e
// address: 1001b5e0e

undefined8 * FUN_1001b5e0e(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 local_28;
  undefined8 uStack_20;
  
  puVar1 = operator_new(0x58,(nothrow_t *)PTR_nothrow_10082c970);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[7] = 0x3ff0000000000000;
    puVar1[8] = 0x100000000;
    *puVar1 = &PTR_FUN_10083cc58;
    puVar1[9] = 0;
    *(undefined1 *)(puVar1 + 10) = 0;
  }
  FUN_1001b5e96(&local_28,puVar1);
  *param_1 = local_28;
  param_1[1] = uStack_20;
  return param_1;
}

