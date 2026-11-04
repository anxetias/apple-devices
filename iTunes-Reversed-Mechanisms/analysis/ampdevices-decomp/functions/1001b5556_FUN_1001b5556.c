// name: FUN_1001b5556
// address: 1001b5556

double FUN_1001b5556(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 local_128;
  long lStack_120;
  long *local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  undefined8 local_d0;
  double local_c8;
  double local_c0;
  undefined1 local_b8 [128];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_128 = 0;
  lStack_120 = 0;
  local_118 = (long *)0x0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_d8 = param_1;
  uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                    (*(undefined8 *)(param_1 + 0x48),PTR_s_representations_10088c238);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  local_d0 = uVar4;
  lVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                    (uVar4,PTR_s_countByEnumeratingWithState_obje_10088bb48,&local_128,local_b8,0x10
                    );
  puVar1 = PTR__objc_msgSend_10082c770;
  if (lVar5 == 0) {
    local_c0 = 0.0;
    local_c8 = 0.0;
  }
  else {
    local_e0 = *local_118;
    local_c0 = 0.0;
    local_c8 = 0.0;
    do {
      puVar3 = PTR_s_pixelsHigh_10088c248;
      puVar2 = PTR_s_pixelsWide_10088c240;
      lVar6 = 0;
      local_e8 = lVar5;
      do {
        if (*local_118 != local_e0) {
          _objc_enumerationMutation(local_d0);
        }
        uVar4 = *(undefined8 *)(lStack_120 + lVar6 * 8);
        lVar5 = (*(code *)puVar1)(uVar4,puVar2);
        if ((long)local_c8 < lVar5) {
          lVar5 = (*(code *)puVar1)(uVar4,puVar2);
          local_c8 = (double)lVar5;
        }
        lVar5 = (*(code *)puVar1)(uVar4,puVar3);
        if ((long)local_c0 < lVar5) {
          lVar5 = (*(code *)puVar1)(uVar4,puVar3);
          local_c0 = (double)lVar5;
        }
        uVar4 = local_d0;
        lVar6 = lVar6 + 1;
      } while (local_e8 != lVar6);
      lVar5 = (*(code *)puVar1)(local_d0,PTR_s_countByEnumeratingWithState_obje_10088bb48,&local_128
                                ,local_b8,0x10);
    } while (lVar5 != 0);
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  if ((((local_c8 == 0.0) && (!NAN(local_c8))) && (local_c0 == 0.0)) && (!NAN(local_c0))) {
    local_c8 = (double)(*(code *)PTR__objc_msgSend_10082c770)
                                 (*(undefined8 *)(local_d8 + 0x48),PTR_s_size_10088c220);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return local_c8;
}

