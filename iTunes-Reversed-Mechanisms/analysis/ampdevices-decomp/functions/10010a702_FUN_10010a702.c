// name: FUN_10010a702
// address: 10010a702

undefined8 FUN_10010a702(long param_1)

{
  long lVar1;
  long lVar2;
  char cVar3;
  char cVar4;
  undefined8 *puVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  int iVar11;
  undefined8 uVar12;
  
  puVar5 = *(undefined8 **)(param_1 + 0x48);
  piVar6 = (int *)*puVar5;
  lVar7 = puVar5[1];
  lVar8 = *(long *)(*(long *)(param_1 + 0x50) + 8);
  uVar12 = puVar5[2];
  uVar9 = puVar5[3];
  iVar11 = *piVar6;
  cVar3 = *(char *)(param_1 + 0x1e40);
  cVar4 = *(char *)(param_1 + 0x1e41);
  lVar1 = lVar7 + 0x7660;
  lVar2 = lVar7 + 0x77b0;
  FUN_100119bb8(param_1,puVar5[4],lVar7 + 0x7690,lVar7 + 0x77e0,*(undefined8 *)(lVar7 + 0x10));
  iVar11 = FUN_100119bc2(param_1,piVar6,lVar7,uVar12,uVar9,lVar1,lVar2,iVar11 == 2);
  uVar12 = 0xfffffffe;
  if (iVar11 == 0) {
    FUN_10011b1c8(param_1,lVar1,lVar2,lVar7 + 0xe60,*(undefined8 *)(lVar7 + 0x18),piVar6[1] == 3);
    uVar12 = 0;
    FUN_10011b1c8(param_1,lVar1,lVar2,lVar8 + 0xe60,*(undefined8 *)(lVar8 + 0x18),0);
    uVar10 = (ulong)(byte)(cVar4 * cVar3);
    _memmove(*(void **)(lVar7 + 0x7660),*(void **)(lVar7 + 0x7660 + uVar10 * 8),0x100);
    _memmove(*(void **)(lVar7 + 0x77b0),*(void **)(lVar7 + 0x77b0 + uVar10 * 8),0x100);
    _memmove(*(void **)(lVar7 + 0x7668),*(void **)(lVar7 + 0x7668 + uVar10 * 8),0x100);
    _memmove(*(void **)(lVar7 + 0x77b8),*(void **)(lVar7 + 0x77b8 + uVar10 * 8),0x100);
    _memmove(*(void **)(lVar7 + 0x7670),*(void **)(lVar7 + 0x7670 + uVar10 * 8),0x100);
    _memmove(*(void **)(lVar7 + 0x77c0),*(void **)(lVar7 + 0x77c0 + uVar10 * 8),0x100);
    _memmove(*(void **)(lVar7 + 0x7678),*(void **)(lVar7 + 0x7678 + uVar10 * 8),0x100);
    _memmove(*(void **)(lVar7 + 0x77c8),*(void **)(lVar7 + 0x77c8 + uVar10 * 8),0x100);
    _memmove(*(void **)(lVar7 + 0x7680),*(void **)(lVar7 + 0x7680 + uVar10 * 8),0x100);
    _memmove(*(void **)(lVar7 + 0x77d0),*(void **)(lVar7 + 0x77d0 + uVar10 * 8),0x100);
    _memmove(*(void **)(lVar7 + 0x7688),*(void **)(lVar7 + 0x7688 + uVar10 * 8),0x100);
    _memmove(*(void **)(lVar7 + 0x77d8),*(void **)(lVar7 + 0x77d8 + uVar10 * 8),0x100);
  }
  return uVar12;
}

