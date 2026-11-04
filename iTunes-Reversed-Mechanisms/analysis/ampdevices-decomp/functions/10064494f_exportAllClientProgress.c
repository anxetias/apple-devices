// name: exportAllClientProgress
// address: 10064494f

/* Function Stack Size: 0x10 bytes */

void AMPDeviceProgress::exportAllClientProgress(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  undefined8 local_118;
  long lStack_110;
  long *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  long local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [128];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_118 = 0;
  lStack_110 = 0;
  local_108 = (long *)0x0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_c0 = (*(code *)PTR__objc_retain_10082c7b8)(*(undefined8 *)(param_1 + 0x30));
  lVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                    (local_c0,PTR_s_countByEnumeratingWithState_obje_10088bb48,&local_118,local_b8,
                     0x10);
  if (lVar4 != 0) {
    local_d0 = *local_108;
    do {
      puVar2 = PTR_s_shouldExportClientProgress__10088d9e0;
      local_c8 = PTR_s_exportClientProgress__10088d988;
      lVar5 = 0;
      do {
        if (*local_108 != local_d0) {
          _objc_enumerationMutation(local_c0);
        }
        uVar1 = *(undefined8 *)(lStack_110 + lVar5 * 8);
        cVar3 = (*(code *)PTR__objc_msgSend_10082c770)(param_1,puVar2,uVar1);
        if (cVar3 != '\0') {
          (*(code *)PTR__objc_msgSend_10082c770)(param_1,local_c8,uVar1);
        }
        lVar5 = lVar5 + 1;
      } while (lVar4 != lVar5);
      lVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                        (local_c0,PTR_s_countByEnumeratingWithState_obje_10088bb48,&local_118,
                         local_b8,0x10);
    } while (lVar4 != 0);
  }
  (*(code *)PTR__objc_release_10082c7b0)(local_c0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

