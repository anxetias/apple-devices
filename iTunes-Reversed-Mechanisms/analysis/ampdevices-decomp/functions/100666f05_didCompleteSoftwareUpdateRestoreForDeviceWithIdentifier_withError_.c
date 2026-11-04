// name: didCompleteSoftwareUpdateRestoreForDeviceWithIdentifier:withError:
// address: 100666f05

/* Function Stack Size: 0x20 bytes */

void AMPDevicesClientBroadcaster::didCompleteSoftwareUpdateRestoreForDeviceWithIdentifier_withError_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 local_148;
  long lStack_140;
  long *local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  long local_108;
  long local_100;
  undefined *local_f8;
  undefined *local_f0;
  long local_e8;
  long local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [128];
  undefined4 local_48;
  char *local_44;
  long local_38;
  
  puVar1 = PTR__objc_retain_10082c7b8;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar5 = (*(code *)PTR__objc_retain_10082c7b8)(param_3);
  local_d8 = (*(code *)puVar1)(param_4);
  local_e0 = lVar5;
  if (lVar5 == 0) {
    uVar6 = FUN_100642e20();
    lVar5 = _objc_retainAutoreleasedReturnValue(uVar6);
    cVar3 = _os_log_type_enabled(lVar5,0x10);
    if (cVar3 != '\0') {
      local_48 = 0x8200102;
      local_44 = 
      "-[AMPDevicesClientBroadcaster didCompleteSoftwareUpdateRestoreForDeviceWithIdentifier:withError:]"
      ;
      __os_log_impl(0x100000000,lVar5,0x10,"%s: deviceIdentifier is nil",&local_48,0xc);
    }
  }
  else {
    lVar5 = (*(code *)puVar1)(param_1);
    _objc_sync_enter(lVar5);
    local_148 = 0;
    lStack_140 = 0;
    local_138 = (long *)0x0;
    uStack_130 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_e8 = lVar5;
    local_d0 = (*(code *)puVar1)(*(undefined8 *)(lVar5 + 0x10));
    lVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                      (local_d0,PTR_s_countByEnumeratingWithState_obje_10088bb48,&local_148,local_c8
                       ,0x10);
    if (lVar5 != 0) {
      local_100 = *local_138;
      do {
        puVar2 = PTR_s_didCompleteSoftwareUpdateRestore_10088df08;
        puVar1 = PTR_s_remoteObjectProxy_10088de20;
        local_f8 = PTR_s_intValue_10088c1a8;
        local_f0 = PTR_s_softwareUpdateRestoreDeviceIdent_10088df10;
        lVar8 = 0;
        local_108 = lVar5;
        do {
          if (*local_138 != local_100) {
            _objc_enumerationMutation(local_d0);
          }
          uVar6 = (*(code *)PTR__objc_msgSend_10082c770)
                            (*(undefined8 *)(lStack_140 + lVar8 * 8),puVar1);
          uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
          cVar3 = _objc_opt_respondsToSelector(uVar6,puVar2);
          if (cVar3 != '\0') {
            uVar4 = (*(code *)PTR__objc_msgSend_10082c770)(local_e0,local_f8);
            uVar7 = (*(code *)PTR__objc_msgSend_10082c770)
                              (&objc::class_t::AMPDevicesClientConnection,local_f0,uVar4);
            uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
            (*(code *)PTR__objc_msgSend_10082c770)(uVar6,puVar2,uVar7,local_d8);
            (*(code *)PTR__objc_release_10082c7b0)(uVar7);
          }
          (*(code *)PTR__objc_release_10082c7b0)(uVar6);
          lVar8 = lVar8 + 1;
        } while (local_108 != lVar8);
        lVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                          (local_d0,PTR_s_countByEnumeratingWithState_obje_10088bb48,&local_148,
                           local_c8,0x10);
      } while (lVar5 != 0);
    }
    (*(code *)PTR__objc_release_10082c7b0)(local_d0);
    lVar5 = local_e8;
    _objc_sync_exit(local_e8);
  }
  (*(code *)PTR__objc_release_10082c7b0)(lVar5);
  (*(code *)PTR__objc_release_10082c7b0)(local_d8);
  (*(code *)PTR__objc_release_10082c7b0)(local_e0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

