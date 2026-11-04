// name: notifyArtworkStatusChangedWithInfoArray:
// address: 10027c3bc

/* Function Stack Size: 0x18 bytes */

void ArtworkEventsProxy::notifyArtworkStatusChangedWithInfoArray_(ID param_1,SEL param_2,ID param_3)

{
  ulong *puVar1;
  long *plVar2;
  void *pvVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  void *pvVar13;
  ulong uVar14;
  undefined8 *puVar15;
  void *pvVar16;
  undefined8 *puVar17;
  ulong uVar18;
  long lVar19;
  undefined8 local_1f8;
  long lStack_1f0;
  long *local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 *local_1b0;
  undefined8 local_1a8;
  code *local_1a0;
  code *local_198;
  char *local_190;
  undefined8 *local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  ulong local_170;
  long *local_168;
  undefined1 local_160 [8];
  void *local_158;
  void *local_150;
  long local_130;
  long local_128;
  long local_120;
  ulong local_118;
  ulong *local_110;
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  long local_f0;
  ulong local_e8;
  long lStack_e0;
  undefined8 local_d8;
  ID local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [128];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_c8 = param_1;
  local_100 = (*(code *)PTR__objc_retain_10082c7b8)(param_3);
  local_1b0 = &local_1b8;
  local_1b8 = 0;
  local_1a8 = 0x4812000000;
  local_1a0 = FUN_10027caf9;
  local_198 = FUN_10027cb38;
  local_190 = "";
  local_188 = &local_180;
  local_180 = 0;
  uStack_178 = 0;
  local_f8 = (*(code *)PTR__objc_msgSend_10082c770)(local_100,PTR_s_count_10088bdc0);
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1e8 = (long *)0x0;
  uStack_1e0 = 0;
  local_1f8 = 0;
  lStack_1f0 = 0;
  local_c0 = (*(code *)PTR__objc_retain_10082c7b8)(local_100);
  lVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                    (local_c0,PTR_s_countByEnumeratingWithState_obje_10088bb48,&local_1f8,local_b8,
                     0x10);
  if (lVar5 != 0) {
    local_128 = *local_1e8;
    do {
      local_f0 = 0;
      local_130 = lVar5;
      do {
        if (*local_1e8 != local_128) {
          _objc_enumerationMutation(local_c0);
        }
        FUN_100385778(&local_170,*(undefined8 *)(lStack_1f0 + local_f0 * 8));
        puVar10 = (undefined8 *)local_1b0[7];
        if (puVar10 == (undefined8 *)0x0) {
LAB_10027c55f:
          local_e8 = 0;
          lStack_e0 = 0;
          local_d8 = 0;
          lStack_e0 = FUN_100283c28(&local_e8,&local_170);
          uVar7 = local_170;
          puVar10 = local_1b0;
          puVar11 = (undefined8 *)local_1b0[7];
          if ((undefined8 *)local_1b0[7] == (undefined8 *)0x0) {
            puVar15 = local_1b0 + 7;
            puVar17 = puVar15;
          }
          else {
            do {
              while (puVar15 = puVar11, (ulong)puVar15[4] <= local_170) {
                if (local_170 <= (ulong)puVar15[4]) goto LAB_10027c658;
                puVar11 = (undefined8 *)puVar15[1];
                if ((undefined8 *)puVar15[1] == (undefined8 *)0x0) {
                  puVar17 = puVar15 + 1;
                  goto LAB_10027c5da;
                }
              }
              puVar11 = (undefined8 *)*puVar15;
              puVar17 = puVar15;
            } while ((undefined8 *)*puVar15 != (undefined8 *)0x0);
          }
LAB_10027c5da:
          puVar6 = operator_new(0x40);
          puVar6[4] = uVar7;
          puVar6[5] = 0;
          puVar6[6] = 0;
          puVar6[7] = 0;
          *puVar6 = 0;
          puVar6[1] = 0;
          puVar6[2] = puVar15;
          *puVar17 = puVar6;
          puVar11 = puVar6;
          if (*(long *)puVar10[6] != 0) {
            puVar10[6] = *(long *)puVar10[6];
            puVar11 = (undefined8 *)*puVar17;
          }
          FUN_1001ad344(puVar10[7],puVar11);
          puVar10[8] = puVar10[8] + 1;
          puVar15 = puVar6;
LAB_10027c658:
          lVar5 = lStack_e0;
          puVar1 = puVar15 + 5;
          if (puVar1 != &local_e8) {
            uVar18 = lStack_e0 - local_e8;
            local_108 = puVar15 + 7;
            pvVar3 = (void *)puVar15[5];
            uVar7 = puVar15[7];
            if (uVar7 - (long)pvVar3 < uVar18) {
              uVar14 = local_e8;
              if (pvVar3 != (void *)0x0) {
                local_118 = local_e8;
                local_120 = lStack_e0;
                pvVar16 = (void *)puVar15[6];
                pvVar13 = pvVar3;
                if (pvVar16 != pvVar3) {
                  do {
                    pvVar16 = (void *)((long)pvVar16 + -0x40);
                    FUN_10027cb46(pvVar16);
                  } while (pvVar16 != pvVar3);
                  pvVar13 = (void *)*puVar1;
                }
                puVar15[6] = pvVar3;
                operator_delete(pvVar13);
                *puVar1 = 0;
                puVar15[6] = 0;
                puVar15[7] = 0;
                uVar7 = 0;
                uVar14 = local_118;
                lVar5 = local_120;
              }
              uVar18 = (long)uVar18 >> 6;
              if (0x3ffffffffffffff < uVar18) {
                    /* WARNING: Subroutine does not return */
                FUN_100283ee2(puVar1);
              }
              uVar12 = (long)uVar7 >> 5;
              if ((ulong)((long)uVar7 >> 5) <= uVar18) {
                uVar12 = uVar18;
              }
              if (0x7fffffffffffffbf < uVar7) {
                uVar12 = 0x3ffffffffffffff;
              }
              FUN_100283f60(puVar1,uVar12);
              uVar8 = FUN_100283f9c(local_108,uVar14,lVar5,puVar15[6]);
            }
            else {
              if (uVar18 <= (ulong)(puVar15[6] - (long)pvVar3)) {
                lVar19 = FUN_100284088(local_e8,lStack_e0,pvVar3);
                lVar5 = puVar15[6];
                while (lVar5 != lVar19) {
                  lVar5 = lVar5 + -0x40;
                  FUN_10027cb46(lVar5);
                }
                puVar15[6] = lVar19;
                goto LAB_10027c7bb;
              }
              lVar19 = (puVar15[6] - (long)pvVar3) + local_e8;
              FUN_100284088(local_e8,lVar19,pvVar3);
              uVar8 = FUN_100283f9c(local_108,lVar19,lVar5,puVar15[6]);
            }
            puVar15[6] = uVar8;
          }
LAB_10027c7bb:
          local_110 = &local_e8;
          FUN_100284230(&local_110);
        }
        else {
          puVar11 = local_1b0 + 7;
          do {
            if ((ulong)puVar10[4] >= local_170) {
              puVar11 = puVar10;
            }
            puVar10 = (undefined8 *)puVar10[(ulong)puVar10[4] < local_170];
          } while (puVar10 != (undefined8 *)0x0);
          if ((puVar11 == local_1b0 + 7) || (local_170 < (ulong)puVar11[4])) goto LAB_10027c55f;
          uVar7 = puVar11[6];
          if (uVar7 < (ulong)puVar11[7]) {
            FUN_100283dc3(uVar7,&local_170);
            lVar5 = uVar7 + 0x40;
            puVar11[6] = lVar5;
          }
          else {
            lVar5 = FUN_100283c28(puVar11 + 5,&local_170);
          }
          puVar11[6] = lVar5;
        }
        lVar5 = local_130;
        if (local_158 != (void *)0x0) {
          local_150 = local_158;
          operator_delete(local_158);
        }
        FUN_1001ab006(local_160);
        local_f0 = local_f0 + 1;
      } while (local_f0 != lVar5);
      lVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                        (local_c0,PTR_s_countByEnumeratingWithState_obje_10088bb48,&local_1f8,
                         local_b8,0x10);
    } while (lVar5 != 0);
  }
  (*(code *)PTR__objc_release_10082c7b0)(local_c0);
  puVar4 = PTR_s_queue_10088c580;
  uVar8 = (*(code *)PTR__objc_msgSend_10082c770)(local_c8,PTR_s_queue_10088c580);
  lVar5 = _objc_retainAutoreleasedReturnValue(uVar8);
  (*(code *)PTR__objc_release_10082c7b0)(lVar5);
  if (lVar5 == 0) {
    _objc_msgSend_stret((undefined *)&local_e8,local_c8,PTR_s_owner_10088c588);
    local_170 = 0;
    if (lStack_e0 != 0) {
      plVar9 = (long *)std::__shared_weak_count::lock();
      if (plVar9 == (long *)0x0) {
        uVar7 = 0;
      }
      else {
        local_170 = local_e8;
        uVar7 = local_e8;
      }
      local_168 = plVar9;
      if (lStack_e0 != 0) {
        std::__shared_weak_count::__release_weak();
      }
      if (uVar7 != 0) {
        FUN_100386d04(uVar7,local_1b0 + 6,local_f8);
      }
      if (plVar9 != (long *)0x0) {
        LOCK();
        plVar2 = plVar9 + 1;
        lVar5 = *plVar2;
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (lVar5 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
  }
  else {
    uVar8 = (*(code *)PTR__objc_msgSend_10082c770)(local_c8,puVar4);
    uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
    _dispatch_async(uVar8);
    (*(code *)PTR__objc_release_10082c7b0)(uVar8);
  }
  __Block_object_dispose(&local_1b8,8);
  FUN_1002852ba(local_180);
  (*(code *)PTR__objc_release_10082c7b0)(local_c0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

