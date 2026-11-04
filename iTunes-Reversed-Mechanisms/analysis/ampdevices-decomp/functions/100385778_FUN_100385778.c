// name: FUN_100385778
// address: 100385778

undefined8 * FUN_100385778(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  size_t sVar12;
  void *pvVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined1 auVar18 [16];
  undefined8 local_148;
  long lStack_140;
  long *local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined *local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  undefined8 *local_e0;
  long *local_d8;
  undefined1 local_d0 [8];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [128];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar5 = (*(code *)PTR__objc_retain_10082c7b8)(param_2);
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1001aa318(param_1 + 2);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 3;
  param_1[7] = 0;
  uVar6 = (*(code *)PTR__objc_msgSend_10082c770)(uVar5,PTR_s_dbID_10088c928);
  *param_1 = uVar6;
  puVar2 = PTR_s_uuid_10088c5d8;
  uVar6 = (*(code *)PTR__objc_msgSend_10082c770)(uVar5,PTR_s_uuid_10088c5d8);
  lVar7 = _objc_retainAutoreleasedReturnValue(uVar6);
  (*(code *)PTR__objc_release_10082c7b0)(lVar7);
  local_c0 = uVar5;
  if (lVar7 != 0) {
    uVar6 = (*(code *)PTR__objc_msgSend_10082c770)(uVar5,puVar2);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    FUN_1001aaef6(local_d0,uVar6);
    FUN_1001aaadc(param_1 + 2,local_d0);
    FUN_1001ab006(local_d0);
    (*(code *)PTR__objc_release_10082c7b0)(uVar6);
  }
  uVar3 = (*(code *)PTR__objc_msgSend_10082c770)(uVar5,PTR_s_kind_10088c940);
  uVar3 = FUN_1003847a2(uVar3);
  *(undefined4 *)(param_1 + 1) = uVar3;
  local_148 = 0;
  lStack_140 = 0;
  local_138 = (long *)0x0;
  uStack_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  uVar6 = (*(code *)PTR__objc_msgSend_10082c770)(uVar5,PTR_s_persistentIDs_10088c9e0);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  lVar7 = (*(code *)PTR__objc_msgSend_10082c770)
                    (uVar6,PTR_s_countByEnumeratingWithState_obje_10088bb48,&local_148,local_b8,0x10
                    );
  if (lVar7 != 0) {
    local_d8 = param_1 + 3;
    local_f0 = *local_138;
    local_e0 = param_1 + 5;
    local_c8 = uVar6;
    do {
      local_100 = PTR_s_unsignedLongLongValue_10088be80;
      lVar16 = 0;
      local_f8 = lVar7;
      do {
        if (*local_138 != local_f0) {
          _objc_enumerationMutation(uVar6);
        }
        uVar6 = (*(code *)PTR__objc_msgSend_10082c770)
                          (*(undefined8 *)(lStack_140 + lVar16 * 8),local_100);
        puVar17 = (undefined8 *)param_1[4];
        if (puVar17 < (undefined8 *)param_1[5]) {
          *puVar17 = uVar6;
          puVar17 = puVar17 + 1;
        }
        else {
          pvVar13 = (void *)*local_d8;
          sVar12 = (long)puVar17 - (long)pvVar13;
          lVar7 = (long)sVar12 >> 3;
          uVar1 = lVar7 + 1;
          if (0x1fffffffffffffff < uVar1) {
                    /* WARNING: Subroutine does not return */
            FUN_100283ee2(local_d8);
          }
          uVar11 = (long)param_1[5] - (long)pvVar13;
          uVar8 = (long)uVar11 >> 2;
          if (uVar8 <= uVar1) {
            uVar8 = uVar1;
          }
          if (0x7ffffffffffffff7 < uVar11) {
            uVar8 = 0x1fffffffffffffff;
          }
          if (uVar8 == 0) {
            auVar18 = ZEXT816(0);
            lVar14 = lVar7;
          }
          else {
            auVar18 = FUN_100249b6c(local_e0,uVar8);
            pvVar13 = (void *)param_1[3];
            sVar12 = param_1[4] - (long)pvVar13;
            lVar14 = (long)sVar12 >> 3;
          }
          lVar9 = auVar18._0_8_;
          puVar15 = (undefined8 *)(lVar9 + lVar7 * 8);
          local_e8 = lVar9 + auVar18._8_8_ * 8;
          *puVar15 = uVar6;
          puVar17 = (undefined8 *)(lVar9 + lVar7 * 8 + 8);
          puVar15 = puVar15 + -lVar14;
          _memcpy(puVar15,pvVar13,sVar12);
          pvVar13 = (void *)param_1[3];
          param_1[3] = puVar15;
          param_1[4] = puVar17;
          param_1[5] = local_e8;
          uVar5 = local_c0;
          if (pvVar13 != (void *)0x0) {
            operator_delete(pvVar13);
            uVar5 = local_c0;
          }
        }
        uVar6 = local_c8;
        param_1[4] = puVar17;
        lVar16 = lVar16 + 1;
      } while (local_f8 != lVar16);
      lVar7 = (*(code *)PTR__objc_msgSend_10082c770)
                        (local_c8,PTR_s_countByEnumeratingWithState_obje_10088bb48,&local_148,
                         local_b8,0x10);
    } while (lVar7 != 0);
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar6);
  uVar4 = (*(code *)PTR__objc_msgSend_10082c770)(uVar5,PTR_s_status_10088c9d0);
  uVar10 = 2;
  if (uVar4 < 4) {
    uVar10 = uVar4;
  }
  *(char *)(param_1 + 6) = (char)uVar10;
  uVar6 = (*(code *)PTR__objc_msgSend_10082c770)(uVar5,PTR_s_imageDataHash_10088c5e0);
  param_1[7] = uVar6;
  (*(code *)PTR__objc_release_10082c7b0)(uVar5);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}

