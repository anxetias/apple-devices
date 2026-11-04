// name: FUN_10014c83c
// address: 10014c83c

void FUN_10014c83c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  char cVar3;
  uid_t uVar4;
  uid_t uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  byte bVar9;
  long lVar10;
  undefined8 local_118;
  long lStack_110;
  long *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  long local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  uint local_c4;
  undefined1 local_b8 [128];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar4 = _getuid();
  local_118 = 0;
  lStack_110 = 0;
  local_108 = (long *)0x0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  uVar6 = _NSClassFromString(&cf_BiometricKit);
  uVar6 = (*(code *)PTR__objc_msgSend_10082c770)(uVar6,PTR_s_manager_10088bba8);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  uVar7 = (*(code *)PTR__objc_msgSend_10082c770)(uVar6,PTR_s_identities__10088bb88,0);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  (*(code *)PTR__objc_release_10082c7b0)(uVar6);
  local_d0 = uVar7;
  lVar8 = (*(code *)PTR__objc_msgSend_10082c770)
                    (uVar7,PTR_s_countByEnumeratingWithState_obje_10088bb48,&local_118,local_b8,0x10
                    );
  if (lVar8 == 0) {
    bVar9 = 0;
  }
  else {
    lVar1 = *local_108;
    local_d8 = param_1;
    do {
      puVar2 = PTR_s_userID_10088bbe8;
      lVar10 = 0;
      do {
        if (*local_108 != lVar1) {
          _objc_enumerationMutation(local_d0);
        }
        uVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                          (*(undefined8 *)(lStack_110 + lVar10 * 8),puVar2);
        if (uVar5 == uVar4) {
          bVar9 = 1;
          param_1 = local_d8;
          goto LAB_10014c9a8;
        }
        lVar10 = lVar10 + 1;
      } while (lVar8 != lVar10);
      lVar8 = (*(code *)PTR__objc_msgSend_10082c770)
                        (local_d0,PTR_s_countByEnumeratingWithState_obje_10088bb48,&local_118,
                         local_b8,0x10);
    } while (lVar8 != 0);
    bVar9 = 0;
    param_1 = local_d8;
  }
LAB_10014c9a8:
  (*(code *)PTR__objc_release_10082c7b0)(local_d0);
  uVar6 = FUN_10014c4fc();
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  cVar3 = _os_log_type_enabled(uVar6,0);
  if (cVar3 != '\0') {
    local_c4 = (uint)bVar9;
    local_c8 = 0x4020100;
    __os_log_impl(0x100000000,uVar6,0,"TouchID enrolled state set to: %{public}d",&local_c8,8);
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar6);
  *(byte *)(param_1 + 0x11) = bVar9;
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

