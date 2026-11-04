// name: FUN_100419141
// address: 100419141

undefined8 * FUN_100419141(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
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
  undefined8 local_c0;
  undefined1 local_b8 [128];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar3 = (*(code *)PTR__objc_retain_10082c7b8)();
  puVar4 = operator_new(0x18,(nothrow_t *)PTR_nothrow_10082c970);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
  }
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = (long *)0x0;
  uStack_f0 = 0;
  local_108 = 0;
  lStack_100 = 0;
  uVar3 = (*(code *)PTR__objc_retain_10082c7b8)(uVar3);
  local_c0 = uVar3;
  lVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                    (uVar3,PTR_s_countByEnumeratingWithState_obje_10088bb48,&local_108,local_b8,0x10
                    );
  if (lVar5 != 0) {
    lVar1 = *local_f8;
    do {
      puVar2 = PTR_s_unsignedLongLongValue_10088be80;
      lVar6 = 0;
      do {
        if (*local_f8 != lVar1) {
          _objc_enumerationMutation(local_c0);
        }
        uVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                          (*(undefined8 *)(lStack_100 + lVar6 * 8),puVar2);
        FUN_1002c0d86(puVar4,uVar3);
        uVar3 = local_c0;
        lVar6 = lVar6 + 1;
      } while (lVar5 != lVar6);
      lVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                        (local_c0,PTR_s_countByEnumeratingWithState_obje_10088bb48,&local_108,
                         local_b8,0x10);
    } while (lVar5 != 0);
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar3);
  (*(code *)PTR__objc_release_10082c7b0)(uVar3);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

