// name: FUN_100106168
// address: 100106168

undefined8
FUN_100106168(long param_1,long param_2,undefined8 *param_3,ulong *param_4,undefined1 param_5)

{
  char cVar1;
  char cVar2;
  float fVar3;
  byte bVar4;
  void *pvVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined1 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  bool bVar13;
  
  pvVar5 = _malloc(0x1a80);
  *param_3 = pvVar5;
  fVar3 = DAT_1007004c0;
  uVar12 = (long)pvVar5 + 0x7fU & 0xffffffffffffff80;
  cVar1 = *(char *)(param_1 + 0x2c);
  if (cVar1 == '\0') {
    _vDSP_vsmul(&DAT_1007004d0,1,&DAT_1007009e4,uVar12,1,0x144);
    *(undefined4 *)(uVar12 + 0x510) = 0;
    puVar7 = (undefined8 *)(uVar12 + 0x4e4);
    lVar6 = 0xa0c;
    do {
      *(ulong *)((uVar12 - 0xc) + lVar6) = CONCAT44((int)*puVar7,(int)((ulong)*puVar7 >> 0x20));
      *(undefined4 *)((uVar12 - 4) + lVar6) = *(undefined4 *)((long)puVar7 + -4);
      *(undefined4 *)(uVar12 + lVar6) = *(undefined4 *)(puVar7 + -1);
      puVar7 = puVar7 + -2;
      lVar6 = lVar6 + 0x10;
    } while ((int)lVar6 != 0xeec);
    puVar8 = (undefined4 *)(uVar12 + 0xee0);
    lVar6 = 2;
    do {
      *puVar8 = *(undefined4 *)(uVar12 + lVar6 * 4);
      puVar8 = puVar8 + 1;
      bVar13 = lVar6 != 0;
      lVar6 = lVar6 + -1;
    } while (bVar13);
    *(ulong *)(uVar12 + 0xf00) = uVar12;
    cVar2 = *(char *)(param_1 + 0x2c);
    *(undefined1 *)(uVar12 + 0x19f4) = 0x40;
    *(undefined4 *)(uVar12 + 0x19f0) = 0x280;
    *(undefined1 *)(uVar12 + 0x19f5) = param_5;
    *(undefined1 *)(uVar12 + 0x19f6) = *(undefined1 *)(param_2 + 10);
    uVar11 = 0xa00;
    bVar4 = 0x20;
    if (cVar2 == '\0') {
      uVar9 = *(undefined1 *)(param_2 + 0xb);
    }
    else {
      uVar9 = 0x20;
    }
  }
  else {
    lVar6 = 0;
    do {
      *(float *)(uVar12 + lVar6) = *(float *)((long)&DAT_1007004d0 + lVar6) * fVar3;
      lVar6 = lVar6 + 4;
    } while (lVar6 != 0x500);
    *(ulong *)(uVar12 + 0xf00) = uVar12;
    *(undefined1 *)(uVar12 + 0x19f4) = 0x20;
    *(undefined4 *)(uVar12 + 0x19f0) = 0x140;
    *(undefined1 *)(uVar12 + 0x19f5) = param_5;
    *(undefined1 *)(uVar12 + 0x19f6) = *(undefined1 *)(param_2 + 10);
    uVar9 = 0x20;
    uVar11 = 0x500;
    bVar4 = 0x10;
  }
  *(undefined1 *)(uVar12 + 0x19f7) = uVar9;
  if (cVar1 == '\0') {
    *(undefined **)(uVar12 + 0x1918) = &DAT_100704aa0;
    *(undefined **)(uVar12 + 0x1920) = &DAT_100704b20;
    *(undefined **)(uVar12 + 0x1928) = &DAT_100704ba0;
    *(undefined4 *)(uVar12 + 0x1960) = *(undefined4 *)(&DAT_100704ba0 + (ulong)bVar4 * 4);
    puVar8 = &DAT_100704bdc + (bVar4 - 0x10);
    uVar10 = 0;
    do {
      *(undefined4 *)(uVar12 + 0x1964 + uVar10 * 4) = *puVar8;
      uVar10 = uVar10 + 1;
      puVar8 = puVar8 + -1;
    } while (bVar4 >> 1 != uVar10);
  }
  else {
    *(undefined **)(uVar12 + 0x1918) = &DAT_1007049d0;
    *(undefined **)(uVar12 + 0x1920) = &DAT_100704a10;
    *(undefined **)(uVar12 + 0x1928) = &DAT_100704a50;
    *(undefined **)(uVar12 + 0x1930) = &DAT_100704c30;
    *(undefined **)(uVar12 + 0x1938) = &DAT_100704cb0;
  }
  *(ulong *)(uVar12 + 0x1910) = uVar12 + 0xf10;
  ___bzero(uVar12 + 0xf10,uVar11);
  *param_4 = uVar12;
  *(undefined **)(uVar12 + 0x19e8) = PTR__vDSP_FFT32_copv_10082b580;
  return 0;
}

