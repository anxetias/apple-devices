// name: FUN_1004bc0d9
// address: 1004bc0d9

void FUN_1004bc0d9(long param_1)

{
  uint *puVar1;
  char cVar2;
  
  cVar2 = FUN_1002b630e();
  if (cVar2 == '\0') {
    puVar1 = (uint *)(*(long *)(param_1 + 8) + 0xc2);
    *puVar1 = *puVar1 | 0x800000;
    puVar1 = (uint *)(*(long *)(param_1 + 8) + 0xc2);
    *puVar1 = *puVar1 | 2;
  }
  return;
}

