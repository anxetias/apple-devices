// name: FUN_1002b9459
// address: 1002b9459

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1002b9459(undefined8 param_1,undefined1 (*param_2) [16])

{
  void *pvVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  ulong uVar6;
  uint6 uVar7;
  char cVar8;
  int iVar9;
  int *piVar10;
  ulong uVar11;
  long lVar12;
  ulong *puVar13;
  uint *puVar14;
  long lVar15;
  undefined8 uVar16;
  char *pcVar17;
  undefined8 *puVar18;
  uint *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined1 auVar22 [16];
  undefined8 *local_180;
  undefined1 (*local_178) [16];
  undefined8 **local_170;
  undefined8 **local_168;
  undefined1 local_160;
  uint *local_158;
  uint *local_150;
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined4 local_108;
  undefined1 (*local_100) [16];
  undefined8 *local_f8;
  uint local_ec;
  undefined8 *local_e8;
  undefined1 (*local_e0) [16];
  long local_d8;
  uint local_cc;
  undefined4 local_c8;
  uint uStack_c4;
  undefined4 uStack_c0;
  undefined1 uStack_bc;
  undefined1 uStack_bb;
  ushort uStack_ba;
  undefined1 uStack_b8;
  undefined5 uStack_b7;
  ushort uStack_b2;
  void *local_b0;
  undefined1 (*local_a8) [16];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  piVar10 = (int *)FUN_100170f3b();
  uVar11 = FUN_100170ef7(param_1);
  if (uVar11 < 0x10) {
    uVar16 = FUN_1001cc310();
    cVar8 = _os_log_type_enabled(uVar16,0x10);
    if (cVar8 != '\0') {
      pcVar17 = "objectSize >= sizeof(PodcastExportedChannelHeader)";
LAB_1002b9c79:
      uStack_bb = 8;
      uStack_bc = 0x22;
      uStack_c0 = 1;
      uStack_c4 = 0x7a0a90;
      local_c8 = 0x8220202;
      uStack_ba = (ushort)pcVar17;
      uStack_b8 = (undefined1)((ulong)pcVar17 >> 0x10);
      uStack_b7 = (undefined5)((ulong)pcVar17 >> 0x18);
      __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: (%{public}s)",&local_c8,0x16);
    }
  }
  else if (piVar10[1] == 0x68636570) {
    if (piVar10[3] == 0x74727473) {
      if ((*piVar10 == 0x10) || (*piVar10 == 0x10000000)) {
        uVar16 = 0;
        if (0x10 < (long)uVar11) {
          puVar19 = (uint *)(uVar11 + (long)piVar10);
          puVar14 = (uint *)(piVar10 + 4);
          local_100 = param_2 + 1;
          local_150 = puVar19;
          local_e0 = param_2;
          do {
            if (puVar19 < puVar14 + 4) {
              uVar16 = FUN_1001cc310();
              cVar8 = _os_log_type_enabled(uVar16,0x10);
              if (cVar8 == '\0') goto LAB_1002b9c9e;
              pcVar17 = "current + sizeof(PodcastExportedChannelHeader) <= end";
              goto LAB_1002b9c79;
            }
            if (puVar14[1] != 0x68636570) {
              uVar16 = FUN_1001cc310();
              goto LAB_1002b9b13;
            }
            if (puVar14[3] != 0x63616863) {
              uVar16 = FUN_1001cc310();
              cVar8 = _os_log_type_enabled(uVar16,0x10);
              if (cVar8 == '\0') goto LAB_1002b9c9e;
              pcVar17 = 
              "headerPtr->objType == ((UInt32)(UInt32) (__builtin_constant_p(\'chac\') ? ((__uint32_t)((((__uint32_t)(\'chac\') & 0xff000000U) >> 24) | (((__uint32_t)(\'chac\') & 0x00ff0000U) >> 8) | (((__uint32_t)(\'chac\') & 0x0000ff00U) << 8) | (((__uint32_t)(\'chac\') & 0x000000ffU) << 24))) : (__builtin_constant_p(\'chac\') ? ((__uint32_t)((((__uint32_t)(\'chac\') & 0xff000000U) >> 24) | (((__uint32_t)(\'chac\') & 0x00ff0000U) >> 8) | (((__uint32_t)(\'chac\') & 0x0000ff00U) << 8) | (((__uint32_t)(\'chac\') & 0x000000ffU) << 24))) : _OSSwapInt32(\'chac\'))))"
              ;
              goto LAB_1002b9c79;
            }
            uVar2 = *puVar14;
            local_ec = (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                       uVar2 << 0x18) - 0x10;
            local_158 = puVar14 + 4;
            local_d8 = FUN_10015b880();
            if (local_d8 != 0) {
              iVar9 = FUN_10015bb96(local_d8,0,0x6368616e,1,0);
              if (iVar9 != 0) {
                local_148 = (undefined1  [16])0x0;
                FUN_1001b7a44(local_138);
                FUN_1001b7a44(local_128);
                local_118 = (undefined1  [16])0x0;
                local_108 = 0;
                lVar12 = FUN_10015c089(local_d8,iVar9,0x68656472,1,&local_cc);
                if (lVar12 != 0) {
                  FUN_1001c631b(lVar12,&local_c8,local_cc);
                  auVar22 = local_118;
                  uVar7 = CONCAT15(uStack_bb,CONCAT14(uStack_bc,uStack_c0));
                  local_148._0_8_ =
                       (ulong)(uStack_ba >> 8) | ((ulong)uStack_ba & 0xff) << 8 |
                       ((ulong)uVar7 & 0xff0000000000) >> 0x18 | ((ulong)uVar7 & 0xff00000000) >> 8
                       | ((ulong)uVar7 & 0xff000000) << 8 | ((ulong)uVar7 & 0xff0000) << 0x18 |
                       ((ulong)uVar7 & 0xff00) << 0x28 | CONCAT26(uStack_ba,uVar7) << 0x38;
                  local_118[0xc] = ~local_c8._3_1_ & 1;
                  local_118._14_2_ = auVar22._14_2_;
                  local_118[0xd] = local_c8._3_1_ >> 7;
                }
                puVar13 = (ulong *)FUN_10015c089(local_d8,iVar9,0x70696964,1,&local_cc);
                if ((puVar13 != (ulong *)0x0) && (local_cc == 8)) {
                  uVar11 = *puVar13;
                  local_148._8_8_ =
                       uVar11 >> 0x38 | (uVar11 & 0xff000000000000) >> 0x28 |
                       (uVar11 & 0xff0000000000) >> 0x18 | (uVar11 & 0xff00000000) >> 8 |
                       (uVar11 & 0xff000000) << 8 | (uVar11 & 0xff0000) << 0x18 |
                       (uVar11 & 0xff00) << 0x28 | uVar11 << 0x38;
                }
                lVar12 = FUN_10015c089(local_d8,iVar9,0x75726c20,1,&local_cc);
                if (lVar12 != 0) {
                  FUN_1001b7b34(&local_c8,lVar12,local_cc);
                  FUN_1001b80b2(local_138,&local_c8);
                  FUN_1001b7a50(&local_c8);
                }
                lVar12 = FUN_10015c089(local_d8,iVar9,0x6c696e6b,1,&local_cc);
                if (lVar12 != 0) {
                  FUN_1001b7b34(&local_c8,lVar12,local_cc);
                  FUN_1001b80b2(local_128,&local_c8);
                  FUN_1001b7a50(&local_c8);
                }
                puVar14 = (uint *)FUN_10015c089(local_d8,iVar9,0x63726474,1,&local_cc);
                if ((puVar14 != (uint *)0x0) && (local_cc == 4)) {
                  uVar2 = *puVar14;
                  local_118._0_4_ =
                       uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                       uVar2 << 0x18;
                }
                puVar14 = (uint *)FUN_10015c089(local_d8,iVar9,0x6c6d6474,1,&local_cc);
                if ((puVar14 != (uint *)0x0) && (local_cc == 4)) {
                  uVar2 = *puVar14;
                  local_118._4_4_ =
                       uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                       uVar2 << 0x18;
                }
                puVar14 = (uint *)FUN_10015c089(local_d8,iVar9,0x6c756474,1,&local_cc);
                if ((puVar14 != (uint *)0x0) && (local_cc == 4)) {
                  uVar2 = *puVar14;
                  local_118._8_4_ =
                       uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                       uVar2 << 0x18;
                }
                lVar12 = FUN_10015c089(local_d8,iVar9,0x73657474,1);
                uVar2 = local_cc;
                if (lVar12 != 0) {
                  FUN_1001c62d9(&local_c8,0x90);
                  if (0x8f < uVar2) {
                    uVar2 = 0x90;
                  }
                  FUN_1001c631b(lVar12,&local_c8,uVar2);
                  param_2 = local_e0;
                  if ((uStack_c4 & 0x4000000) != 0) {
                    local_118[0xe] = 1;
                    local_118[0xf] = uStack_bc;
                    auVar22 = pshufb(ZEXT416(CONCAT13(uStack_b8,CONCAT21(uStack_ba,uStack_bb))),
                                     _DAT_100740400);
                    local_108 = auVar22._0_4_;
                  }
                }
                uVar11 = *(ulong *)(*param_2 + 8);
                if (uVar11 < *(ulong *)param_2[1]) {
                  FUN_1002bb9ea(uVar11,local_148);
                  lVar12 = uVar11 + 0x48;
                  *(long *)(*param_2 + 8) = lVar12;
                }
                else {
                  lVar12 = (long)(uVar11 - *(long *)*param_2) >> 3;
                  uVar11 = lVar12 * -0x71c71c71c71c71c7 + 1;
                  if (0x38e38e38e38e38e < uVar11) {
                    FUN_1002bba4e();
                    /* WARNING: Does not return */
                    pcVar5 = (code *)invalidInstructionException();
                    (*pcVar5)();
                  }
                  lVar15 = (long)(*(ulong *)param_2[1] - *(long *)*param_2) >> 3;
                  uVar6 = lVar15 * 0x1c71c71c71c71c72;
                  if (uVar11 < uVar6) {
                    uVar11 = uVar6;
                  }
                  if (0x1c71c71c71c71c6 < (ulong)(lVar15 * -0x71c71c71c71c71c7)) {
                    uVar11 = 0x38e38e38e38e38e;
                  }
                  local_a8 = local_100;
                  if (uVar11 == 0) {
                    local_b0 = (void *)0x0;
                  }
                  else {
                    if (0x38e38e38e38e38e < uVar11) {
                    /* WARNING: Subroutine does not return */
                      FUN_1001082d0();
                    }
                    local_b0 = operator_new(uVar11 * 0x48);
                  }
                  local_c8 = SUB84(local_b0,0);
                  uStack_c4 = (uint)((ulong)local_b0 >> 0x20);
                  pvVar1 = (void *)((long)local_b0 + lVar12 * 8);
                  uStack_b8 = SUB81(pvVar1,0);
                  uStack_b7 = (undefined5)((ulong)pvVar1 >> 8);
                  uStack_b2 = (ushort)((ulong)pvVar1 >> 0x30);
                  uStack_c0 = SUB84(pvVar1,0);
                  uStack_bc = (undefined1)((ulong)pvVar1 >> 0x20);
                  uStack_bb = (undefined1)((ulong)pvVar1 >> 0x28);
                  local_b0 = (void *)((long)local_b0 + uVar11 * 0x48);
                  uStack_ba = uStack_b2;
                  FUN_1002bb9ea(pvVar1,local_148);
                  lVar12 = CONCAT26(uStack_b2,CONCAT51(uStack_b7,uStack_b8)) + 0x48;
                  uStack_b8 = (undefined1)lVar12;
                  uStack_b7 = (undefined5)((ulong)lVar12 >> 8);
                  uStack_b2 = (ushort)((ulong)lVar12 >> 0x30);
                  puVar20 = *(undefined8 **)*param_2;
                  puVar3 = *(undefined8 **)(*param_2 + 8);
                  puVar21 = (undefined8 *)
                            ((long)puVar20 +
                            (CONCAT26(uStack_ba,CONCAT15(uStack_bb,CONCAT14(uStack_bc,uStack_c0))) -
                            (long)puVar3));
                  local_178 = local_100;
                  local_170 = &local_180;
                  local_168 = &local_e8;
                  local_160 = 0;
                  puVar18 = puVar20;
                  local_180 = puVar21;
                  local_f8 = puVar21;
                  if (puVar20 == puVar3) {
                    local_160 = 1;
                    local_e8 = puVar21;
                  }
                  else {
                    do {
                      uVar16 = puVar18[1];
                      *puVar21 = *puVar18;
                      puVar21[1] = uVar16;
                      local_e8 = puVar21;
                      FUN_1001b7a5c(puVar21 + 2,puVar18 + 2);
                      FUN_1001b7a5c(puVar21 + 4,puVar18 + 4);
                      *(undefined4 *)(puVar21 + 8) = *(undefined4 *)(puVar18 + 8);
                      uVar16 = puVar18[7];
                      puVar21[6] = puVar18[6];
                      puVar21[7] = uVar16;
                      puVar21 = local_e8 + 9;
                      puVar18 = puVar18 + 9;
                    } while (puVar18 != puVar3);
                    local_160 = 1;
                    local_e8 = puVar21;
                    do {
                      FUN_1001b7a50(puVar20 + 4);
                      FUN_1001b7a50(puVar20 + 2);
                      puVar20 = puVar20 + 9;
                    } while (puVar20 != puVar3);
                    lVar12 = CONCAT26(uStack_b2,CONCAT51(uStack_b7,uStack_b8));
                  }
                  param_2 = local_e0;
                  puVar20 = local_f8;
                  FUN_1002bba5e(&local_178);
                  uVar16 = *(undefined8 *)*param_2;
                  *(undefined8 **)*param_2 = puVar20;
                  uStack_c0 = (undefined4)uVar16;
                  uStack_bc = (undefined1)((ulong)uVar16 >> 0x20);
                  uStack_bb = (undefined1)((ulong)uVar16 >> 0x28);
                  uStack_ba = (ushort)((ulong)uVar16 >> 0x30);
                  *(long *)(*param_2 + 8) = lVar12;
                  uStack_b8 = (undefined1)uVar16;
                  uStack_b7 = (undefined5)((ulong)uVar16 >> 8);
                  uVar4 = *(undefined8 *)param_2[1];
                  *(void **)param_2[1] = local_b0;
                  uStack_c4 = (uint)((ulong)uVar16 >> 0x20);
                  local_c8 = uStack_c0;
                  uStack_b2 = uStack_ba;
                  local_b0 = (void *)uVar4;
                  FUN_1002bbaae(&local_c8);
                  puVar19 = local_150;
                }
                *(long *)(*param_2 + 8) = lVar12;
                FUN_1001b7a50(local_128);
                FUN_1001b7a50(local_138);
              }
              FUN_10015b51c(local_d8);
            }
            puVar14 = (uint *)((long)local_158 + (ulong)local_ec);
            uVar16 = 0;
          } while (puVar14 < puVar19);
        }
        goto LAB_1002b9d06;
      }
      uVar16 = FUN_1001cc310();
      cVar8 = _os_log_type_enabled(uVar16,0x10);
      if (cVar8 != '\0') {
        pcVar17 = "flippedLength == sizeof(PodcastExportedChannelHeader)";
        goto LAB_1002b9c79;
      }
    }
    else {
      uVar16 = FUN_1001cc310();
      cVar8 = _os_log_type_enabled(uVar16,0x10);
      if (cVar8 != '\0') {
        pcVar17 = 
        "headerPtr->objType == ((UInt32)(UInt32) (__builtin_constant_p(\'strt\') ? ((__uint32_t)((((__uint32_t)(\'strt\') & 0xff000000U) >> 24) | (((__uint32_t)(\'strt\') & 0x00ff0000U) >> 8) | (((__uint32_t)(\'strt\') & 0x0000ff00U) << 8) | (((__uint32_t)(\'strt\') & 0x000000ffU) << 24))) : (__builtin_constant_p(\'strt\') ? ((__uint32_t)((((__uint32_t)(\'strt\') & 0xff000000U) >> 24) | (((__uint32_t)(\'strt\') & 0x00ff0000U) >> 8) | (((__uint32_t)(\'strt\') & 0x0000ff00U) << 8) | (((__uint32_t)(\'strt\') & 0x000000ffU) << 24))) : _OSSwapInt32(\'strt\'))))"
        ;
        goto LAB_1002b9c79;
      }
    }
  }
  else {
    uVar16 = FUN_1001cc310();
LAB_1002b9b13:
    cVar8 = _os_log_type_enabled(uVar16,0x10);
    if (cVar8 != '\0') {
      pcVar17 = 
      "headerPtr->magic == ((UInt32)(UInt32) (__builtin_constant_p(\'pech\') ? ((__uint32_t)((((__uint32_t)(\'pech\') & 0xff000000U) >> 24) | (((__uint32_t)(\'pech\') & 0x00ff0000U) >> 8) | (((__uint32_t)(\'pech\') & 0x0000ff00U) << 8) | (((__uint32_t)(\'pech\') & 0x000000ffU) << 24))) : (__builtin_constant_p(\'pech\') ? ((__uint32_t)((((__uint32_t)(\'pech\') & 0xff000000U) >> 24) | (((__uint32_t)(\'pech\') & 0x00ff0000U) >> 8) | (((__uint32_t)(\'pech\') & 0x0000ff00U) << 8) | (((__uint32_t)(\'pech\') & 0x000000ffU) << 24))) : _OSSwapInt32(\'pech\'))))"
      ;
      goto LAB_1002b9c79;
    }
  }
LAB_1002b9c9e:
  FUN_1001782e9(0,0);
  if (*(long *)*param_2 != 0) {
    FUN_1002bbb0a(param_2);
    operator_delete(*(void **)*param_2);
    *param_2 = (undefined1  [16])0x0;
    *(undefined8 *)param_2[1] = 0;
  }
  *param_2 = (undefined1  [16])0x0;
  *(undefined8 *)param_2[1] = 0;
  uStack_b8 = 0;
  uStack_b7 = 0;
  uStack_b2 = 0;
  local_c8 = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  uStack_bb = 0;
  uStack_ba = 0;
  local_148._0_8_ = &local_c8;
  FUN_1002bbb52();
  uVar16 = 0xffffffce;
LAB_1002b9d06:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar16;
}

