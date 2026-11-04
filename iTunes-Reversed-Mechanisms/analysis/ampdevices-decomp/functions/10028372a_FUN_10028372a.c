// name: FUN_10028372a
// address: 10028372a

void FUN_10028372a(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 local_98;
  undefined8 *local_90;
  undefined8 local_88;
  code *local_80;
  code *local_78;
  char *local_70;
  long local_68 [4];
  long *local_48;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_90 = &local_98;
  local_98 = 0;
  local_88 = 0x6012000000;
  local_80 = FUN_1002835b9;
  local_78 = FUN_1002835cb;
  local_70 = "";
  FUN_10028593a(local_68,param_3);
  (*(code *)PTR__objc_msgSend_10082c770)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_purgeAllItemsforDatabase_withRep_10088c618,
             param_2);
  if (*(long **)(param_1 + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x38) + 8))();
  }
  __Block_object_dispose(&local_98,8);
  if (local_48 == local_68) {
    lVar1 = 0x20;
  }
  else {
    lVar1 = 0x28;
    if (local_48 == (long *)0x0) goto LAB_100283835;
  }
  (**(code **)(*local_48 + lVar1))();
LAB_100283835:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

