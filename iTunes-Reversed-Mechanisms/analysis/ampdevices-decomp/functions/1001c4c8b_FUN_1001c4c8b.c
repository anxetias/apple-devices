// name: FUN_1001c4c8b
// address: 1001c4c8b

void FUN_1001c4c8b(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x30);
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar2;
    if ((puVar2[2] != 0) && (*(char *)(puVar2 + 4) == '\0')) {
      FUN_1001c64c1();
      puVar2[2] = 0;
    }
    FUN_1001c64c1(puVar2);
    puVar2 = puVar1;
  }
  FUN_1001c2b73(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}

