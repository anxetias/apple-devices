// name: FUN_10035bee0
// address: 10035bee0

undefined4 FUN_10035bee0(long param_1)

{
  byte bVar1;
  undefined4 uVar2;
  
  if (*(long *)(param_1 + 0x28) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_10017cdfb();
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  bVar1 = *(byte *)(param_1 + 0x20);
  if ((bVar1 & 1) != 0) {
    uVar2 = FUN_10035bf3c(*(long *)(param_1 + 8) + 8,*(undefined8 *)(param_1 + 0x10));
    bVar1 = *(byte *)(param_1 + 0x20);
  }
  if ((bVar1 & 0x10) != 0) {
    _free(*(void **)(param_1 + 0x10));
  }
  return uVar2;
}

