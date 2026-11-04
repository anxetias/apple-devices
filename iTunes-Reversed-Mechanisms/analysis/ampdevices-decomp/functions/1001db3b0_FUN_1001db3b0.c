// name: FUN_1001db3b0
// address: 1001db3b0

undefined8 FUN_1001db3b0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  uVar2 = 0xffffffce;
  if ((*(int *)(lVar1 + 0x98) == 2) && (*(int *)(lVar1 + 0x4c0) == 2)) {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0xf8) + 0x18);
    *(undefined8 *)(lVar1 + 0x4f0) = *(undefined8 *)(*(long *)(param_1 + 0xf8) + 0x10);
    *(undefined8 *)(lVar1 + 0x4f8) = uVar2;
    uVar2 = 0;
  }
  return uVar2;
}

