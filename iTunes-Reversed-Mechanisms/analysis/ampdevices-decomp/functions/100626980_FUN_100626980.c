// name: FUN_100626980
// address: 100626980

undefined8 FUN_100626980(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x18a8,(nothrow_t *)PTR_nothrow_10082c970);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1008711d8;
    *(undefined4 *)(puVar1 + 1) = 0x73716c64;
    puVar1[0xd] = 0;
    *(undefined4 *)(puVar1 + 0x208) = 0;
    *(undefined1 *)((long)puVar1 + 0x1044) = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    *(undefined1 *)(puVar1 + 0xc) = 0;
    *(undefined2 *)((long)puVar1 + 0x1045) = 0x101;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    ___bzero(puVar1 + 0xe,0xfd0);
    ___bzero(puVar1 + 0x209,0x860);
  }
  FUN_10062bc12(param_1,puVar1);
  return param_1;
}

