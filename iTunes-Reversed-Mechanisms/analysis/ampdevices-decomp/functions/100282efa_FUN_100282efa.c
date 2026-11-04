// name: FUN_100282efa
// address: 100282efa

void FUN_100282efa(long param_1,undefined8 param_2,undefined8 *param_3,long *param_4)

{
  long *plVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *local_d0;
  undefined8 local_c8;
  code *local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
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
  local_98 = 0;
  local_88 = 0x6012000000;
  local_80 = FUN_1002830fa;
  local_78 = FUN_100283145;
  local_70 = "";
  local_48 = local_68;
  plVar1 = (long *)param_4[4];
  local_90 = &local_98;
  if (plVar1 == (long *)0x0) {
    local_48 = (long *)0x0;
  }
  else if (plVar1 == param_4) {
    (**(code **)(*plVar1 + 0x18))();
  }
  else {
    local_48 = (long *)(**(code **)(*plVar1 + 0x10))();
  }
  local_a0 = param_2;
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_100283172(*(long *)(param_1 + 0x38),param_3);
  }
  puVar3 = PTR__objc_retain_10082c7b8;
  local_b0 = (*(code *)PTR__objc_retain_10082c7b8)(*param_3);
  puVar4 = PTR_s_removeArtwork_forUUID_withReply__10088c608;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  local_d0 = PTR___NSConcreteStackBlock_10082caf0;
  local_c8 = 0xc2000000;
  local_c0 = FUN_1002832a2;
  local_b8 = &DAT_100844e50;
  local_a8 = &local_98;
  uVar5 = (*(code *)puVar3)(local_b0);
  (*(code *)PTR__objc_msgSend_10082c770)(uVar2,puVar4,local_a0,uVar5,&local_d0);
  (*(code *)PTR__objc_release_10082c7b0)(local_b0);
  (*(code *)PTR__objc_release_10082c7b0)(uVar5);
  __Block_object_dispose(&local_98,8);
  if (local_48 == local_68) {
    lVar6 = 0x20;
  }
  else {
    lVar6 = 0x28;
    if (local_48 == (long *)0x0) goto LAB_100283072;
  }
  (**(code **)(*local_48 + lVar6))();
LAB_100283072:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

