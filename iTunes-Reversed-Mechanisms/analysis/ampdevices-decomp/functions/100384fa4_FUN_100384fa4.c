// name: FUN_100384fa4
// address: 100384fa4

long * FUN_100384fa4(undefined8 param_1,void *param_2,long *param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  undefined8 local_1e8;
  long lStack_1e0;
  long *local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  long local_1a8;
  undefined *local_1a0;
  undefined *local_198;
  undefined *local_190;
  undefined *local_188;
  undefined *local_180;
  undefined *local_178;
  undefined *local_170;
  long local_168;
  long local_160;
  long *local_158;
  long *local_150;
  long *local_148;
  undefined1 local_140;
  long *local_138;
  long local_130;
  undefined1 local_128 [8];
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined1 local_110 [8];
  undefined4 local_108;
  undefined1 local_104;
  long local_100;
  long local_f8;
  void *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  void *local_d8;
  long *local_d0;
  undefined8 local_c8;
  long *local_c0;
  undefined1 local_b8 [128];
  long local_38;
  
  pcVar14 = (code *)PTR__objc_retain_10082c7b8;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar6 = (*(code *)PTR__objc_retain_10082c7b8)(param_4);
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1d8 = (long *)0x0;
  uStack_1d0 = 0;
  local_1e8 = 0;
  lStack_1e0 = 0;
  local_c0 = param_3;
  local_c8 = (*pcVar14)(uVar6);
  lVar7 = (*(code *)PTR__objc_msgSend_10082c770)
                    (local_c8,PTR_s_countByEnumeratingWithState_obje_10088bb48,&local_1e8,local_b8,
                     0x10);
  if (lVar7 != 0) {
    local_160 = *local_1d8;
    local_138 = local_c0 + 2;
    do {
      local_1a0 = PTR_s_request_10088c2e8;
      local_198 = PTR_s_uuid_10088c5d8;
      local_190 = PTR_s_size_10088c220;
      local_188 = PTR_s_fileURL_10088c9c8;
      local_180 = PTR_s_status_10088c9d0;
      local_178 = PTR_s_error_10088c5d0;
      local_170 = PTR_s_code_10088bb40;
      local_f8 = 0;
      local_168 = lVar7;
      do {
        if (*local_1d8 != local_160) {
          _objc_enumerationMutation(local_c8);
        }
        uVar6 = (*pcVar14)(*(undefined8 *)(lStack_1e0 + local_f8 * 8));
        FUN_1001aa318(local_128);
        local_120 = *(undefined4 *)PTR__CGSizeZero_10082e370;
        uStack_11c = *(undefined4 *)(PTR__CGSizeZero_10082e370 + 4);
        uStack_118 = *(undefined4 *)(PTR__CGSizeZero_10082e370 + 8);
        uStack_114 = *(undefined4 *)(PTR__CGSizeZero_10082e370 + 0xc);
        FUN_1001aa318();
        local_108 = 0;
        local_104 = 2;
        uVar8 = (*(code *)PTR__objc_msgSend_10082c770)(uVar6,local_1a0);
        uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
        uVar8 = (*pcVar14)(uVar8);
        FUN_1001aa318(&local_f0);
        local_e8 = *(void **)PTR__CGSizeZero_10082e370;
        uStack_e0 = *(void **)(PTR__CGSizeZero_10082e370 + 8);
        uVar9 = (*(code *)PTR__objc_msgSend_10082c770)(uVar8,local_198);
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        FUN_1001aaef6(&local_158,uVar9);
        FUN_1001aaadc(&local_f0,&local_158);
        FUN_1001ab006(&local_158);
        (*(code *)PTR__objc_release_10082c7b0)(uVar9);
        local_e8 = (void *)(*(code *)PTR__objc_msgSend_10082c770)(uVar8,local_190);
        uStack_e0 = param_2;
        (*(code *)PTR__objc_release_10082c7b0)(uVar8);
        FUN_1001aaadc(local_128,&local_f0);
        local_120 = (undefined4)local_e8;
        uStack_11c = local_e8._4_4_;
        uStack_118 = (undefined4)uStack_e0;
        uStack_114 = uStack_e0._4_4_;
        FUN_1001ab006(&local_f0);
        (*(code *)PTR__objc_release_10082c7b0)(uVar8);
        uVar8 = (*(code *)PTR__objc_msgSend_10082c770)(uVar6,local_188);
        uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
        FUN_1001a8bb0(&local_f0,uVar8);
        FUN_1001aaadc(local_110,&local_f0);
        FUN_1001ab3c4(&local_f0);
        (*(code *)PTR__objc_release_10082c7b0)(uVar8);
        uVar5 = (*(code *)PTR__objc_msgSend_10082c770)(uVar6,local_180);
        local_104 = (undefined1)uVar5;
        if (3 < uVar5) {
          local_104 = 2;
        }
        uVar8 = (*(code *)PTR__objc_msgSend_10082c770)(uVar6,local_178);
        uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
        local_108 = (*(code *)PTR__objc_msgSend_10082c770)(uVar8,local_170);
        (*(code *)PTR__objc_release_10082c7b0)(uVar8);
        (*(code *)PTR__objc_release_10082c7b0)(uVar6);
        uVar10 = local_c0[1];
        if (uVar10 < (ulong)local_c0[2]) {
          FUN_100385d93(uVar10,local_128);
          lVar15 = uVar10 + 0x28;
          plVar11 = local_c0;
        }
        else {
          lVar7 = (long)(uVar10 - *local_c0) >> 3;
          uVar10 = lVar7 * -0x3333333333333333 + 1;
          if (0x666666666666666 < uVar10) {
            FUN_100385de4();
                    /* WARNING: Does not return */
            pcVar14 = (code *)invalidInstructionException();
            (*pcVar14)();
          }
          lVar15 = local_c0[2] - *local_c0 >> 3;
          uVar1 = lVar15 * -0x6666666666666666;
          if (uVar10 < uVar1) {
            uVar10 = uVar1;
          }
          if (0x333333333333332 < (ulong)(lVar15 * -0x3333333333333333)) {
            uVar10 = 0x666666666666666;
          }
          local_d0 = local_138;
          if (uVar10 == 0) {
            local_f0 = (void *)0x0;
          }
          else {
            if (0x666666666666666 < uVar10) {
                    /* WARNING: Subroutine does not return */
              FUN_1001082d0();
            }
            local_f0 = operator_new(uVar10 * 0x28);
          }
          local_e8 = (void *)((long)local_f0 + lVar7 * 8);
          local_d8 = (void *)((long)local_f0 + uVar10 * 0x28);
          uStack_e0 = local_e8;
          FUN_100385d93(local_e8,local_128);
          uStack_e0 = (void *)((long)uStack_e0 + 0x28);
          lVar7 = *local_c0;
          lVar15 = local_c0[1];
          lVar13 = (lVar7 - lVar15) + (long)local_e8;
          local_158 = local_138;
          local_150 = &local_1a8;
          local_148 = &local_100;
          local_140 = 0;
          lVar12 = lVar7;
          local_1a8 = lVar13;
          local_130 = lVar13;
          if (lVar7 == lVar15) {
            local_140 = 1;
            local_100 = lVar13;
          }
          else {
            do {
              local_100 = lVar13;
              FUN_1001a8c1c(lVar13,lVar12);
              uVar2 = *(undefined4 *)(lVar12 + 0xc);
              uVar3 = *(undefined4 *)(lVar12 + 0x10);
              uVar4 = *(undefined4 *)(lVar12 + 0x14);
              *(undefined4 *)(lVar13 + 8) = *(undefined4 *)(lVar12 + 8);
              *(undefined4 *)(lVar13 + 0xc) = uVar2;
              *(undefined4 *)(lVar13 + 0x10) = uVar3;
              *(undefined4 *)(lVar13 + 0x14) = uVar4;
              FUN_1001a8c1c(lVar13 + 0x18,lVar12 + 0x18);
              *(undefined1 *)(lVar13 + 0x24) = *(undefined1 *)(lVar12 + 0x24);
              *(undefined4 *)(lVar13 + 0x20) = *(undefined4 *)(lVar12 + 0x20);
              lVar13 = local_100 + 0x28;
              lVar12 = lVar12 + 0x28;
            } while (lVar12 != lVar15);
            local_140 = 1;
            local_100 = lVar13;
            do {
              FUN_1001ab3c4(lVar7 + 0x18);
              FUN_1001ab006(lVar7);
              lVar7 = lVar7 + 0x28;
            } while (lVar7 != lVar15);
          }
          lVar15 = (long)uStack_e0;
          lVar7 = local_130;
          FUN_100385df4(&local_158);
          plVar11 = local_c0;
          local_f0 = (void *)*local_c0;
          *local_c0 = lVar7;
          local_c0[1] = lVar15;
          lVar7 = local_c0[2];
          local_c0[2] = (long)local_d8;
          local_e8 = local_f0;
          uStack_e0 = local_f0;
          local_d8 = (void *)lVar7;
          FUN_100385e36(&local_f0);
        }
        plVar11[1] = lVar15;
        FUN_1001ab3c4(local_110);
        FUN_1001ab006(local_128);
        pcVar14 = (code *)PTR__objc_retain_10082c7b8;
        local_f8 = local_f8 + 1;
      } while (local_f8 != local_168);
      lVar7 = (*(code *)PTR__objc_msgSend_10082c770)
                        (local_c8,PTR_s_countByEnumeratingWithState_obje_10088bb48,&local_1e8,
                         local_b8,0x10);
    } while (lVar7 != 0);
  }
  (*(code *)PTR__objc_release_10082c7b0)(local_c8);
  (*(code *)PTR__objc_release_10082c7b0)(local_c8);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return local_c0;
}

