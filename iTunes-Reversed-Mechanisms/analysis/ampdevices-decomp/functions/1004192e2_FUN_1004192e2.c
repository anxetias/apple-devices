// name: FUN_1004192e2
// address: 1004192e2

undefined8 * FUN_1004192e2(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
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
  undefined1 local_d8 [16];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [128];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar3 = (*(code *)PTR__objc_retain_10082c7b8)();
  local_c8 = operator_new(0x18,(nothrow_t *)PTR_nothrow_10082c970);
  if (local_c8 != (undefined8 *)0x0) {
    *local_c8 = 0;
    local_c8[1] = 0;
    local_c8[2] = 0;
  }
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = (long *)0x0;
  uStack_100 = 0;
  local_118 = 0;
  lStack_110 = 0;
  local_c0 = (*(code *)PTR__objc_retain_10082c7b8)(uVar3);
  lVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                    (local_c0,PTR_s_countByEnumeratingWithState_obje_10088bb48,&local_118,local_b8,
                     0x10);
  if (lVar4 != 0) {
    lVar1 = *local_108;
    do {
      puVar2 = PTR_s_UTF8String_10088bf18;
      lVar5 = 0;
      do {
        if (*local_108 != lVar1) {
          _objc_enumerationMutation(local_c0);
        }
        uVar3 = _objc_retainAutorelease(*(undefined8 *)(lStack_110 + lVar5 * 8));
        uVar3 = (*(code *)PTR__objc_msgSend_10082c770)(uVar3,puVar2);
        FUN_1001b7b04(local_d8,uVar3);
        FUN_1002c16b4(local_c8,local_d8);
        FUN_1001b7a50(local_d8);
        lVar5 = lVar5 + 1;
      } while (lVar4 != lVar5);
      lVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                        (local_c0,PTR_s_countByEnumeratingWithState_obje_10088bb48,&local_118,
                         local_b8,0x10);
    } while (lVar4 != 0);
  }
  (*(code *)PTR__objc_release_10082c7b0)(local_c0);
  (*(code *)PTR__objc_release_10082c7b0)(local_c0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return local_c8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

