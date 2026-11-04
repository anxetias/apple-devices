// name: FUN_100109cae
// address: 100109cae

undefined8 FUN_100109cae(undefined8 param_1,undefined8 *param_2,long param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  undefined4 *puVar8;
  
  puVar4 = (undefined4 *)*param_4;
  *param_2 = 0;
  *(undefined4 **)(puVar4 + 2) = puVar4 + 0x12;
  lVar5 = 0;
  uVar6 = 0;
  do {
    uVar2 = *(uint *)(param_3 + lVar5 * 4);
    puVar4[lVar5 + 0x12] = uVar2;
    if ((8 < uVar2) || ((0x114U >> (uVar2 & 0x1f) & 1) == 0)) {
      return 0xfffffffe;
    }
    if ((int)uVar6 < (int)uVar2) {
      uVar6 = uVar2;
    }
    lVar5 = lVar5 + 1;
  } while (lVar5 != 3);
  *puVar4 = 3;
  puVar4[4] = 0xc;
  *(undefined4 **)(puVar4 + 6) = puVar4 + 0x15;
  *(undefined4 **)(puVar4 + 8) = puVar4 + 0x22;
  *(undefined4 **)(puVar4 + 10) = puVar4 + 0x2f;
  *(undefined4 **)(puVar4 + 0xc) = puVar4 + 0x35;
  puVar8 = puVar4 + 0x3b;
  lVar5 = 0;
  do {
    *(undefined4 **)(*(long *)(puVar4 + 10) + lVar5 * 8) = puVar8;
    iVar3 = puVar4[4];
    ___bzero(*(undefined8 *)(*(long *)(puVar4 + 10) + lVar5 * 8),(long)iVar3 << 2);
    *(undefined4 **)(*(long *)(puVar4 + 0xc) + lVar5 * 8) = puVar8 + iVar3;
    puVar8 = puVar8 + iVar3 + (int)puVar4[4];
    ___bzero(*(undefined8 *)(*(long *)(puVar4 + 0xc) + lVar5 * 8),(long)(int)puVar4[4] << 2);
    lVar5 = lVar5 + 1;
  } while (lVar5 != 3);
  *(undefined4 **)(puVar4 + 0xe) = puVar8;
  uVar7 = (ulong)uVar6;
  puVar1 = puVar8 + uVar7;
  ___bzero(puVar8,uVar7 * 4);
  *(undefined4 **)(puVar4 + 0x10) = puVar1;
  ___bzero(puVar1,uVar7 * 4);
  *param_2 = puVar4;
  *param_4 = puVar1 + uVar7;
  return 0;
}

