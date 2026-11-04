// name: FUN_10012adae
// address: 10012adae

void FUN_10012adae(long param_1)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_68;
  long *local_60;
  undefined **local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined ***local_38;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  LOCK();
  bVar2 = *(byte *)(param_1 + 0x70);
  *(byte *)(param_1 + 0x70) = 1;
  UNLOCK();
  uVar4 = FUN_10012a714();
  cVar3 = _os_log_type_enabled(uVar4,1);
  if ((bVar2 & 1) != 0) {
    if (cVar3 != '\0') {
      local_58 = (undefined **)((ulong)local_58._2_6_ << 0x10);
      __os_log_impl(0x100000000,uVar4,1,"Bag refresh triggered but request already in progress.",
                    &local_58,2);
    }
    goto LAB_10012aef1;
  }
  if (cVar3 != '\0') {
    local_58 = (undefined **)((ulong)local_58._2_6_ << 0x10);
    __os_log_impl(0x100000000,uVar4,1,"Bag refresh triggered. Scheduling new bag request.",&local_58
                  ,2);
  }
  FUN_10012c7a8(&local_68);
  uVar4 = local_68;
  FUN_10012a8d4();
  uStack_44 = DAT_10088fc38._4_4_;
  uStack_48 = (undefined4)DAT_10088fc38;
  uStack_4c = DAT_10088fc30._4_4_;
  local_50 = (undefined4)DAT_10088fc30;
  if (CONCAT44(DAT_10088fc38._4_4_,(undefined4)DAT_10088fc38) != 0) {
    LOCK();
    plVar1 = (long *)(CONCAT44(DAT_10088fc38._4_4_,(undefined4)DAT_10088fc38) + 0x10);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  local_58 = &PTR_FUN_100838c98;
  local_38 = &local_58;
  FUN_100144084(uVar4,&local_58);
  if (local_38 == &local_58) {
    lVar5 = 0x20;
LAB_10012aeb6:
    (**(code **)((long)*local_38 + lVar5))();
  }
  else {
    lVar5 = 0x28;
    if (local_38 != (undefined ***)0x0) goto LAB_10012aeb6;
  }
  FUN_10014105c(local_68);
  if (local_60 != (long *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    lVar5 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar5 == 0) {
      (**(code **)(*local_60 + 0x10))(local_60);
      std::__shared_weak_count::__release_weak();
    }
  }
LAB_10012aef1:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

