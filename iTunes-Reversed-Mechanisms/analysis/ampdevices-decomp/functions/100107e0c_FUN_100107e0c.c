// name: FUN_100107e0c
// address: 100107e0c

undefined8 FUN_100107e0c(long param_1,uint param_2,undefined8 param_3,uint param_4,uint param_5)

{
  uint *puVar1;
  void *pvVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  int iVar9;
  undefined1 *puVar10;
  long *plVar11;
  uint uVar12;
  void *pvVar13;
  ulong uVar14;
  void *pvVar15;
  long lVar16;
  ulong uVar17;
  undefined1 *puVar18;
  undefined1 auVar19 [16];
  long alStack_c0 [5];
  long local_98;
  undefined1 *local_90;
  uint *local_88;
  uint *local_80;
  long local_78;
  undefined1 *local_70;
  void *local_68;
  void *local_60;
  long local_58;
  long local_50;
  ulong local_48;
  uint local_40;
  uint local_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar7 = 0xfffffffe;
  plVar11 = &local_98;
  if (3 < param_5) goto LAB_100108248;
  uVar17 = (ulong)param_4;
  uVar8 = (ulong)param_2;
  plVar11 = &local_98;
  if ((ulong)(*(long *)(param_1 + 0x40) - *(long *)(param_1 + 0x38)) <= uVar8) goto LAB_100108248;
  puVar1 = (uint *)(param_1 + 0x48);
  local_60 = (void *)((ulong)(param_2 * *(int *)(param_1 + 0x48)) * 4 + *(long *)(param_1 + 0x28));
  local_80 = (uint *)(param_1 + 0x78);
  local_40 = (uint)(*(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x78)) >> 1;
  alStack_c0[4] = 0x100107e93;
  local_90 = (undefined1 *)&local_98;
  uVar12 = param_5;
  auVar19 = FUN_100108310();
  pvVar13 = auVar19._8_8_;
  lVar6 = -(auVar19._0_8_ + 0xfU & 0xfffffffffffffff0);
  local_70 = (undefined1 *)((long)&local_98 + lVar6);
  puVar18 = (undefined1 *)((long)&local_98 + lVar6);
  puVar10 = (undefined1 *)((long)&local_98 + lVar6);
  local_88 = puVar1;
  local_68 = pvVar13;
  if (uVar12 == 2) {
    lVar5 = *(long *)(param_1 + 8 + (ulong)param_4 * 0x10);
    uVar12 = *(uint *)(param_1 + 0x78);
    local_58 = (long)&local_98 + (ulong)*(uint *)(param_1 + 0x48) * 4 + lVar6;
    local_3c = param_4;
    *(undefined8 *)((long)alStack_c0 + lVar6 + 0x20) = 0x100107ee7;
    ___bzero((long)&local_98 + lVar6,(ulong)uVar12 << 2);
    puVar1 = local_80;
    local_98 = lVar5 + -4;
    iVar9 = 8;
    lVar16 = *(long *)(param_1 + 8 + (ulong)*(byte *)(*(long *)(param_1 + 0x38) + uVar8) * 0x10);
    local_78 = lVar5;
    local_50 = param_1;
    local_48 = uVar8;
    do {
      lVar5 = local_58;
      *(undefined8 *)((long)alStack_c0 + lVar6 + 0x20) = 0x100107f2b;
      FUN_1001192a0(puVar1,pvVar13,lVar5);
      *(ulong *)((long)alStack_c0 + lVar6 + 0x18) = (ulong)*puVar1;
      *(undefined8 *)((long)alStack_c0 + lVar6 + 0x10) = 1;
      *(undefined1 **)((long)alStack_c0 + lVar6 + 8) = puVar18;
      *(undefined8 *)((long)alStack_c0 + lVar6) = 0x100107f56;
      _vDSP_vma(pvVar13,1,lVar16,1,puVar18,1);
      lVar16 = local_58;
      uVar8 = (ulong)*puVar1;
      pvVar13 = (void *)((long)pvVar13 + uVar8 * 4);
      puVar18 = puVar18 + uVar8 * 4;
      lVar5 = local_98 + uVar8 * 4;
      *(ulong *)((long)alStack_c0 + lVar6 + 0x18) = uVar8;
      *(undefined8 *)((long)alStack_c0 + lVar6 + 0x10) = 0x100107f94;
      _vDSP_vmul(lVar16,1,lVar5,0xffffffffffffffff,puVar18,1);
      uVar12 = local_40;
      pvVar2 = local_60;
      pvVar15 = local_68;
      iVar9 = iVar9 + -1;
      lVar16 = local_78;
    } while (iVar9 != 0);
    uVar8 = (ulong)local_40;
    *(undefined8 *)((long)alStack_c0 + lVar6 + 0x20) = 0x100107fc9;
    _memcpy(pvVar15,pvVar2,uVar8 * 4);
    puVar18 = local_70;
    puVar1 = local_88;
    *(ulong *)((long)alStack_c0 + lVar6 + 0x18) = (ulong)(*local_88 - uVar12);
    *(undefined8 *)((long)alStack_c0 + lVar6 + 0x10) = 0x100107ffc;
    _vDSP_vadd(puVar18,1,(void *)((long)pvVar2 + uVar8 * 4),1,(void *)((long)pvVar15 + uVar8 * 4),1)
    ;
    uVar4 = *puVar1;
    *(undefined8 *)((long)alStack_c0 + lVar6 + 0x20) = 0x100108019;
    _memcpy(pvVar2,puVar18 + uVar8 * -4 + (ulong)uVar4 * 4,(ulong)(uVar4 - uVar12) << 2);
    uVar12 = *puVar1;
    *(undefined8 *)((long)alStack_c0 + lVar6 + 0x20) = 0x10010802b;
    ___bzero((long)pvVar2 + uVar8 * -4 + (ulong)uVar12 * 4,uVar8 * 4);
    uVar17 = (ulong)local_3c;
    param_1 = local_50;
    uVar8 = local_48;
  }
  else {
    local_70 = (undefined1 *)((long)&local_98 + lVar6);
    *(undefined8 *)((long)alStack_c0 + lVar6 + 0x20) = 0x10010804a;
    FUN_1001192a0(puVar1,pvVar13,(long)&local_98 + lVar6);
    pvVar15 = local_60;
    pvVar13 = local_68;
    local_58 = param_1 + 8;
    bVar3 = *(byte *)(*(long *)(param_1 + 0x38) + uVar8);
    if (param_5 == 3) {
      local_78 = *(long *)(local_58 + (ulong)bVar3 * 0x10);
      uVar14 = (ulong)local_40;
      local_50 = param_1;
      *(undefined8 *)((long)alStack_c0 + lVar6 + 0x20) = 0x100108090;
      _memcpy(pvVar13,pvVar15,uVar14 * 4);
      pvVar15 = local_60;
      lVar5 = local_78;
      puVar1 = local_80;
      pvVar13 = (void *)((long)pvVar13 + uVar14 * 4);
      pvVar2 = (void *)((long)local_60 + uVar14 * 4);
      local_48 = uVar8;
      local_3c = param_4;
      *(ulong *)((long)alStack_c0 + lVar6 + 0x18) = (ulong)*local_80;
      *(undefined8 *)((long)alStack_c0 + lVar6 + 0x10) = 1;
      *(void **)((long)alStack_c0 + lVar6 + 8) = pvVar13;
      *(undefined8 *)((long)alStack_c0 + lVar6) = 0x1001080d3;
      _vDSP_vma(pvVar13,1,lVar5,1,pvVar2,1);
      uVar8 = local_48;
      uVar12 = *puVar1;
      pvVar13 = (void *)((long)pvVar13 + (ulong)uVar12 * 4);
      uVar17 = (ulong)local_3c;
      *(ulong *)((long)alStack_c0 + lVar6 + 0x18) = uVar14;
      param_1 = local_50;
      *(undefined8 *)((long)alStack_c0 + lVar6 + 0x10) = 0x10010810f;
      _vDSP_vadd(pvVar13,1,(void *)((long)pvVar2 + (ulong)uVar12 * 4),1,pvVar13,1);
      puVar10 = (undefined1 *)((long)&local_98 + lVar6);
    }
    else {
      uVar7 = *(undefined8 *)(param_1 + 0x10 + (ulong)bVar3 * 0x10);
      *(ulong *)((long)alStack_c0 + lVar6 + 0x18) = (ulong)*puVar1;
      *(undefined8 *)((long)alStack_c0 + lVar6 + 0x10) = 1;
      *(void **)((long)alStack_c0 + lVar6 + 8) = pvVar13;
      *(undefined8 *)((long)alStack_c0 + lVar6) = 0x10010814c;
      _vDSP_vma(pvVar13,1,uVar7,1,pvVar15,1);
      puVar18 = local_70;
      if (param_5 == 1) {
        lVar5 = *(long *)(local_58 + (ulong)param_4 * 0x10);
        uVar14 = (ulong)local_40;
        local_50 = param_1;
        local_48 = uVar8;
        *(undefined8 *)((long)alStack_c0 + lVar6 + 0x20) = 0x10010818f;
        _memcpy(pvVar15,puVar18,uVar14 * 4);
        param_1 = local_50;
        puVar1 = local_80;
        uVar12 = *local_80;
        pvVar15 = (void *)((long)pvVar15 + uVar14 * 4);
        *(ulong *)((long)alStack_c0 + lVar6 + 0x18) = (ulong)uVar12;
        *(undefined8 *)((long)alStack_c0 + lVar6 + 0x10) = 0x1001081d1;
        _vDSP_vmul(puVar18 + uVar14 * 4,1,lVar5 + (ulong)uVar12 * 4 + -4,0xffffffffffffffff,pvVar15,
                   1);
        uVar8 = local_48;
        uVar12 = *puVar1;
        *(undefined8 *)((long)alStack_c0 + lVar6 + 0x20) = 0x1001081ee;
        _vDSP_vclr((void *)((long)pvVar15 + (ulong)uVar12 * 4),1,uVar14);
        goto LAB_100108237;
      }
    }
    puVar18 = local_70;
    lVar6 = *(long *)(local_58 + 8 + uVar17 * 0x10);
    uVar12 = *local_88;
    *(ulong *)(puVar10 + -0x10) = (ulong)uVar12;
    *(undefined8 *)(puVar10 + -0x18) = 0x100108233;
    _vDSP_vmul(puVar18,1,lVar6 + (ulong)uVar12 * 4 + -4,0xffffffffffffffff,pvVar15,1);
  }
LAB_100108237:
  *(char *)(*(long *)(param_1 + 0x38) + uVar8) = (char)uVar17;
  uVar7 = 0;
  plVar11 = (long *)local_90;
LAB_100108248:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((long)plVar11 + -8) = &UNK_10010826c;
  ___stack_chk_fail();
}

