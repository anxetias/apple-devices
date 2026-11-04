// name: didChangeDevicesClientConnectionState:
// address: 1006628cd

/* Function Stack Size: 0x18 bytes */

void AMPDevicesClientBroadcaster::didChangeDevicesClientConnectionState_
               (ID param_1,SEL param_2,unsigned_long_long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_118;
  long lStack_110;
  long *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  long local_d8;
  unsigned_long_long local_d0;
  long local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [128];
  long local_38;
  
  puVar1 = PTR__objc_retain_10082c7b8;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_d0 = param_3;
  lVar4 = (*(code *)PTR__objc_retain_10082c7b8)();
  _objc_sync_enter(lVar4);
  local_118 = 0;
  lStack_110 = 0;
  local_108 = (long *)0x0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_c8 = lVar4;
  local_c0 = (*(code *)puVar1)(*(undefined8 *)(lVar4 + 0x10));
  lVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                    (local_c0,PTR_s_countByEnumeratingWithState_obje_10088bb48,&local_118,local_b8,
                     0x10);
  if (lVar4 != 0) {
    local_d8 = *local_108;
    do {
      puVar2 = PTR_s_didChangeDevicesClientConnection_10088de78;
      puVar1 = PTR_s_remoteObjectProxy_10088de20;
      lVar6 = 0;
      do {
        if (*local_108 != local_d8) {
          _objc_enumerationMutation(local_c0);
        }
        uVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                          (*(undefined8 *)(lStack_110 + lVar6 * 8),puVar1);
        uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
        cVar3 = _objc_opt_respondsToSelector(uVar5,puVar2);
        if (cVar3 != '\0') {
          (*(code *)PTR__objc_msgSend_10082c770)(uVar5,puVar2,local_d0);
        }
        (*(code *)PTR__objc_release_10082c7b0)(uVar5);
        lVar6 = lVar6 + 1;
      } while (lVar4 != lVar6);
      lVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                        (local_c0,PTR_s_countByEnumeratingWithState_obje_10088bb48,&local_118,
                         local_b8,0x10);
    } while (lVar4 != 0);
  }
  (*(code *)PTR__objc_release_10082c7b0)(local_c0);
  lVar4 = local_c8;
  _objc_sync_exit(local_c8);
  (*(code *)PTR__objc_release_10082c7b0)(lVar4);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

