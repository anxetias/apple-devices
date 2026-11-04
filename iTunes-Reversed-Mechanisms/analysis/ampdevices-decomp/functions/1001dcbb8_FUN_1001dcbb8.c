// name: FUN_1001dcbb8
// address: 1001dcbb8

undefined8 FUN_1001dcbb8(undefined4 *param_1,uint param_2)

{
  undefined8 *puVar1;
  
  FUN_1001c62d9(param_1,0x50);
  *param_1 = 0x73747263;
  param_1[1] = param_2;
  param_1[0xe] = 0x200;
  if ((param_2 & 1) != 0) {
    puVar1 = operator_new(0x18,(nothrow_t *)PTR_nothrow_10082c970);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
    }
    *(undefined8 **)(param_1 + 0x12) = puVar1;
  }
  return 0;
}

