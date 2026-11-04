// name: FUN_10017c1c0
// address: 10017c1c0

void FUN_10017c1c0(long param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  size_t sVar9;
  ulong uVar10;
  void *pvVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined1 auVar14 [16];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  
  if (*(long *)(param_1 + 8) != 0) {
    _CGContextSaveGState();
  }
  FUN_1001ad03c(&local_88);
  FUN_1001ad03c(&uStack_60);
  local_68 = *(undefined4 *)(param_1 + 0x60);
  local_88 = *(undefined8 *)(param_1 + 0x40);
  uStack_80 = *(undefined8 *)(param_1 + 0x48);
  local_78 = *(undefined8 *)(param_1 + 0x50);
  uStack_70 = *(undefined8 *)(param_1 + 0x58);
  uStack_60 = *(undefined4 *)(param_1 + 0x68);
  uStack_5c = *(undefined4 *)(param_1 + 0x6c);
  uVar4 = *(undefined8 *)(param_1 + 0x68);
  uStack_58 = *(undefined4 *)(param_1 + 0x70);
  uStack_54 = *(undefined4 *)(param_1 + 0x74);
  uVar5 = *(undefined8 *)(param_1 + 0x70);
  uStack_50 = *(undefined4 *)(param_1 + 0x78);
  uStack_4c = *(undefined4 *)(param_1 + 0x7c);
  uVar6 = *(undefined8 *)(param_1 + 0x78);
  uStack_48 = *(undefined4 *)(param_1 + 0x80);
  uStack_44 = *(undefined4 *)(param_1 + 0x84);
  uVar3 = *(undefined8 *)(param_1 + 0x80);
  local_40 = *(undefined4 *)(param_1 + 0x88);
  local_38 = *(undefined4 *)(param_1 + 0x34);
  uStack_34 = CONCAT31(uStack_34._1_3_,*(undefined1 *)(param_1 + 0x30));
  puVar13 = *(undefined8 **)(param_1 + 0x20);
  if (puVar13 < *(undefined8 **)(param_1 + 0x28)) {
    puVar13[10] = CONCAT44(uStack_34,local_38);
    puVar13[8] = uVar3;
    puVar13[9] = CONCAT44(uStack_3c,local_40);
    puVar13[6] = uVar5;
    puVar13[7] = uVar6;
    puVar13[4] = CONCAT44(uStack_64,local_68);
    puVar13[5] = uVar4;
    puVar13[2] = local_78;
    puVar13[3] = uStack_70;
    *puVar13 = local_88;
    puVar13[1] = uStack_80;
    puVar13 = puVar13 + 0xb;
  }
  else {
    lVar12 = (long)puVar13 - *(long *)(param_1 + 0x18) >> 3;
    uVar8 = lVar12 * 0x2e8ba2e8ba2e8ba3 + 1;
    if (0x2e8ba2e8ba2e8ba < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_10017c39c();
    }
    lVar7 = (long)*(undefined8 **)(param_1 + 0x28) - *(long *)(param_1 + 0x18) >> 3;
    uVar10 = lVar7 * 0x5d1745d1745d1746;
    if (uVar8 < uVar10) {
      uVar8 = uVar10;
    }
    uVar10 = 0x2e8ba2e8ba2e8ba;
    if ((ulong)(lVar7 * 0x2e8ba2e8ba2e8ba3) < 0x1745d1745d1745d) {
      uVar10 = uVar8;
    }
    if (uVar10 == 0) {
      auVar14 = ZEXT816(0);
    }
    else {
      auVar14 = FUN_10017c3ac(param_1 + 0x28);
    }
    lVar7 = auVar14._0_8_;
    lVar12 = lVar12 * 8;
    puVar1 = (undefined8 *)(lVar7 + lVar12);
    puVar13 = puVar1 + 0xb;
    puVar1[10] = CONCAT44(uStack_34,local_38);
    puVar1[8] = CONCAT44(uStack_44,uStack_48);
    puVar1[9] = CONCAT44(uStack_3c,local_40);
    puVar1[6] = CONCAT44(uStack_54,uStack_58);
    puVar1[7] = CONCAT44(uStack_4c,uStack_50);
    puVar1[4] = CONCAT44(uStack_64,local_68);
    puVar1[5] = CONCAT44(uStack_5c,uStack_60);
    puVar1[2] = local_78;
    puVar1[3] = uStack_70;
    *puVar1 = local_88;
    puVar1[1] = uStack_80;
    sVar9 = *(long *)(param_1 + 0x20) - (long)*(void **)(param_1 + 0x18);
    pvVar11 = (void *)((lVar7 + lVar12) - sVar9);
    _memcpy(pvVar11,*(void **)(param_1 + 0x18),sVar9);
    pvVar2 = *(void **)(param_1 + 0x18);
    *(void **)(param_1 + 0x18) = pvVar11;
    *(undefined8 **)(param_1 + 0x20) = puVar13;
    *(long *)(param_1 + 0x28) = auVar14._8_8_ * 0x58 + lVar7;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
  }
  *(undefined8 **)(param_1 + 0x20) = puVar13;
  return;
}

