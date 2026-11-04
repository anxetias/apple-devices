// name: FUN_10037b70a
// address: 10037b70a

void FUN_10037b70a(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  uVar3 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
  if ((uVar3 & 0x7fffffff0) != 0) {
    uVar4 = uVar3 >> 3;
    uVar5 = 0;
    do {
      uVar4 = uVar4 - 1;
      lVar1 = *(long *)(param_1 + 0x10);
      uVar2 = *(undefined8 *)(lVar1 + uVar5 * 8);
      lVar6 = (uVar4 & 0xffffffff) * 8;
      *(undefined8 *)(lVar1 + uVar5 * 8) = *(undefined8 *)(lVar1 + lVar6);
      *(undefined8 *)(*(long *)(param_1 + 0x10) + lVar6) = uVar2;
      uVar5 = uVar5 + 1;
    } while (((uint)(uVar3 >> 4) & 0x7fffffff) != uVar5);
  }
  return;
}

