// name: connectionForUserInteractionWithSelector:andDeviceWithIdentifier:
// address: 1006674e2

/* Function Stack Size: 0x20 bytes */

ID AMPDevicesClientBroadcaster::connectionForUserInteractionWithSelector_andDeviceWithIdentifier_
             (ID param_1,SEL param_2,SEL param_3,ID param_4)

{
  undefined *puVar1;
  char cVar2;
  pid_t pVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ID IVar9;
  long lVar10;
  undefined8 local_298;
  long lStack_290;
  long *local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 *local_250;
  undefined8 local_248;
  code *local_240;
  code *local_238;
  undefined8 local_230;
  undefined *local_228;
  undefined8 local_220;
  code *local_218;
  undefined *local_210;
  long local_208;
  undefined8 *local_200;
  undefined8 *local_1f8;
  undefined *local_1f0;
  undefined8 local_1e8;
  code *local_1e0;
  undefined *local_1d8;
  undefined8 local_1d0;
  undefined *local_1c8;
  long local_1c0;
  long local_1b8;
  SEL local_1b0;
  undefined *local_1a8;
  undefined *local_1a0;
  undefined *local_198;
  undefined *local_190;
  SEL local_188;
  undefined8 local_180;
  undefined8 *local_178;
  undefined8 local_170;
  undefined *local_160;
  undefined *local_158;
  undefined *local_150;
  undefined *local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  long local_120;
  long local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f4;
  undefined2 local_ec;
  pid_t local_ea;
  undefined2 local_e6;
  undefined8 local_e4;
  undefined2 local_dc;
  undefined4 local_da;
  undefined2 local_d6;
  undefined4 local_d4;
  undefined2 local_d0;
  undefined8 local_ce;
  undefined1 local_b8 [128];
  long local_38;
  
  puVar1 = PTR__objc_retain_10082c7b8;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_1b0 = param_3;
  local_188 = param_2;
  lVar5 = (*(code *)PTR__objc_retain_10082c7b8)(param_4);
  local_118 = (*(code *)puVar1)(param_1);
  _objc_sync_enter();
  uVar6 = 0;
  local_250 = &local_258;
  local_258 = 0;
  local_248 = 0x3032000000;
  local_240 = FUN_100667df4;
  local_238 = FUN_100667e0a;
  local_230 = 0;
  local_120 = lVar5;
  if (lVar5 != 0) {
    local_268 = 0;
    uStack_260 = 0;
    local_278 = 0;
    uStack_270 = 0;
    local_288 = (long *)0x0;
    uStack_280 = 0;
    local_298 = 0;
    lStack_290 = 0;
    local_110 = (*(code *)PTR__objc_retain_10082c7b8)(*(undefined8 *)(local_118 + 0x10));
    lVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                      (local_110,PTR_s_countByEnumeratingWithState_obje_10088bb48,&local_298,
                       local_b8,0x10);
    if (lVar5 != 0) {
      local_1b8 = *local_288;
      do {
        local_160 = PTR_s_exportedObject_10088da98;
        local_1c8 = PTR_s_allowsUI_10088df20;
        local_158 = PTR_s_remoteObjectProxy_10088de20;
        local_150 = PTR_s_canShowUserInteractionForDeviceW_10088df28;
        local_1a0 = PTR_s_processInfo_10088bad8;
        local_148 = PTR_s_processName_10088daf8;
        local_198 = PTR_s_processID_10088de18;
        local_190 = PTR_s_clientID_10088d1b8;
        local_1a8 = PTR_s_synchronousRemoteObjectProxyWith_10088c560;
        lVar10 = 0;
        local_1c0 = lVar5;
        do {
          if (*local_288 != local_1b8) {
            _objc_enumerationMutation(local_110);
          }
          lVar5 = *(long *)(lStack_290 + lVar10 * 8);
          uVar6 = (*(code *)PTR__objc_msgSend_10082c770)(lVar5,local_160);
          uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
          local_180 = 0;
          local_178 = &local_180;
          local_170 = 0x2020000000;
          cVar2 = (*(code *)PTR__objc_msgSend_10082c770)(uVar6,local_1c8);
          if (cVar2 != '\0') {
            uVar7 = (*(code *)PTR__objc_msgSend_10082c770)(lVar5,local_158);
            uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
            cVar2 = _objc_opt_respondsToSelector(uVar7,local_1b0);
            (*(code *)PTR__objc_release_10082c7b0)(uVar7);
            if (cVar2 != '\0') {
              uVar7 = (*(code *)PTR__objc_msgSend_10082c770)(lVar5,local_158);
              uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
              cVar2 = _objc_opt_respondsToSelector(uVar7,local_150);
              (*(code *)PTR__objc_release_10082c7b0)(uVar7);
              if (cVar2 != '\0') {
                uVar7 = (*(code *)PTR__objc_msgSend_10082c770)(lVar5,local_160);
                uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
                uVar8 = FUN_100642e20();
                local_108 = _objc_retainAutoreleasedReturnValue(uVar8);
                cVar2 = _os_log_type_enabled(local_108,1);
                if (cVar2 != '\0') {
                  uVar8 = (*(code *)PTR__objc_msgSend_10082c770)
                                    (PTR__OBJC_CLASS___NSProcessInfo_10082c6a0,local_1a0);
                  local_138 = _objc_retainAutoreleasedReturnValue(uVar8);
                  uVar8 = (*(code *)PTR__objc_msgSend_10082c770)(local_138,local_148);
                  uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
                  local_100 = (*(code *)PTR__objc_retain_10082c7b8)(uVar8);
                  local_128 = uVar7;
                  pVar3 = _getpid();
                  uVar8 = (*(code *)PTR__objc_msgSend_10082c770)(uVar7,local_148);
                  local_140 = _objc_retainAutoreleasedReturnValue(uVar8);
                  local_12c = (*(code *)PTR__objc_msgSend_10082c770)(uVar7,local_198);
                  uVar4 = (*(code *)PTR__objc_msgSend_10082c770)(local_128,local_190);
                  local_ce = _sel_getName(local_188);
                  uVar7 = local_140;
                  local_f8 = 0x8420602;
                  local_f4 = local_100;
                  local_ec = 0x400;
                  local_e6 = 0x842;
                  local_e4 = local_140;
                  local_dc = 0x400;
                  local_da = local_12c;
                  local_d6 = 0x400;
                  local_d0 = 0x822;
                  local_ea = pVar3;
                  local_d4 = uVar4;
                  __os_log_impl(0x100000000,local_108,1,
                                "%{public}@ [%d] -> %{public}@ [%d:%u]: { sel = %{public}s }",
                                &local_f8,0x32);
                  (*(code *)PTR__objc_release_10082c7b0)(uVar7);
                  uVar7 = local_128;
                  (*(code *)PTR__objc_release_10082c7b0)(local_100);
                  (*(code *)PTR__objc_release_10082c7b0)(local_138);
                  (*(code *)PTR__objc_release_10082c7b0)(local_100);
                }
                (*(code *)PTR__objc_release_10082c7b0)(local_108);
                (*(code *)PTR__objc_release_10082c7b0)(uVar7);
                puVar1 = PTR___NSConcreteStackBlock_10082caf0;
                local_1f0 = PTR___NSConcreteStackBlock_10082caf0;
                local_1e8 = 0xc2000000;
                local_1e0 = FUN_100667e19;
                local_1d8 = &DAT_100871a20;
                local_108 = uVar6;
                local_1d0 = (*(code *)PTR__objc_retain_10082c7b8)();
                local_100 = local_1d0;
                uVar6 = (*(code *)PTR__objc_msgSend_10082c770)(lVar5,local_1a8,&local_1f0);
                uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
                local_228 = puVar1;
                local_220 = 0xc2000000;
                local_218 = FUN_100667f84;
                local_210 = &DAT_100871a50;
                local_200 = &local_258;
                local_1f8 = &local_180;
                local_208 = lVar5;
                (*(code *)PTR__objc_msgSend_10082c770)(uVar6,local_150,local_120,&local_228);
                (*(code *)PTR__objc_release_10082c7b0)(uVar6);
                uVar6 = local_108;
                if ((lVar5 != 0) && (*(char *)(local_178 + 3) != '\0')) {
                  (*(code *)PTR__objc_release_10082c7b0)(local_1d0);
                  __Block_object_dispose(&local_180,8);
                  (*(code *)PTR__objc_release_10082c7b0)(local_100);
                  goto LAB_100667b04;
                }
                (*(code *)PTR__objc_release_10082c7b0)(local_1d0);
              }
            }
          }
          __Block_object_dispose(&local_180,8);
          (*(code *)PTR__objc_release_10082c7b0)(uVar6);
          lVar10 = lVar10 + 1;
        } while (local_1c0 != lVar10);
        lVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                          (local_110,PTR_s_countByEnumeratingWithState_obje_10088bb48,&local_298,
                           local_b8,0x10);
      } while (lVar5 != 0);
    }
LAB_100667b04:
    (*(code *)PTR__objc_release_10082c7b0)(local_110);
    if (local_250[5] == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = (*(code *)PTR__objc_msgSend_10082c770)(local_250[5],PTR_s_exportedObject_10088da98);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      uVar7 = FUN_100642e20();
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
      cVar2 = _os_log_type_enabled(uVar7,1);
      if (cVar2 != '\0') {
        uVar8 = (*(code *)PTR__objc_msgSend_10082c770)(uVar6,PTR_s_processName_10088daf8);
        uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
        pVar3 = (*(code *)PTR__objc_msgSend_10082c770)(uVar6,PTR_s_processID_10088de18);
        uVar4 = (*(code *)PTR__objc_msgSend_10082c770)(uVar6,PTR_s_clientID_10088d1b8);
        local_f8 = 0x8420302;
        local_ec = 0x400;
        local_e6 = 0x400;
        local_e4 = CONCAT44(local_e4._4_4_,uVar4);
        local_f4 = uVar8;
        local_ea = pVar3;
        __os_log_impl(0x100000000,uVar7,1,"UI target selected: %{public}@ [%u:%u]",&local_f8,0x18);
        (*(code *)PTR__objc_release_10082c7b0)(uVar8);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar7);
      (*(code *)PTR__objc_release_10082c7b0)(uVar6);
      uVar6 = local_250[5];
    }
  }
  uVar6 = (*(code *)PTR__objc_retain_10082c7b8)(uVar6);
  __Block_object_dispose(&local_258,8);
  (*(code *)PTR__objc_release_10082c7b0)(local_230);
  lVar5 = local_118;
  _objc_sync_exit(local_118);
  (*(code *)PTR__objc_release_10082c7b0)(lVar5);
  (*(code *)PTR__objc_release_10082c7b0)(local_120);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  IVar9 = _objc_autoreleaseReturnValue(uVar6);
  return IVar9;
}

