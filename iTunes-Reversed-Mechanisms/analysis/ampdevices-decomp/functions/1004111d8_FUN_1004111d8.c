// name: FUN_1004111d8
// address: 1004111d8

int FUN_1004111d8(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 local_158;
  long lStack_150;
  long *local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  long *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  long local_e8 [4];
  long *local_c8;
  undefined1 local_b8 [128];
  long local_38;
  
  puVar3 = PTR__objc_retain_10082c7b8;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar5 = (*(code *)PTR__objc_retain_10082c7b8)();
  uVar6 = (*(code *)puVar3)(param_2);
  uVar5 = (*(code *)puVar3)(uVar5);
  local_110 = uVar5;
  local_108 = (*(code *)puVar3)(uVar6);
  plVar1 = (long *)param_3[4];
  local_118 = param_3;
  local_f8 = local_108;
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10016bf14();
  }
  iVar4 = (**(code **)(*plVar1 + 0x30))(plVar1,&local_110,&local_108);
  (*(code *)PTR__objc_release_10082c7b0)(local_108);
  (*(code *)PTR__objc_release_10082c7b0)(local_110);
  if (iVar4 == 0x6bf) {
    iVar4 = 0;
  }
  else {
    if (iVar4 != 0x6be) {
      if (iVar4 != 0) goto LAB_10041144c;
      uVar6 = (*(code *)PTR__objc_retain_10082c7b8)(uVar5);
      (*(code *)PTR__objc_release_10082c7b0)(local_f8);
      local_f8 = uVar6;
    }
    local_128 = 0;
    uStack_120 = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_148 = (long *)0x0;
    uStack_140 = 0;
    local_158 = 0;
    lStack_150 = 0;
    uVar6 = (*(code *)PTR__objc_msgSend_10082c770)(uVar5,PTR_s_childGroups_10088cad0);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    lVar7 = (*(code *)PTR__objc_msgSend_10082c770)
                      (uVar6,PTR_s_countByEnumeratingWithState_obje_10088bb48,&local_158,local_b8,
                       0x10);
    if (lVar7 == 0) {
      iVar4 = 0;
    }
    else {
      lVar2 = *local_148;
      local_100 = uVar5;
      local_f0 = uVar6;
      do {
        lVar9 = 0;
        do {
          if (*local_148 != lVar2) {
            _objc_enumerationMutation(local_f0);
          }
          uVar5 = *(undefined8 *)(lStack_150 + lVar9 * 8);
          plVar1 = (long *)local_118[4];
          if (plVar1 == (long *)0x0) {
            local_c8 = (long *)0x0;
          }
          else if (plVar1 == local_118) {
            local_c8 = local_e8;
            (**(code **)(*plVar1 + 0x18))(plVar1,local_e8);
          }
          else {
            local_c8 = (long *)(**(code **)(*plVar1 + 0x10))();
          }
          iVar4 = FUN_1004111d8(uVar5,local_f8,local_e8);
          if (local_c8 == local_e8) {
            lVar8 = 0x20;
LAB_1004113d8:
            (**(code **)(*local_c8 + lVar8))();
          }
          else {
            lVar8 = 0x28;
            if (local_c8 != (long *)0x0) goto LAB_1004113d8;
          }
          if (iVar4 == -0x80) {
            iVar4 = -0x80;
            uVar5 = local_100;
            uVar6 = local_f0;
            goto LAB_100411443;
          }
          lVar9 = lVar9 + 1;
        } while (lVar7 != lVar9);
        lVar7 = (*(code *)PTR__objc_msgSend_10082c770)
                          (local_f0,PTR_s_countByEnumeratingWithState_obje_10088bb48,&local_158,
                           local_b8,0x10);
      } while (lVar7 != 0);
      iVar4 = 0;
      uVar5 = local_100;
      uVar6 = local_f0;
    }
LAB_100411443:
    (*(code *)PTR__objc_release_10082c7b0)(uVar6);
  }
LAB_10041144c:
  (*(code *)PTR__objc_release_10082c7b0)(local_f8);
  (*(code *)PTR__objc_release_10082c7b0)(uVar5);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

