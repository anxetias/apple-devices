// name: connectionForUserInteractionWithSelector:forOptionalDeviceWithIdentifier:
// address: 100668031

/* Function Stack Size: 0x20 bytes */

ID AMPDevicesClientBroadcaster::
   connectionForUserInteractionWithSelector_forOptionalDeviceWithIdentifier_
             (ID param_1,SEL param_2,SEL param_3,ID param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  ID IVar8;
  long lVar9;
  long lVar10;
  undefined *local_180;
  undefined8 local_178;
  code *local_170;
  undefined *local_168;
  long local_160;
  undefined8 local_158;
  long lStack_150;
  long *local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined *local_110;
  undefined *local_108;
  long local_100;
  long local_f8;
  undefined *local_f0;
  SEL local_e8;
  long local_e0;
  long local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [128];
  uint local_48 [4];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar4 = (*(code *)PTR__objc_retain_10082c7b8)(param_4);
  puVar2 = PTR_s_connectionForUserInteractionWith_10088df30;
  puVar1 = PTR__objc_retain_10082c7b8;
  if (lVar4 == 0) {
    local_d8 = lVar4;
    lVar4 = (*(code *)PTR__objc_retain_10082c7b8)(param_1);
    _objc_sync_enter(lVar4);
    local_158 = 0;
    lStack_150 = 0;
    local_148 = (long *)0x0;
    uStack_140 = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_e0 = lVar4;
    local_d0 = (*(code *)puVar1)(*(undefined8 *)(lVar4 + 0x10));
    lVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                      (local_d0,PTR_s_countByEnumeratingWithState_obje_10088bb48,&local_158,local_c8
                       ,0x10);
    if (lVar4 != 0) {
      local_f8 = *local_148;
      lVar6 = 0;
      local_e8 = param_3;
      do {
        local_110 = PTR_s_exportedObject_10088da98;
        local_108 = PTR_s_allowsUI_10088df20;
        local_f0 = PTR_s_remoteObjectProxy_10088de20;
        lVar9 = 0;
        lVar10 = lVar6;
        local_100 = lVar4;
        do {
          if (*local_148 != local_f8) {
            _objc_enumerationMutation(local_d0);
          }
          lVar6 = (*(code *)PTR__objc_retain_10082c7b8)(*(undefined8 *)(lStack_150 + lVar9 * 8));
          (*(code *)PTR__objc_release_10082c7b0)(lVar10);
          uVar5 = (*(code *)PTR__objc_msgSend_10082c770)(lVar6,local_110);
          uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
          cVar3 = (*(code *)PTR__objc_msgSend_10082c770)(uVar5,local_108);
          if (cVar3 != '\0') {
            uVar7 = (*(code *)PTR__objc_msgSend_10082c770)(lVar6,local_f0);
            uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
            cVar3 = _objc_opt_respondsToSelector(uVar7,local_e8);
            (*(code *)PTR__objc_release_10082c7b0)(uVar7);
            if (cVar3 != '\0') {
              (*(code *)PTR__objc_release_10082c7b0)(uVar5);
              (*(code *)PTR__objc_release_10082c7b0)(local_d0);
              if (lVar6 != 0) goto LAB_1006683e7;
              goto LAB_10066838f;
            }
          }
          (*(code *)PTR__objc_release_10082c7b0)(uVar5);
          lVar9 = lVar9 + 1;
          lVar10 = lVar6;
        } while (local_100 != lVar9);
        lVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                          (local_d0,PTR_s_countByEnumeratingWithState_obje_10088bb48,&local_158,
                           local_c8,0x10);
      } while (lVar4 != 0);
      (*(code *)PTR__objc_release_10082c7b0)(lVar6);
    }
    (*(code *)PTR__objc_release_10082c7b0)(local_d0);
LAB_10066838f:
    uVar5 = FUN_100642e20();
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_48[0] = local_48[0] & 0xffff0000;
      __os_log_impl(0x100000000,uVar5,0x10,"no XPC UI connection!",local_48,2);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar5);
    lVar6 = 0;
LAB_1006683e7:
    lVar4 = local_e0;
    _objc_sync_exit(local_e0);
  }
  else {
    uVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                      (param_1,PTR_s_connectionForUserInteractionWith_10088df30,param_3,lVar4);
    lVar6 = _objc_retainAutoreleasedReturnValue(uVar5);
    if (lVar6 != 0) goto LAB_100668406;
    local_180 = PTR___NSConcreteStackBlock_10082caf0;
    local_178 = 0xc2000000;
    local_170 = FUN_1006684d4;
    local_168 = &DAT_10085cec8;
    local_d8 = lVar4;
    lVar4 = (*(code *)PTR__objc_retain_10082c7b8)();
    local_160 = lVar4;
    _dispatch_sync(PTR___dispatch_main_q_10082cb60,&local_180);
    _usleep(2000000);
    uVar5 = (*(code *)PTR__objc_msgSend_10082c770)(param_1,puVar2,param_3,lVar4);
    lVar6 = _objc_retainAutoreleasedReturnValue(uVar5);
    lVar4 = local_160;
    if (lVar6 == 0) {
      uVar5 = FUN_100642e20();
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_48[0] = 0x8000100;
        local_48[1] = 0;
        local_48[2] = 0x40000000;
        __os_log_impl(0x100000000,uVar5,0x10,"no XPC UI connection after waiting %.1f seconds!",
                      local_48,0xc);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar5);
      lVar4 = local_160;
    }
  }
  (*(code *)PTR__objc_release_10082c7b0)(lVar4);
  lVar4 = local_d8;
LAB_100668406:
  (*(code *)PTR__objc_release_10082c7b0)(lVar4);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  IVar8 = _objc_autoreleaseReturnValue(lVar6);
  return IVar8;
}

