// name: FUN_10032b636
// address: 10032b636

long FUN_10032b636(long param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  size_t sVar8;
  long lVar9;
  void *pvVar10;
  void *pvVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  
  puVar1 = *(undefined8 **)(*param_2 + 8);
  if (puVar1 == (undefined8 *)0x0) {
    uVar13 = 0;
  }
  else {
    uVar13 = *puVar1;
    if ((*(byte *)((long)puVar1 + 0xc5) & 4) != 0) {
      uVar14 = *(undefined8 *)(puVar1[0xe] + 0x38);
      goto LAB_10032b66c;
    }
  }
  uVar14 = 0;
LAB_10032b66c:
  uVar2 = *(undefined8 *)(*param_2 + 0x28);
  plVar3 = *(long **)(param_1 + 0x10);
  puVar1 = (undefined8 *)plVar3[1];
  if (puVar1 < (undefined8 *)plVar3[2]) {
    *puVar1 = uVar2;
    puVar1[1] = uVar13;
    puVar1[2] = uVar14;
    puVar1[3] = 0;
    lVar7 = (long)puVar1 + 0x22;
  }
  else {
    uVar12 = 0x787878787878787;
    pvVar11 = (void *)*plVar3;
    sVar8 = (long)puVar1 - (long)pvVar11;
    lVar9 = (long)sVar8 >> 1;
    uVar6 = lVar9 * -0xf0f0f0f0f0f0f0f + 1;
    if (0x787878787878787 < uVar6) {
      FUN_10032b526();
      lVar9 = 0;
      if (*(char **)((long)pvVar11 + 8) ==
          "ZN28AMPLPlaylistChangeDataPacker22AddPlaylistItemsToDictER14ITCFDictionaryP8PlaylistE3$_0"
         ) {
        lVar9 = uVar12 + 8;
      }
      return lVar9;
    }
    lVar5 = plVar3[2] - (long)pvVar11 >> 1;
    uVar4 = lVar5 * -0x1e1e1e1e1e1e1e1e;
    if (uVar6 < uVar4) {
      uVar6 = uVar4;
    }
    if ((ulong)(lVar5 * -0xf0f0f0f0f0f0f0f) < 0x3c3c3c3c3c3c3c3) {
      uVar12 = uVar6;
    }
    if (uVar12 == 0) {
      auVar15 = ZEXT816(0);
    }
    else {
      auVar15 = FUN_10032b536();
      pvVar11 = (void *)*plVar3;
      sVar8 = plVar3[1] - (long)pvVar11;
    }
    lVar5 = auVar15._0_8_;
    lVar9 = lVar9 * 2;
    puVar1 = (undefined8 *)(lVar5 + lVar9);
    lVar7 = (long)puVar1 + 0x22;
    *puVar1 = uVar2;
    puVar1[1] = uVar13;
    puVar1[2] = uVar14;
    puVar1[3] = 0;
    pvVar10 = (void *)((lVar5 + lVar9) - sVar8);
    _memcpy(pvVar10,pvVar11,sVar8);
    pvVar11 = (void *)*plVar3;
    *plVar3 = (long)pvVar10;
    plVar3[1] = lVar7;
    plVar3[2] = auVar15._8_8_ * 0x22 + lVar5;
    if (pvVar11 != (void *)0x0) {
      operator_delete(pvVar11);
    }
  }
  plVar3[1] = lVar7;
  return 0;
}

