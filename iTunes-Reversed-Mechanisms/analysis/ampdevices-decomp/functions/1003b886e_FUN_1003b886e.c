// name: FUN_1003b886e
// address: 1003b886e

undefined8 FUN_1003b886e(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  long lVar10;
  char cVar11;
  undefined4 uVar12;
  int iVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulong uVar18;
  ulong uVar19;
  int iVar20;
  uint uVar21;
  ulong uVar22;
  ulong uVar23;
  int iVar24;
  int local_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined2 uStack_8c;
  undefined2 uStack_8a;
  undefined6 uStack_88;
  undefined2 uStack_82;
  long alStack_80 [2];
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar10 = DAT_1008c75a0;
  while (lVar10 != 0) {
    lVar1 = *(long *)(lVar10 + 8);
    plVar14 = (long *)FUN_1001c6429(0x2a0);
    if (plVar14 == (long *)0x0) {
      uVar15 = FUN_1001cc310();
      cVar11 = _os_log_type_enabled(uVar15,0x10);
      if (cVar11 != '\0') {
        local_98._0_4_ = 0x8220202;
        local_98._4_4_ = 0x7a0a90;
        uStack_90 = 1;
        uStack_8c = 0x822;
        uStack_8a = 0x90dd;
        uStack_88 = 0x1007c;
        __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: (%{public}s)",&local_98,0x16);
      }
      FUN_1001782e9(0,0);
      uVar15 = 0xffffff94;
      goto LAB_1003b8c13;
    }
    lVar2 = *(long *)(lVar10 + 0x18);
    plVar14[5] = *(long *)(lVar2 + 0x30);
    uVar12 = *(undefined4 *)(lVar2 + 0x10);
    uVar4 = *(undefined4 *)(lVar2 + 0x14);
    uVar5 = *(undefined4 *)(lVar2 + 0x18);
    uVar6 = *(undefined4 *)(lVar2 + 0x1c);
    uVar7 = *(undefined4 *)(lVar2 + 0x24);
    uVar8 = *(undefined4 *)(lVar2 + 0x28);
    uVar9 = *(undefined4 *)(lVar2 + 0x2c);
    *(undefined4 *)(plVar14 + 3) = *(undefined4 *)(lVar2 + 0x20);
    *(undefined4 *)((long)plVar14 + 0x1c) = uVar7;
    *(undefined4 *)(plVar14 + 4) = uVar8;
    *(undefined4 *)((long)plVar14 + 0x24) = uVar9;
    *(undefined4 *)(plVar14 + 1) = uVar12;
    *(undefined4 *)((long)plVar14 + 0xc) = uVar4;
    *(undefined4 *)(plVar14 + 2) = uVar5;
    *(undefined4 *)((long)plVar14 + 0x14) = uVar6;
    plVar14[0x2f] = *(long *)(lVar10 + 0x178);
    uVar12 = FUN_1001ea5dc();
    *(undefined4 *)(plVar14 + 0x30) = uVar12;
    *(undefined1 *)((long)plVar14 + 0x299) = *(undefined1 *)(lVar10 + 0x180);
    FUN_1001dfb1f(lVar10 + 0x38,plVar14 + 7,0x3f);
    FUN_1001e3c85(lVar10 + 0x78,plVar14 + 0xf,0x7f);
    FUN_1001e3c85(lVar10 + 0xf8,plVar14 + 0x1f,0x7f);
    lVar2 = *(long *)(lVar10 + 0x18);
    if (*(int *)(lVar2 + 0x68) ==
        *(int *)(lVar2 + 100) + *(int *)(lVar2 + 0x68) + *(int *)(lVar2 + 0x6c)) {
      FUN_1003b8c8d();
    }
    else {
      plVar14[6] = lVar10;
    }
    puVar17 = DAT_1008c75b0;
    if (*plVar14 != 0) {
      uVar15 = FUN_1001cc310();
      cVar11 = _os_log_type_enabled(uVar15,0x10);
      if (cVar11 != '\0') {
        local_98._0_4_ = 0x8220202;
        local_98._4_4_ = 0x7a0a90;
        uStack_90 = 1;
        uStack_8c = 0x822;
        uStack_8a = 0x4952;
        uStack_88 = 0x1007a;
        __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: (%{public}s)",&local_98,0x16);
      }
      FUN_1001782e9(0,0);
    }
    puVar16 = &DAT_1008c75b0;
    for (; puVar17 != (undefined8 *)0x0; puVar17 = (undefined8 *)*puVar17) {
      puVar16 = puVar17;
    }
    *plVar14 = 0;
    *puVar16 = plVar14;
    lVar10 = lVar1;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  alStack_80[1] = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_82 = 0;
  alStack_80[0] = 0;
  local_98._0_4_ = 0;
  local_98._4_4_ = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  uStack_8a = 0;
  uVar23 = 0;
  puVar17 = DAT_1008c75b0;
  if (DAT_1008c75b0 != (undefined8 *)0x0) {
    do {
      puVar16 = (undefined8 *)*puVar17;
      *puVar17 = (&local_98)[uVar23 * 3];
      (&local_98)[uVar23 * 3] = puVar17;
      *(int *)(&uStack_88 + uVar23 * 3) = *(int *)(&uStack_88 + uVar23 * 3) + 1;
      uVar23 = (ulong)((uint)uVar23 ^ 1);
      puVar17 = puVar16;
    } while (puVar16 != (undefined8 *)0x0);
    if ((int)uStack_70 != 0) {
      local_9c = 1;
      uVar22 = 0;
LAB_1003b8a91:
      uVar21 = (uint)uVar22 ^ 2;
      uVar23 = (ulong)uVar21;
      uVar19 = (ulong)(uVar21 + 1);
      *(undefined4 *)(&uStack_88 + uVar19 * 3) = 0;
      *(undefined4 *)(&uStack_88 + uVar23 * 3) = 0;
      if (*(int *)(&uStack_88 + uVar22 * 3) != 0) {
        uVar18 = uVar23;
LAB_1003b8ae4:
        iVar24 = local_9c;
        iVar20 = local_9c;
        do {
          if ((iVar24 == 0) || (*(int *)(&uStack_88 + uVar22 * 3) == 0)) {
            if ((iVar20 == 0) || (*(int *)(&uStack_70 + uVar22 * 3) == 0)) goto LAB_1003b8b7a;
LAB_1003b8b4b:
            iVar20 = iVar20 + -1;
            plVar14 = alStack_80 + uVar22 * 3;
          }
          else {
            if (((iVar20 != 0) && (*(int *)(&uStack_70 + uVar22 * 3) != 0)) &&
               (iVar13 = FUN_1001e4608((&local_98)[uVar22 * 3] + 0xf8,alStack_80[uVar22 * 3] + 0xf8,
                                       0), 0 < iVar13)) goto LAB_1003b8b4b;
            iVar24 = iVar24 + -1;
            plVar14 = &local_98 + uVar22 * 3;
          }
          *(int *)(plVar14 + 2) = (int)plVar14[2] + -1;
          plVar3 = (long *)*plVar14;
          *plVar14 = *plVar3;
          iVar13 = *(int *)(&uStack_88 + uVar18 * 3);
          plVar14 = &local_98 + uVar18 * 3;
          if (iVar13 != 0) {
            plVar14 = *(long **)(&uStack_90 + uVar18 * 6);
          }
          *plVar14 = (long)plVar3;
          *(long **)(&uStack_90 + uVar18 * 6) = plVar3;
          *(int *)(&uStack_88 + uVar18 * 3) = iVar13 + 1;
        } while( true );
      }
      goto LAB_1003b8be0;
    }
    uVar23 = 0;
  }
LAB_1003b8be0:
  if (1 < *(uint *)(&uStack_88 + uVar23 * 3)) {
    **(undefined8 **)(&uStack_90 + uVar23 * 6) = 0;
  }
  DAT_1008c75b0 = (undefined8 *)(&local_98)[uVar23 * 3];
  uVar15 = 0;
  FUN_1003b882b(0);
LAB_1003b8c13:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar15;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
LAB_1003b8b7a:
  uVar18 = (ulong)((uint)uVar18 ^ 1);
  if (*(int *)(&uStack_88 + uVar22 * 3) == 0) goto code_r0x0001003b8b8e;
  goto LAB_1003b8ae4;
code_r0x0001003b8b8e:
  local_9c = local_9c * 2;
  uVar22 = uVar23;
  if (*(int *)(&uStack_88 + uVar19 * 3) == 0) goto LAB_1003b8be0;
  goto LAB_1003b8a91;
}

