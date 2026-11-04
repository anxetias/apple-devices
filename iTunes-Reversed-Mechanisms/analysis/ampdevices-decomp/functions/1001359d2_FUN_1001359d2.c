// name: FUN_1001359d2
// address: 1001359d2

void FUN_1001359d2(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x90,(nothrow_t *)PTR_nothrow_10082c970);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 4) = 0x3f800000;
    puVar1[5] = 0x32aaaba7;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    *(undefined4 *)(puVar1 + 0x11) = 0x3f800000;
  }
  *param_1 = puVar1;
  return;
}

