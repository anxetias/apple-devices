// name: FUN_100283402
// address: 100283402

void FUN_100283402(long param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_98;
  undefined8 *local_90;
  undefined8 local_88;
  code *local_80;
  code *local_78;
  char *local_70;
  long local_68 [4];
  long *local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_90 = &local_98;
  local_98 = 0;
  local_88 = 0x6012000000;
  local_80 = FUN_1002835b9;
  local_78 = FUN_1002835cb;
  local_70 = "";
  FUN_10028593a(local_68,param_3);
  uVar2 = FUN_100385b97(param_2);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  if (*(long *)(param_1 + 0x38) != 0) {
    lVar1 = param_2[1];
    for (lVar3 = *param_2; lVar3 != lVar1; lVar3 = lVar3 + 0x28) {
      FUN_100283172(*(undefined8 *)(param_1 + 0x38),lVar3 + 8);
    }
  }
  (*(code *)PTR__objc_msgSend_10082c770)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_removeArtworkWithArray_withReply_10088c610,uVar2)
  ;
  (*(code *)PTR__objc_release_10082c7b0)(uVar2);
  __Block_object_dispose(&local_98,8);
  if (local_48 == local_68) {
    lVar3 = 0x20;
  }
  else {
    lVar3 = 0x28;
    if (local_48 == (long *)0x0) goto LAB_10028353c;
  }
  (**(code **)(*local_48 + lVar3))();
LAB_10028353c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

