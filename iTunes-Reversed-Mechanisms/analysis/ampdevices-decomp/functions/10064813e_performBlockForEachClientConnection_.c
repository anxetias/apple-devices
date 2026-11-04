// name: performBlockForEachClientConnection:
// address: 10064813e

/* Function Stack Size: 0x18 bytes */

void AMPDevicesClientConnection::performBlockForEachClientConnection_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 local_108;
  long lStack_100;
  long *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  long local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [128];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_c8 = (*(code *)PTR__objc_retain_10082c7b8)(param_3);
  local_108 = 0;
  lStack_100 = 0;
  local_f8 = (long *)0x0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  uVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                    (&objc::class_t::AMPDevicesClientBroadcaster,PTR_s_sharedInstance_10088c4b8);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar3 = (*(code *)PTR__objc_msgSend_10082c770)(uVar4,PTR_s_xpcConnections_10088da90);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  local_c0 = uVar3;
  lVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                    (uVar3,PTR_s_countByEnumeratingWithState_obje_10088bb48,&local_108,local_b8,0x10
                    );
  if (lVar5 != 0) {
    lVar1 = *local_f8;
    do {
      puVar2 = PTR_s_exportedObject_10088da98;
      lVar6 = 0;
      do {
        if (*local_f8 != lVar1) {
          _objc_enumerationMutation(local_c0);
        }
        uVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                          (*(undefined8 *)(lStack_100 + lVar6 * 8),puVar2);
        uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
        (**(code **)(local_c8 + 0x10))(local_c8,uVar3);
        (*(code *)PTR__objc_release_10082c7b0)(uVar3);
        uVar3 = local_c0;
        lVar6 = lVar6 + 1;
      } while (lVar5 != lVar6);
      lVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                        (local_c0,PTR_s_countByEnumeratingWithState_obje_10088bb48,&local_108,
                         local_b8,0x10);
    } while (lVar5 != 0);
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar3);
  (*(code *)PTR__objc_release_10082c7b0)(local_c8);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

