// name: FUN_10017a691
// address: 10017a691

void FUN_10017a691(long param_1,undefined1 *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  uVar2 = (uint)*(undefined8 *)(param_1 + 0x20);
  lVar1 = param_1 + 0x28;
  lVar3 = param_1 + 0x38;
  lVar4 = param_1 + (ulong)(uVar2 & 0x3f);
  lVar5 = lVar4 + 0x39;
  *(undefined1 *)(lVar4 + 0x38) = 0x80;
  uVar2 = ~uVar2 & 0x3f;
  if (uVar2 < 8) {
    FUN_1001c62d9(lVar5,uVar2);
    FUN_10017a87a(lVar3,lVar1);
    uVar2 = 0x40;
    lVar5 = lVar3;
  }
  FUN_1001c62d9(lVar5,uVar2);
  *(int *)(param_1 + 0x70) = (int)*(ulong *)(param_1 + 0x20) * 8;
  *(int *)(param_1 + 0x74) = (int)(*(ulong *)(param_1 + 0x20) >> 0x1d);
  FUN_10017a87a(lVar3,lVar1);
  FUN_1001c62d9(param_2,0x28);
  *param_2 = *(undefined1 *)(param_1 + 4);
  *(undefined4 *)(param_2 + 4) = 0x10;
  lVar3 = 0;
  do {
    *(undefined4 *)(param_2 + lVar3 * 4 + 8) = *(undefined4 *)(lVar1 + lVar3 * 4);
    lVar3 = lVar3 + 1;
  } while ((int)lVar3 != 4);
  return;
}

