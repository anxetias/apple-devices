// name: FUN_100105fee
// address: 100105fee

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_100105fee(undefined8 param_1,long param_2,undefined8 *param_3,ulong *param_4,undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  void *pvVar3;
  long lVar4;
  undefined4 *puVar5;
  ulong uVar6;
  
  pvVar3 = _malloc(0x1a80);
  *param_3 = pvVar3;
  uVar6 = (long)pvVar3 + 0x7fU & 0xffffffffffffff80;
  lVar4 = 0;
  do {
    uVar2 = *(undefined8 *)(&UNK_1007004ec + lVar4 * 2);
    puVar1 = (undefined8 *)(uVar6 + 0xa14 + lVar4);
    *puVar1 = *(undefined8 *)(&DAT_1007004e4 + lVar4 * 2);
    puVar1[1] = uVar2;
    *(undefined4 *)(uVar6 + 0xa24 + lVar4) = *(undefined4 *)((long)&DAT_1007004f4 + lVar4 * 2);
    uVar2 = _UNK_100700478;
    lVar4 = lVar4 + 0x14;
  } while (lVar4 != 0x280);
  *(undefined8 *)(uVar6 + 0xa00) = _DAT_100700470;
  *(undefined8 *)(uVar6 + 0xa08) = uVar2;
  *(undefined4 *)(uVar6 + 0xa10) = 0xbc59720e;
  *(undefined1 *)(uVar6 + 0x19f4) = 0x20;
  *(undefined1 *)(uVar6 + 0x19f5) = param_5;
  *(undefined1 *)(uVar6 + 0x19f6) = *(undefined1 *)(param_2 + 10);
  *(undefined1 *)(uVar6 + 0x19f7) = *(undefined1 *)(param_2 + 0xb);
  *(undefined **)(uVar6 + 0x1918) = &DAT_1007049d0;
  *(undefined **)(uVar6 + 0x1920) = &DAT_100704a10;
  *(undefined **)(uVar6 + 0x1928) = &DAT_100704a50;
  *(undefined4 *)(uVar6 + 0x1960) = DAT_100704a90;
  puVar5 = &DAT_100704a8c;
  lVar4 = 0x659;
  do {
    *(undefined4 *)(uVar6 + lVar4 * 4) = *puVar5;
    puVar5 = puVar5 + -1;
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0x661);
  *(undefined **)(uVar6 + 0x1930) = &DAT_100704d30;
  *(undefined **)(uVar6 + 0x1938) = &DAT_100704db0;
  lVar4 = uVar6 + 0xf10;
  *(long *)(uVar6 + 0x1910) = lVar4;
  ___bzero(lVar4,0xa00);
  *(undefined4 *)(uVar6 + 0x19f0) = 0x280;
  *(long *)(uVar6 + 0x1940) = lVar4;
  *(ulong *)(uVar6 + 0x1948) = uVar6 + 0x1410;
  *param_4 = uVar6;
  *(undefined **)(uVar6 + 0x19e8) = PTR__vDSP_FFT16_copv_10082b578;
  return 0;
}

