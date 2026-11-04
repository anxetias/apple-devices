// name: FUN_10044c47d
// address: 10044c47d

void FUN_10044c47d(long param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  size_t sVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  bool bVar14;
  undefined1 auVar15 [16];
  undefined8 local_158;
  long lStack_150;
  long *local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined *local_118;
  long local_110;
  undefined8 local_108;
  long local_100;
  long *local_f8;
  long *plStack_f0;
  long local_e0;
  undefined8 *local_d8;
  undefined8 *puStack_d0;
  undefined8 *local_c8 [2];
  undefined1 local_b8 [128];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(ID *)(param_1 + 0x20) == 0) {
    local_f8 = (long *)0x0;
    plStack_f0 = (long *)0x0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_f8,*(ID *)(param_1 + 0x20),PTR_s_getDelegate_10088d168);
    if (local_f8 != (long *)0x0) {
      local_d8 = (undefined8 *)0x0;
      puStack_d0 = (undefined8 *)0x0;
      local_c8[0] = (undefined8 *)0x0;
      local_158 = 0;
      lStack_150 = 0;
      local_148 = (long *)0x0;
      uStack_140 = 0;
      local_138 = 0;
      uStack_130 = 0;
      local_128 = 0;
      uStack_120 = 0;
      local_108 = *(undefined8 *)(param_1 + 0x28);
      local_110 = param_1;
      lVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                        (local_108,PTR_s_countByEnumeratingWithState_obje_10088bb48,&local_158,
                         local_b8,0x10);
      if (lVar5 != 0) {
        lVar11 = *local_148;
        local_100 = lVar11;
        do {
          local_118 = PTR_s_unsignedLongLongValue_10088be80;
          lVar13 = 0;
          local_e0 = lVar5;
          do {
            if (*local_148 != lVar11) {
              _objc_enumerationMutation(local_108);
            }
            uVar6 = (*(code *)PTR__objc_msgSend_10082c770)
                              (*(undefined8 *)(lStack_150 + lVar13 * 8),local_118);
            if (puStack_d0 < local_c8[0]) {
              *puStack_d0 = uVar6;
              puVar10 = puStack_d0 + 1;
            }
            else {
              sVar9 = (long)puStack_d0 - (long)local_d8;
              lVar5 = (long)sVar9 >> 3;
              uVar1 = lVar5 + 1;
              if (0x1fffffffffffffff < uVar1) {
                    /* WARNING: Subroutine does not return */
                FUN_100283ee2(&local_d8);
              }
              uVar7 = (long)local_c8[0] - (long)local_d8 >> 2;
              if (uVar7 <= uVar1) {
                uVar7 = uVar1;
              }
              if (0x7ffffffffffffff7 < (ulong)((long)local_c8[0] - (long)local_d8)) {
                uVar7 = 0x1fffffffffffffff;
              }
              if (uVar7 == 0) {
                auVar15 = ZEXT816(0);
                lVar11 = lVar5;
              }
              else {
                auVar15 = FUN_100249b6c(local_c8,uVar7);
                sVar9 = (long)puStack_d0 - (long)local_d8;
                lVar11 = (long)sVar9 >> 3;
              }
              lVar8 = auVar15._0_8_;
              puVar12 = (undefined8 *)(lVar8 + lVar5 * 8);
              puVar3 = (undefined8 *)(lVar8 + auVar15._8_8_ * 8);
              *puVar12 = uVar6;
              puVar10 = (undefined8 *)(lVar8 + lVar5 * 8 + 8);
              puVar12 = puVar12 + -lVar11;
              _memcpy(puVar12,local_d8,sVar9);
              puVar4 = local_d8;
              bVar14 = local_d8 != (undefined8 *)0x0;
              lVar11 = local_100;
              local_d8 = puVar12;
              local_c8[0] = puVar3;
              if (bVar14) {
                puStack_d0 = puVar10;
                operator_delete(puVar4);
                lVar11 = local_100;
              }
            }
            lVar13 = lVar13 + 1;
            puStack_d0 = puVar10;
          } while (local_e0 != lVar13);
          lVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                            (local_108,PTR_s_countByEnumeratingWithState_obje_10088bb48,&local_158,
                             local_b8,0x10);
        } while (lVar5 != 0);
      }
      (**(code **)(*local_f8 + 0x48))(local_f8,*(undefined4 *)(local_110 + 0x30),&local_d8);
      if (local_d8 != (undefined8 *)0x0) {
        puStack_d0 = local_d8;
        operator_delete(local_d8);
      }
    }
  }
  if (plStack_f0 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_f0 + 1;
    lVar5 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar5 == 0) {
      (**(code **)(*plStack_f0 + 0x10))(plStack_f0);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

