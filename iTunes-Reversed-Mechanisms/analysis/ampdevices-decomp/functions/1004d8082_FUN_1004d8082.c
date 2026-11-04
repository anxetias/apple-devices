// name: FUN_1004d8082
// address: 1004d8082

void FUN_1004d8082(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78 [16];
  undefined **local_68;
  undefined1 *local_60;
  undefined ***local_48;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001aa1ba(local_78);
  uVar1 = *(undefined8 *)(param_1 + 8);
  local_48 = &local_68;
  local_68 = &PTR_FUN_10085ec58;
  local_60 = local_78;
  local_80 = FUN_1001a7bfa(uVar1);
  local_88 = 0;
  FUN_1001a7c48(uVar1,&local_88,&local_68);
  if (local_48 == &local_68) {
    lVar2 = 0x20;
  }
  else {
    lVar2 = 0x28;
    if (local_48 == (undefined ***)0x0) goto LAB_1004d8114;
  }
  (**(code **)((long)*local_48 + lVar2))();
LAB_1004d8114:
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  FUN_1001a7b90(&local_68,local_78);
  FUN_1001a7d28(uVar1,&local_68);
  FUN_1001ab240(&local_68);
  FUN_1001a8fac(local_78);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

