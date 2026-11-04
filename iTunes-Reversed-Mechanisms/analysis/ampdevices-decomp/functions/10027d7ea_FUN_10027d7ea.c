// name: FUN_10027d7ea
// address: 10027d7ea

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_10027d7ea(long param_1,undefined8 *param_2,byte param_3,int param_4,undefined1 param_5)

{
  long *plVar1;
  uint uVar2;
  void *pvVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  void *pvVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  int iVar18;
  long lVar19;
  long *plVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined8 local_d0;
  long *local_c8;
  undefined8 *local_c0;
  long local_b8;
  undefined8 *local_b0;
  long local_a8;
  int local_9c;
  undefined4 local_98;
  int iStack_94;
  byte bStack_90;
  undefined1 uStack_8f;
  undefined2 uStack_8e;
  undefined2 uStack_8c;
  ushort uStack_8a;
  undefined2 uStack_88;
  undefined6 uStack_86;
  undefined8 uStack_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_58;
  undefined2 local_50;
  undefined6 uStack_4e;
  undefined1 uStack_48;
  undefined1 uStack_47;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  plVar1 = (long *)(param_1 + 0x138);
  local_b0 = param_2;
  local_a8 = param_1;
  local_9c = param_4;
  lVar7 = FUN_1002790a8(plVar1,&local_b0);
  if (lVar7 != 0) {
    if (param_4 == 0) {
      if (DAT_1008c7568 != -1) {
        _dispatch_once(&DAT_1008c7568,&PTR___NSConcreteGlobalBlock_100855dc0);
      }
      uVar9 = (*(code *)PTR__objc_retain_10082c7b8)(DAT_1008c7560);
      cVar5 = _os_log_type_enabled(uVar9,2);
      if (cVar5 != '\0') {
        local_98 = 0x8000100;
        iStack_94 = (int)local_b0;
        bStack_90 = (byte)((ulong)local_b0 >> 0x20);
        uStack_8f = (undefined1)((ulong)local_b0 >> 0x28);
        uStack_8e = (undefined2)((ulong)local_b0 >> 0x30);
        __os_log_impl(0x100000000,uVar9,2," open: 0x%16.16llx (skipped)",&local_98,0xc);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar9);
    }
    else {
      lVar8 = FUN_100285854(lVar7 + 0x28,param_4);
      if (DAT_1008c7568 != -1) {
        _dispatch_once(&DAT_1008c7568,&PTR___NSConcreteGlobalBlock_100855dc0);
      }
      uVar9 = (*(code *)PTR__objc_retain_10082c7b8)(DAT_1008c7560);
      if (lVar8 == 0) {
        cVar5 = _os_log_type_enabled(uVar9,2);
        if (cVar5 != '\0') {
          local_98 = 0x4000200;
          iStack_94 = local_9c;
          bStack_90 = 0;
          uStack_8f = 8;
          uStack_8e = SUB82(local_b0,0);
          uStack_8c = (undefined2)((ulong)local_b0 >> 0x10);
          uStack_8a = (ushort)((ulong)local_b0 >> 0x20);
          uStack_88 = (undefined2)((ulong)local_b0 >> 0x30);
          __os_log_impl(0x100000000,uVar9,2,"open: added clientID:%u for db:0x%16.16llx",&local_98,
                        0x12);
        }
        (*(code *)PTR__objc_release_10082c7b0)(uVar9);
        FUN_10028543e(lVar7 + 0x28,&local_9c);
      }
      else {
        cVar5 = _os_log_type_enabled(uVar9,0x10);
        if (cVar5 != '\0') {
          local_98 = 0x4000200;
          iStack_94 = local_9c;
          bStack_90 = 0;
          uStack_8f = 8;
          uStack_8e = SUB82(local_b0,0);
          uStack_8c = (undefined2)((ulong)local_b0 >> 0x10);
          uStack_8a = (ushort)((ulong)local_b0 >> 0x20);
          uStack_88 = (undefined2)((ulong)local_b0 >> 0x30);
          __os_log_impl(0x100000000,uVar9,0x10,
                        "open: clientID:%u has already opened db:0x%16.16llx !!",&local_98,0x12);
        }
        (*(code *)PTR__objc_release_10082c7b0)(uVar9);
      }
    }
    uVar6 = 0;
    goto LAB_10027e16e;
  }
  if (DAT_1008c7568 != -1) {
    _dispatch_once(&DAT_1008c7568,&PTR___NSConcreteGlobalBlock_100855dc0);
  }
  uVar9 = (*(code *)PTR__objc_retain_10082c7b8)(DAT_1008c7560);
  cVar5 = _os_log_type_enabled(uVar9,2);
  if (cVar5 != '\0') {
    uStack_8a = (ushort)param_3;
    local_98 = 0x8000200;
    iStack_94 = (int)local_b0;
    bStack_90 = (byte)((ulong)local_b0 >> 0x20);
    uStack_8f = (undefined1)((ulong)local_b0 >> 0x28);
    uStack_8e = (undefined2)((ulong)local_b0 >> 0x30);
    uStack_8c = 0x400;
    uStack_88 = 0;
    __os_log_impl(0x100000000,uVar9,2," open: 0x%16.16llx (%d)",&local_98,0x12);
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar9);
  iVar18 = (byte)(param_3 - 1) + 1;
  if (2 < (byte)(param_3 - 1)) {
    iVar18 = 0;
  }
  puVar14 = &local_d0;
  local_d0 = 0;
  cVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                    (*(undefined8 *)(local_a8 + 0x28),PTR_s_openDatabase_forKind_error__10088c5b8,
                     local_b0,iVar18);
  lVar7 = (*(code *)PTR__objc_retain_10082c7b8)(local_d0);
  if (cVar5 == '\x01') {
    local_78 = (undefined8 *)0x0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_86 = 0;
    uStack_80 = 0;
    local_68 = 0x3f800000;
    local_98 = 0;
    iStack_94 = 0;
    bStack_90 = 0;
    uStack_8f = 0;
    local_b8 = lVar7;
    FUN_100284286(&uStack_88);
    local_98 = SUB84(local_b0,0);
    iStack_94 = (int)((ulong)local_b0 >> 0x20);
    bStack_90 = param_3;
    uStack_8f = param_5;
    if (local_9c != 0) {
      if (DAT_1008c7568 != -1) {
        _dispatch_once(&DAT_1008c7568,&PTR___NSConcreteGlobalBlock_100855dc0);
      }
      uVar9 = (*(code *)PTR__objc_retain_10082c7b8)(DAT_1008c7560);
      cVar5 = _os_log_type_enabled(uVar9,2);
      if (cVar5 != '\0') {
        puVar14 = &local_58;
        local_58 = (long *)CONCAT44(local_9c,0x4000200);
        local_50 = 0x800;
        uStack_4e = SUB86(local_b0,0);
        uStack_48 = (undefined1)((ulong)local_b0 >> 0x30);
        uStack_47 = (undefined1)((ulong)local_b0 >> 0x38);
        __os_log_impl(0x100000000,uVar9,2,"open: added clientID:%u for db:0x%16.16llx",puVar14,0x12)
        ;
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar9);
      FUN_10028543e(&uStack_88,&local_9c);
    }
    puVar4 = local_b0;
    puVar16 = *(undefined8 **)(local_a8 + 0x140);
    if (puVar16 != (undefined8 *)0x0) {
      uVar10 = (long)puVar16 - ((ulong)puVar16 >> 1 & 0x5555555555555555);
      uVar10 = (uVar10 >> 2 & 0x3333333333333333) + (uVar10 & 0x3333333333333333);
      uVar10 = ((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      if (uVar10 >> 0x38 < 2) {
        puVar14 = (undefined8 *)((long)puVar16 - 1U & (ulong)local_b0);
      }
      else {
        puVar14 = local_b0;
        if (puVar16 <= local_b0) {
          puVar14 = (undefined8 *)((ulong)local_b0 % (ulong)puVar16);
        }
      }
      puVar17 = *(undefined8 **)(*plVar1 + (long)puVar14 * 8);
      if ((puVar17 != (undefined8 *)0x0) && (plVar11 = (long *)*puVar17, plVar11 != (long *)0x0)) {
        do {
          puVar17 = (undefined8 *)plVar11[1];
          if (puVar17 == local_b0) {
            if ((undefined8 *)plVar11[2] == local_b0) goto LAB_10027e061;
          }
          else {
            if ((byte)(uVar10 >> 0x38) < 2) {
              puVar17 = (undefined8 *)((ulong)puVar17 & (long)puVar16 - 1U);
            }
            else if (puVar16 <= puVar17) {
              puVar17 = (undefined8 *)((ulong)puVar17 % (ulong)puVar16);
            }
            if (puVar17 != puVar14) break;
          }
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
    }
    local_c0 = puVar14;
    plVar11 = operator_new(0x50);
    lVar7 = local_a8;
    local_c8 = (long *)(local_a8 + 0x148);
    local_50 = SUB82(local_c8,0);
    uStack_4e = (undefined6)((ulong)local_c8 >> 0x10);
    *plVar11 = 0;
    plVar11[1] = (long)puVar4;
    plVar11[2] = (long)puVar4;
    plVar11[5] = 0;
    plVar11[6] = 0;
    plVar11[7] = 0;
    plVar11[8] = 0;
    *(undefined4 *)(plVar11 + 9) = 0x3f800000;
    plVar11[3] = 0;
    *(undefined2 *)(plVar11 + 4) = 0;
    local_58 = plVar11;
    FUN_100284286(plVar11 + 5);
    uStack_48 = 1;
    fVar21 = (float)(*(long *)(lVar7 + 0x150) + 1);
    if ((puVar16 == (undefined8 *)0x0) ||
       (puVar14 = local_c0, (float)puVar16 * *(float *)(local_a8 + 0x158) < fVar21)) {
      uVar10 = 1;
      if ((undefined8 *)0x2 < puVar16) {
        uVar10 = (ulong)(((ulong)puVar16 & (long)puVar16 - 1U) != 0);
      }
      puVar16 = (undefined8 *)(uVar10 | (long)puVar16 * 2);
      auVar22 = ZEXT416((uint)(fVar21 / *(float *)(local_a8 + 0x158)));
      auVar22 = roundss(auVar22,auVar22,10);
      uVar10 = (ulong)auVar22._0_4_;
      puVar14 = (undefined8 *)
                ((long)(auVar22._0_4_ - _DAT_10070844c) & (long)uVar10 >> 0x3f | uVar10);
      if (puVar14 < puVar16) {
        puVar14 = puVar16;
      }
      puVar17 = (undefined8 *)0x2;
      if ((puVar14 != (undefined8 *)0x1) &&
         (puVar17 = puVar14, ((ulong)puVar14 & (long)puVar14 - 1U) != 0)) {
        puVar17 = (undefined8 *)std::__next_prime((ulong)puVar14);
      }
      puVar16 = *(undefined8 **)(local_a8 + 0x140);
      if (puVar16 < puVar17) {
LAB_10027de35:
        if ((ulong)puVar17 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1001082d0();
        }
        pvVar12 = operator_new((long)puVar17 * 8);
        pvVar3 = (void *)*plVar1;
        *plVar1 = (long)pvVar12;
        if (pvVar3 != (void *)0x0) {
          operator_delete(pvVar3);
        }
        *(undefined8 **)(local_a8 + 0x140) = puVar17;
        puVar14 = (undefined8 *)0x0;
        do {
          *(undefined8 *)(*plVar1 + (long)puVar14 * 8) = 0;
          puVar14 = (undefined8 *)((long)puVar14 + 1);
        } while (puVar17 != puVar14);
        plVar15 = (long *)*local_c8;
        puVar16 = puVar17;
        if (plVar15 != (long *)0x0) {
          puVar14 = (undefined8 *)plVar15[1];
          uVar10 = (long)puVar17 - ((ulong)puVar17 >> 1 & 0x5555555555555555);
          uVar10 = (uVar10 >> 2 & 0x3333333333333333) + (uVar10 & 0x3333333333333333);
          uVar10 = ((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
          if (uVar10 >> 0x38 < 2) {
            puVar14 = (undefined8 *)((ulong)puVar14 & (long)puVar17 - 1U);
          }
          else if (puVar17 <= puVar14) {
            puVar14 = (undefined8 *)((ulong)puVar14 % (ulong)puVar17);
          }
          *(long **)(*plVar1 + (long)puVar14 * 8) = local_c8;
          plVar20 = (long *)*plVar15;
          if (plVar20 != (long *)0x0) {
            do {
              puVar13 = (undefined8 *)plVar20[1];
              if ((byte)(uVar10 >> 0x38) < 2) {
                puVar13 = (undefined8 *)((ulong)puVar13 & (long)puVar17 - 1U);
              }
              else if (puVar17 <= puVar13) {
                puVar13 = (undefined8 *)((ulong)puVar13 % (ulong)puVar17);
              }
              if (puVar13 != puVar14) {
                if (*(long *)(*plVar1 + (long)puVar13 * 8) == 0) {
                  *(long **)(*plVar1 + (long)puVar13 * 8) = plVar15;
                  puVar14 = puVar13;
                }
                else {
                  *plVar15 = *plVar20;
                  *plVar20 = **(long **)(*plVar1 + (long)puVar13 * 8);
                  **(undefined8 **)(*plVar1 + (long)puVar13 * 8) = plVar20;
                  plVar20 = plVar15;
                }
              }
              plVar15 = plVar20;
              plVar20 = (long *)*plVar15;
            } while (plVar20 != (long *)0x0);
          }
        }
      }
      else {
        local_c0 = puVar17;
        if (puVar17 < puVar16) {
          auVar22 = ZEXT416((uint)((float)*(ulong *)(local_a8 + 0x150) /
                                  *(float *)(local_a8 + 0x158)));
          auVar22 = roundss(auVar22,auVar22,10);
          uVar10 = (ulong)auVar22._0_4_;
          puVar14 = (undefined8 *)
                    ((long)(auVar22._0_4_ - _DAT_10070844c) & (long)uVar10 >> 0x3f | uVar10);
          if ((puVar16 < (undefined8 *)0x3) ||
             (uVar10 = (long)puVar16 - ((ulong)puVar16 >> 1 & 0x5555555555555555),
             uVar10 = (uVar10 >> 2 & 0x3333333333333333) + (uVar10 & 0x3333333333333333),
             1 < (byte)(((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)))
          {
            puVar17 = (undefined8 *)std::__next_prime((ulong)puVar14);
          }
          else {
            lVar7 = 0x3f;
            if ((long)puVar14 - 1U != 0) {
              for (; (long)puVar14 - 1U >> lVar7 == 0; lVar7 = lVar7 + -1) {
              }
            }
            puVar17 = (undefined8 *)(1L << (-((byte)lVar7 ^ 0x3f) & 0x3f));
            if (puVar14 < (undefined8 *)0x2) {
              puVar17 = puVar14;
            }
          }
          if (puVar17 < local_c0) {
            puVar17 = local_c0;
          }
          if (puVar17 < puVar16) {
            if (puVar17 != (undefined8 *)0x0) goto LAB_10027de35;
            pvVar3 = (void *)*plVar1;
            *plVar1 = 0;
            if (pvVar3 != (void *)0x0) {
              operator_delete(pvVar3);
            }
            *(undefined8 *)(local_a8 + 0x140) = 0;
            puVar16 = (undefined8 *)0x0;
          }
          else {
            puVar16 = *(undefined8 **)(local_a8 + 0x140);
          }
        }
      }
      if (((ulong)puVar16 & (long)puVar16 - 1U) == 0) {
        puVar14 = (undefined8 *)((ulong)puVar4 & (long)puVar16 - 1U);
      }
      else {
        puVar14 = puVar4;
        if (puVar16 <= puVar4) {
          puVar14 = (undefined8 *)((ulong)puVar4 % (ulong)puVar16);
        }
      }
    }
    lVar7 = *plVar1;
    plVar15 = *(long **)(lVar7 + (long)puVar14 * 8);
    if (plVar15 == (long *)0x0) {
      *plVar11 = *local_c8;
      *local_c8 = (long)plVar11;
      *(long **)(lVar7 + (long)puVar14 * 8) = local_c8;
      if (*plVar11 != 0) {
        puVar14 = *(undefined8 **)(*plVar11 + 8);
        if (((ulong)puVar16 & (long)puVar16 - 1U) == 0) {
          puVar14 = (undefined8 *)((ulong)puVar14 & (long)puVar16 - 1U);
        }
        else if (puVar16 <= puVar14) {
          puVar14 = (undefined8 *)((ulong)puVar14 % (ulong)puVar16);
        }
        plVar15 = (long *)((long)puVar14 * 8 + *plVar1);
        goto LAB_10027e050;
      }
    }
    else {
      *plVar11 = *plVar15;
LAB_10027e050:
      *plVar15 = (long)plVar11;
    }
    *(long *)(local_a8 + 0x150) = *(long *)(local_a8 + 0x150) + 1;
LAB_10027e061:
    lVar7 = local_b8;
    *(ushort *)(plVar11 + 4) = CONCAT11(uStack_8f,bStack_90);
    plVar11[3] = CONCAT44(iStack_94,local_98);
    if (plVar11 + 3 != (long *)&local_98) {
      plVar1 = plVar11 + 5;
      *(undefined4 *)(plVar11 + 9) = local_68;
      lVar8 = plVar11[6];
      puVar14 = local_78;
      if (lVar8 != 0) {
        lVar19 = 0;
        do {
          *(undefined8 *)(*plVar1 + lVar19 * 8) = 0;
          lVar19 = lVar19 + 1;
        } while (lVar8 != lVar19);
        puVar16 = (undefined8 *)plVar11[7];
        plVar11[7] = 0;
        plVar11[8] = 0;
        while (puVar16 != (undefined8 *)0x0) {
          if (puVar14 == (undefined8 *)0x0) goto LAB_10027e196;
          uVar2 = *(uint *)(puVar14 + 2);
          *(uint *)(puVar16 + 2) = uVar2;
          puVar4 = (undefined8 *)*puVar16;
          puVar16[1] = (ulong)uVar2;
          uVar9 = FUN_100284324(plVar1,(ulong)uVar2,puVar16 + 2);
          FUN_10021bfdc(plVar1,puVar16,uVar9);
          puVar14 = (undefined8 *)*puVar14;
          puVar16 = puVar4;
        }
      }
      for (; puVar14 != (undefined8 *)0x0; puVar14 = (undefined8 *)*puVar14) {
        uVar2 = *(uint *)(puVar14 + 2);
        puVar16 = operator_new(0x18);
        *puVar16 = 0;
        *(uint *)(puVar16 + 2) = uVar2;
        puVar16[1] = (ulong)uVar2;
        uVar9 = FUN_100284324(plVar1,(ulong)uVar2,puVar16 + 2);
        FUN_10021bfdc(plVar1,puVar16,uVar9);
      }
    }
    goto LAB_10027e15a;
  }
  if (lVar7 == 0) goto LAB_10027e163;
  uVar6 = (*(code *)PTR__objc_msgSend_10082c770)(lVar7,PTR_s_code_10088bb40);
  goto LAB_10027e165;
LAB_10027e196:
  do {
    puVar14 = (undefined8 *)*puVar16;
    operator_delete(puVar16);
    puVar16 = puVar14;
  } while (puVar14 != (undefined8 *)0x0);
LAB_10027e15a:
  FUN_1002842e4(&uStack_88);
LAB_10027e163:
  uVar6 = 0;
LAB_10027e165:
  (*(code *)PTR__objc_release_10082c7b0)(lVar7);
LAB_10027e16e:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

