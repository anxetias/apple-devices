// name: FUN_10053e334
// address: 10053e334

undefined8 * FUN_10053e334(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 local_60 [16];
  long local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined2 uStack_38;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_1 = 0;
  param_1[1] = 0;
  local_50 = 0;
  iVar5 = (**(code **)(*param_2 + 0xa8))(param_2,0);
  if (iVar5 == -0x80) goto LAB_10053e439;
  if (iVar5 == 0) {
    if (param_2[0x95] == 0) goto LAB_10053e439;
    iVar5 = FUN_1003b035b(param_2[0x95],&local_50);
    if (iVar5 == -0x80) goto LAB_10053e439;
    if (iVar5 == 0) {
      if (local_50 != 0) {
        FUN_1001b7eb0(local_60);
        FUN_1003844b4(&local_48,1,local_60,0);
        FUN_100217418(param_1,&local_48);
        plVar3 = (long *)CONCAT26(uStack_3a,CONCAT24(uStack_3c,uStack_40));
        if (plVar3 != (long *)0x0) {
          LOCK();
          plVar1 = plVar3 + 1;
          lVar2 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
            std::__shared_weak_count::__release_weak();
          }
        }
        FUN_1001b7a50(local_60);
      }
      goto LAB_10053e439;
    }
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 == '\0') goto LAB_10053e439;
    uStack_3a = (undefined2)iVar5;
    uStack_38 = (undefined2)((uint)iVar5 >> 0x10);
  }
  else {
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 == '\0') goto LAB_10053e439;
    uStack_3a = (undefined2)iVar5;
    uStack_38 = (undefined2)((uint)iVar5 >> 0x10);
  }
  uStack_3c = 0x400;
  uStack_40 = 1;
  local_44 = 0x7a0a90;
  local_48 = 0x8220202;
  __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_48,0x12);
LAB_10053e439:
  FUN_10017060f(local_50);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

