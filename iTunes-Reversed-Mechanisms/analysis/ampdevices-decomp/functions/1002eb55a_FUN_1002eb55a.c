// name: FUN_1002eb55a
// address: 1002eb55a

ulong FUN_1002eb55a(long param_1)

{
  long *plVar1;
  byte bVar2;
  uint uVar3;
  undefined8 unaff_RBX;
  ulong uVar4;
  
  plVar1 = *(long **)(param_1 + 0x20);
  if (*(char *)(param_1 + 0x42) == '\x01') {
    if (plVar1 == (long *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x20))();
      uVar4 = (ulong)uVar3;
    }
    if (*(long **)(param_1 + 0x28) != (long *)0x0) {
      bVar2 = (**(code **)(**(long **)(param_1 + 0x28) + 0x20))();
      uVar4 = CONCAT71((int7)(uVar4 >> 8),(byte)uVar4 | bVar2);
    }
    if (*(long **)(param_1 + 0x30) != (long *)0x0) {
      bVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x20))();
      uVar4 = CONCAT71((int7)(uVar4 >> 8),(byte)uVar4 | bVar2);
    }
    if (*(long **)(param_1 + 0x38) != (long *)0x0) {
      bVar2 = (**(code **)(**(long **)(param_1 + 0x38) + 0x20))();
      uVar4 = CONCAT71((int7)(uVar4 >> 8),(byte)uVar4 | bVar2);
    }
  }
  else {
    if (plVar1 == (long *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = CONCAT71((int7)((ulong)unaff_RBX >> 8),(char)plVar1[9]);
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      uVar4 = CONCAT71((int7)(uVar4 >> 8),(byte)uVar4 | *(byte *)(*(long *)(param_1 + 0x28) + 0x48))
      ;
    }
    if (*(long *)(param_1 + 0x30) != 0) {
      uVar4 = CONCAT71((int7)(uVar4 >> 8),(byte)uVar4 | *(byte *)(*(long *)(param_1 + 0x30) + 0x48))
      ;
    }
    if (*(long *)(param_1 + 0x38) != 0) {
      uVar4 = CONCAT71((int7)(uVar4 >> 8),(byte)uVar4 | *(byte *)(*(long *)(param_1 + 0x38) + 0x48))
      ;
    }
  }
  return uVar4 & 0xffffffff;
}

