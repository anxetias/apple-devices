// name: FUN_10012d780
// address: 10012d780

void FUN_10012d780(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  long *plStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined2 local_4c;
  undefined4 local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  std::mutex::lock();
  plVar7 = *(long **)(param_1 + 0x98);
  plVar3 = *(long **)(param_1 + 0xa0);
  local_78 = *(undefined8 *)(param_1 + 0xa0);
  uStack_70 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  local_80 = plVar7;
  std::mutex::unlock();
  if (plVar7 != plVar3) {
    do {
      local_68 = 0;
      plStack_60 = (long *)0x0;
      if (plVar7[1] == 0) {
LAB_10012d828:
        uVar5 = FUN_10012d63e();
        cVar4 = _os_log_type_enabled(uVar5,0x10);
        if (cVar4 != '\0') {
          uVar6 = FUN_1001b83ae(plVar7 + 3);
          local_4a = (undefined4)plVar7[5];
          local_58._0_4_ = 0x8220202;
          local_58._4_4_ = (undefined4)uVar6;
          uStack_50 = (undefined4)((ulong)uVar6 >> 0x20);
          local_4c = 0x400;
          __os_log_impl(0x100000000,uVar5,0x10,
                        "Request %{public}s(%d) was cancelled while waiting for privacy acknowledgement."
                        ,&local_58,0x12);
        }
      }
      else {
        plStack_60 = (long *)std::__shared_weak_count::lock();
        if (plStack_60 == (long *)0x0) goto LAB_10012d828;
        local_68 = *plVar7;
        if (local_68 == 0) goto LAB_10012d828;
        cVar4 = FUN_100144532();
        if (cVar4 != '\0') goto LAB_10012d828;
        uVar5 = FUN_10012d63e();
        cVar4 = _os_log_type_enabled(uVar5,1);
        if (cVar4 != '\0') {
          uVar6 = FUN_1001b83ae(plVar7 + 3);
          local_4a = (undefined4)plVar7[5];
          local_58._0_4_ = 0x8220202;
          local_58._4_4_ = (undefined4)uVar6;
          uStack_50 = (undefined4)((ulong)uVar6 >> 0x20);
          local_4c = 0x400;
          __os_log_impl(0x100000000,uVar5,1,
                        "Freeing request %{public}s(%d) because privacy acknowledgment changed. Will check condition again."
                        ,&local_58,0x12);
        }
        FUN_10012e8c2(param_1,&local_68,(int)plVar7[2]);
      }
      if (plStack_60 != (long *)0x0) {
        LOCK();
        plVar1 = plStack_60 + 1;
        lVar2 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar2 == 0) {
          (**(code **)(*plStack_60 + 0x10))(plStack_60);
          std::__shared_weak_count::__release_weak();
        }
      }
      plVar7 = plVar7 + 7;
    } while (plVar7 != plVar3);
  }
  local_58 = &local_80;
  FUN_100130564();
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

