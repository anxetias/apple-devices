// name: FUN_100119958
// address: 100119958

undefined8 FUN_100119958(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  
  uVar9 = *param_2;
  lVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  bVar3 = *(byte *)(param_1 + 0x40);
  bVar4 = *(byte *)(param_1 + 0x41);
  lVar1 = lVar5 + 0x7660;
  lVar2 = lVar5 + 0x77b0;
  FUN_10011d320(param_1,param_2[4],lVar5 + 0x7690,lVar5 + 0x77e0,*(undefined8 *)(lVar5 + 0x10));
  iVar8 = FUN_100119bc2(param_1,uVar9,lVar5,uVar6,uVar7,lVar1,lVar2,*(undefined1 *)(param_2 + 5));
  uVar9 = 0xfffffffe;
  if (iVar8 == 0) {
    uVar10 = (uint)bVar4 * (uint)bVar3;
    uVar11 = (ulong)uVar10;
    if (uVar10 != 0 && *(int *)(param_1 + 0x44) != 0) {
      uVar12 = 0;
      do {
        ___bzero(*(undefined8 *)(lVar5 + 0x7660 + uVar12 * 8),(ulong)*(uint *)(param_1 + 0x44) << 2)
        ;
        ___bzero(*(undefined8 *)(lVar2 + uVar12 * 8),(ulong)*(uint *)(param_1 + 0x44) << 2);
        uVar12 = uVar12 + 1;
      } while (uVar11 != uVar12);
    }
    if (*(char *)(param_1 + 0x34) == '\0') {
      FUN_10011d40e(param_1,lVar1,lVar2,lVar5 + 0xe60,*(undefined8 *)(lVar5 + 0x18),0);
    }
    else {
      FUN_10011b1d2(param_1,lVar1,lVar2);
    }
    _memcpy(*(void **)(lVar5 + 0x7660),*(void **)(lVar5 + 0x7660 + uVar11 * 8),0x100);
    _memcpy(*(void **)(lVar5 + 0x77b0),*(void **)(lVar5 + 0x77b0 + uVar11 * 8),0x100);
    _memcpy(*(void **)(lVar5 + 0x7668),*(void **)(lVar5 + 0x7668 + uVar11 * 8),0x100);
    _memcpy(*(void **)(lVar5 + 0x77b8),*(void **)(lVar5 + 0x77b8 + uVar11 * 8),0x100);
    _memcpy(*(void **)(lVar5 + 0x7670),*(void **)(lVar5 + 0x7670 + uVar11 * 8),0x100);
    _memcpy(*(void **)(lVar5 + 0x77c0),*(void **)(lVar5 + 0x77c0 + uVar11 * 8),0x100);
    _memcpy(*(void **)(lVar5 + 0x7678),*(void **)(lVar5 + 0x7678 + uVar11 * 8),0x100);
    _memcpy(*(void **)(lVar5 + 0x77c8),*(void **)(lVar5 + 0x77c8 + uVar11 * 8),0x100);
    _memcpy(*(void **)(lVar5 + 0x7680),*(void **)(lVar5 + 0x7680 + uVar11 * 8),0x100);
    _memcpy(*(void **)(lVar5 + 0x77d0),*(void **)(lVar5 + 0x77d0 + uVar11 * 8),0x100);
    _memcpy(*(void **)(lVar5 + 0x7688),*(void **)(lVar5 + 0x7688 + uVar11 * 8),0x100);
    _memcpy(*(void **)(lVar5 + 0x77d8),*(void **)(lVar5 + 0x77d8 + uVar11 * 8),0x100);
    uVar9 = 0;
  }
  return uVar9;
}

