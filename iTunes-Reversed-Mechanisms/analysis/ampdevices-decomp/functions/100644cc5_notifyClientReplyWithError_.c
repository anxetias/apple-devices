// name: notifyClientReplyWithError:
// address: 100644cc5

/* Function Stack Size: 0x18 bytes */

void AMPDeviceProgress::notifyClientReplyWithError_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 local_108;
  long lStack_100;
  long *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  long local_c0;
  undefined1 local_b8 [128];
  long local_38;
  
  puVar3 = PTR__objc_retain_10082c7b8;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar4 = (*(code *)PTR__objc_retain_10082c7b8)(param_3);
  lVar5 = (*(code *)puVar3)(param_1);
  _objc_sync_enter(lVar5);
  local_108 = 0;
  lStack_100 = 0;
  local_f8 = (long *)0x0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c0 = lVar5;
  uVar6 = (*(code *)puVar3)(*(undefined8 *)(lVar5 + 0x38));
  lVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                    (uVar6,PTR_s_countByEnumeratingWithState_obje_10088bb48,&local_108,local_b8,0x10
                    );
  if (lVar5 != 0) {
    lVar1 = *local_f8;
    do {
      lVar7 = 0;
      do {
        if (*local_f8 != lVar1) {
          _objc_enumerationMutation(uVar6);
        }
        lVar2 = *(long *)(lStack_100 + lVar7 * 8);
        (**(code **)(lVar2 + 0x10))(lVar2,uVar4);
        lVar7 = lVar7 + 1;
      } while (lVar5 != lVar7);
      lVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                        (uVar6,PTR_s_countByEnumeratingWithState_obje_10088bb48,&local_108,local_b8,
                         0x10);
    } while (lVar5 != 0);
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar6);
  lVar5 = local_c0;
  puVar3 = PTR_s_removeAllObjects_10088c650;
  (*(code *)PTR__objc_msgSend_10082c770)
            (*(undefined8 *)(local_c0 + 0x30),PTR_s_removeAllObjects_10088c650);
  (*(code *)PTR__objc_msgSend_10082c770)(*(undefined8 *)(lVar5 + 0x38),puVar3);
  *(undefined1 *)(lVar5 + 8) = 0;
  _objc_sync_exit(lVar5);
  (*(code *)PTR__objc_release_10082c7b0)(lVar5);
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

