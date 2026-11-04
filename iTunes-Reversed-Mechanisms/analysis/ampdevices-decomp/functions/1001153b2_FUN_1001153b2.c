// name: FUN_1001153b2
// address: 1001153b2

undefined1 * FUN_1001153b2(long *param_1,long param_2,long param_3,uint param_4)

{
  float fVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  byte bVar11;
  ulong uVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte abStack_60 [7];
  byte local_59;
  byte local_58 [32];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  pbVar4 = *(byte **)(param_2 + 0x18);
  pbVar5 = *(byte **)(pbVar4 + 0x20);
  bVar15 = *pbVar4;
  bVar7 = *(byte *)(param_2 + 0xf);
  bVar2 = *pbVar5;
  bVar6 = pbVar5[bVar15];
  if ((ulong)bVar7 == 0) {
    pbVar4[0xc] = 0;
    pbVar4[0xd] = bVar6 - bVar2;
    bVar11 = 1;
  }
  else {
    if (param_4 == 0) {
      uVar12 = 0;
    }
    else {
      bVar11 = 0;
      do {
        abStack_60[bVar11] = *(char *)(param_3 + 2 + (ulong)bVar11 * 8) - bVar2;
        bVar11 = bVar11 + 1;
        uVar12 = (ulong)bVar11;
      } while (bVar11 < param_4);
    }
    abStack_60[uVar12] = bVar6 - bVar2;
    bVar11 = 1;
    if (1 < (byte)(bVar15 + 1)) {
      bVar11 = bVar15 + 1;
    }
    uVar12 = 0;
    do {
      local_58[uVar12] = pbVar5[uVar12] - bVar2;
      uVar12 = uVar12 + 1;
    } while (bVar11 != uVar12);
    local_59 = bVar6;
    if (1 < param_4) {
      bVar6 = 1;
      uVar12 = 1;
      do {
        local_58[uVar12 + bVar15] = abStack_60[bVar6];
        bVar6 = bVar6 + 1;
        uVar12 = (ulong)bVar6;
      } while (bVar6 < param_4);
    }
    bVar15 = (bVar15 + (char)param_4) - 1;
    (**(code **)(*param_1 + 0x68))(param_1,local_58);
    if (bVar15 != 0) {
      fVar1 = *(float *)(&DAT_100705e50 + (ulong)bVar7 * 4);
      bVar7 = 0;
      bVar6 = 1;
      bVar11 = bVar15;
LAB_1001154e0:
      while( true ) {
        bVar13 = local_58[bVar6];
        bVar3 = local_58[bVar7];
        if (DAT_100701d00 <=
            (*(float *)((long)param_1 + (ulong)((uint)bVar13 + (uint)bVar2) * 4 + 0xc150) -
            *(float *)((long)param_1 + (ulong)((uint)bVar3 + (uint)bVar2) * 4 + 0xc150)) * fVar1)
        break;
        if (bVar13 != bVar3) {
          bVar14 = 0;
          do {
            if (bVar13 == abStack_60[bVar14]) {
              bVar13 = 0;
              goto LAB_100115548;
            }
            bVar14 = bVar14 + 1;
          } while (bVar14 <= param_4);
        }
        local_58[bVar6] = local_59;
        bVar6 = bVar6 + 1;
        bVar11 = bVar11 - 1;
        if (bVar15 < bVar6) goto LAB_100115575;
      }
      goto LAB_100115565;
    }
    bVar11 = 0;
LAB_100115575:
    (**(code **)(*param_1 + 0x68))(param_1,local_58,bVar15 + 1);
    puVar9 = (undefined1 *)0xfffffffe;
    if (0xb < (byte)(bVar11 - 1)) goto LAB_1001155e9;
    uVar12 = 0;
    do {
      pbVar4[uVar12 + 0xc] = local_58[uVar12];
      uVar12 = uVar12 + 1;
    } while ((byte)(bVar11 + 1) != uVar12);
  }
  if (*(long *)(param_2 + 0x18) == 0) {
    uVar10 = FUN_1001cc310();
    cVar8 = _os_log_type_enabled(uVar10,0x10);
    if (cVar8 != '\0') {
      FUN_100669f1c(uVar10);
    }
    FUN_1001782e9(0,0);
    puVar9 = &DAT_ffffff30;
  }
  else {
    *(byte *)(*(long *)(param_2 + 0x18) + 0x19) = bVar11;
    puVar9 = (undefined1 *)0x0;
  }
LAB_1001155e9:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return puVar9;
  while (bVar13 = bVar13 + 1, bVar13 <= param_4) {
LAB_100115548:
    if (bVar3 == abStack_60[bVar13]) goto LAB_100115565;
  }
  local_58[bVar7] = local_59;
  bVar11 = bVar11 - 1;
LAB_100115565:
  bVar13 = bVar6 + 1;
  bVar7 = bVar6;
  bVar6 = bVar13;
  if (bVar15 < bVar13) goto LAB_100115575;
  goto LAB_1001154e0;
}

