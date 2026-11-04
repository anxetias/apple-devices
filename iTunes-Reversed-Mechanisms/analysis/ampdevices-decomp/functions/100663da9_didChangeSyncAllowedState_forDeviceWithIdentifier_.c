// name: didChangeSyncAllowedState:forDeviceWithIdentifier:
// address: 100663da9

/* Function Stack Size: 0x1c bytes */

void AMPDevicesClientBroadcaster::didChangeSyncAllowedState_forDeviceWithIdentifier_
               (ID param_1,SEL param_2,char param_3,ID param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_138;
  long lStack_130;
  long *local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  long local_f0;
  long local_e8;
  int local_dc;
  long local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [128];
  undefined4 local_48;
  char *local_44;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_d8 = (*(code *)PTR__objc_retain_10082c7b8)(param_4);
  puVar1 = PTR__objc_retain_10082c7b8;
  if (local_d8 == 0) {
    uVar5 = FUN_100642e20();
    lVar4 = _objc_retainAutoreleasedReturnValue(uVar5);
    cVar3 = _os_log_type_enabled(lVar4,0x10);
    if (cVar3 != '\0') {
      local_48 = 0x8200102;
      local_44 = "-[AMPDevicesClientBroadcaster didChangeSyncAllowedState:forDeviceWithIdentifier:]"
      ;
      __os_log_impl(0x100000000,lVar4,0x10,"%s: deviceIdentifier is nil",&local_48,0xc);
    }
  }
  else {
    lVar4 = (*(code *)PTR__objc_retain_10082c7b8)(param_1);
    _objc_sync_enter(lVar4);
    local_138 = 0;
    lStack_130 = 0;
    local_128 = (long *)0x0;
    uStack_120 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_e8 = lVar4;
    local_d0 = (*(code *)puVar1)(*(undefined8 *)(lVar4 + 0x10));
    lVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                      (local_d0,PTR_s_countByEnumeratingWithState_obje_10088bb48,&local_138,local_c8
                       ,0x10);
    if (lVar4 != 0) {
      local_f0 = *local_128;
      local_dc = (int)param_3;
      do {
        puVar2 = PTR_s_didChangeSyncAllowedState_forDev_10088de28;
        puVar1 = PTR_s_remoteObjectProxy_10088de20;
        lVar6 = 0;
        do {
          if (*local_128 != local_f0) {
            _objc_enumerationMutation(local_d0);
          }
          uVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                            (*(undefined8 *)(lStack_130 + lVar6 * 8),puVar1);
          uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
          cVar3 = _objc_opt_respondsToSelector(uVar5,puVar2);
          if (cVar3 != '\0') {
            (*(code *)PTR__objc_msgSend_10082c770)(uVar5,puVar2,local_dc,local_d8);
          }
          (*(code *)PTR__objc_release_10082c7b0)(uVar5);
          lVar6 = lVar6 + 1;
        } while (lVar4 != lVar6);
        lVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                          (local_d0,PTR_s_countByEnumeratingWithState_obje_10088bb48,&local_138,
                           local_c8,0x10);
      } while (lVar4 != 0);
    }
    (*(code *)PTR__objc_release_10082c7b0)(local_d0);
    lVar4 = local_e8;
    _objc_sync_exit(local_e8);
  }
  (*(code *)PTR__objc_release_10082c7b0)(lVar4);
  (*(code *)PTR__objc_release_10082c7b0)(local_d8);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

