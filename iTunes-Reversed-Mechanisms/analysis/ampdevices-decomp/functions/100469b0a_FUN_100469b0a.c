// name: FUN_100469b0a
// address: 100469b0a

undefined4 FUN_100469b0a(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  long *plVar5;
  long lVar6;
  undefined1 local_98 [8];
  long *local_90;
  undefined1 local_88 [16];
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined6 uStack_58;
  undefined2 uStack_52;
  long *local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar4 = FUN_10046c700();
  if ((char)uVar4 == '\0') goto LAB_100469cd7;
  FUN_100238ca8(local_88,param_1 + 0x18);
  cVar3 = *(char *)(param_1 + 0x70);
  local_78 = param_1 + 0x60;
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_1001bdf6c();
    FUN_1002188e4(local_78);
  }
  local_70 = *(undefined8 *)(&DAT_10074a9d0 + (ulong)(cVar3 == '\b') * 8);
  cVar3 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
  if (cVar3 != '\0') {
    local_68._0_4_ = 0x8000202;
    local_68._4_4_ = (undefined4)local_70;
    uStack_60 = (undefined4)((ulong)local_70 >> 0x20);
    uStack_5c = 0x822;
    uStack_5a = (undefined2)param_2;
    uStack_58 = (undefined6)((ulong)param_2 >> 0x10);
    __os_log_impl(0x100000000,PTR___os_log_default_10082cb88,1,
                  "Service shutdown scheduled: %.0f seconds; reason: %{public}s",&local_68,0x16);
  }
  if (*(long *)(param_1 + 0x10) == 0) {
LAB_100469cf8:
                    /* WARNING: Subroutine does not return */
    FUN_10013bd04();
  }
  uVar2 = *(undefined8 *)(param_1 + 8);
  plVar5 = (long *)std::__shared_weak_count::lock();
  if (plVar5 == (long *)0x0) goto LAB_100469cf8;
  LOCK();
  plVar5[2] = plVar5[2] + 1;
  UNLOCK();
  LOCK();
  plVar1 = plVar5 + 1;
  lVar6 = *plVar1;
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (lVar6 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__shared_weak_count::__release_weak();
  }
  LOCK();
  plVar5[2] = plVar5[2] + 1;
  UNLOCK();
  local_68._0_4_ = 0x85c248;
  local_68._4_4_ = 1;
  uStack_60 = (undefined4)uVar2;
  uStack_5c = (undefined2)((ulong)uVar2 >> 0x20);
  uStack_5a = (undefined2)((ulong)uVar2 >> 0x30);
  uStack_58 = SUB86(plVar5,0);
  uStack_52 = (undefined2)((ulong)plVar5 >> 0x30);
  local_48 = &local_68;
  FUN_1001bde16(local_70,local_98,&local_68);
  FUN_100217418(local_78,local_98);
  if (local_90 != (long *)0x0) {
    LOCK();
    plVar5 = local_90 + 1;
    lVar6 = *plVar5;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*local_90 + 0x10))(local_90);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_48 == &local_68) {
    lVar6 = 0x20;
LAB_100469cc0:
    (**(code **)(*local_48 + lVar6))();
  }
  else {
    lVar6 = 0x28;
    if (local_48 != (long *)0x0) goto LAB_100469cc0;
  }
  std::__shared_weak_count::__release_weak();
  FUN_10015a142(local_88);
LAB_100469cd7:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4;
}

