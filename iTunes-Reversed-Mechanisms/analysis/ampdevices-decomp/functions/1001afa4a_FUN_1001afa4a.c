// name: FUN_1001afa4a
// address: 1001afa4a

undefined8 FUN_1001afa4a(undefined8 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x40,(nothrow_t *)PTR_nothrow_10082c970);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_10083ca18;
    *(undefined4 *)(puVar1 + 1) = param_2;
    *(undefined2 *)((long)puVar1 + 0x3c) = 0;
    *(undefined1 *)((long)puVar1 + 0x3e) = 0;
    FUN_1001c62d9((long)puVar1 + 0xc,0x30);
  }
  FUN_1001b0030(param_1,puVar1);
  return param_1;
}

