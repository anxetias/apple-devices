// name: FUN_1002efe9a
// address: 1002efe9a

undefined8 FUN_1002efe9a(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (*(char *)(*(long *)(param_2 + 0x20) + 0xba) == '\x01') {
    uVar1 = *(ulong *)(param_1 + 0x18);
    uVar2 = *(ulong *)(param_2 + 0x28);
    if (uVar1 < uVar2) {
      uVar3 = uVar2 - *(long *)(param_1 + 0x30);
      if (uVar2 <= *(long *)(param_1 + 0x30) + uVar1) {
        uVar3 = uVar1;
      }
      *(ulong *)(param_2 + 0x28) = uVar3;
      return CONCAT71((int7)(uVar1 >> 8),1);
    }
  }
  return 0;
}

