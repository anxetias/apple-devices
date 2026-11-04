// name: FUN_100144562
// address: 100144562

undefined4 FUN_100144562(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined8 local_68 [2];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  undefined2 local_4a;
  undefined2 uStack_48;
  undefined2 local_46;
  undefined8 local_44;
  long local_38;
  undefined1 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001540fe(local_68,*param_2);
  uVar6 = FUN_100135270();
  cVar4 = _os_log_type_enabled(uVar6,2);
  if (cVar4 != '\0') {
    (**(code **)(*param_1 + 0xd0))(local_88,param_1);
    uVar7 = FUN_1001b83ae(local_88);
    local_58 = 0x8220302;
    local_54 = (undefined4)uVar7;
    uStack_50 = (undefined4)((ulong)uVar7 >> 0x20);
    local_4c = 0x400;
    local_4a = (undefined2)(int)param_1[0x31];
    uStack_48 = (undefined2)((uint)(int)param_1[0x31] >> 0x10);
    local_46 = 0x842;
    local_44 = local_68[0];
    __os_log_impl(0x100000000,uVar6,2,"storereq> %{public}s(%d). Response action spec %{public}@",
                  &local_58,0x1c);
    FUN_1001b7a50(local_88);
  }
  FUN_1001a7a9e(local_78,local_68);
  FUN_1001293a2(&local_58,local_78);
  FUN_1001a8fac(local_78);
  std::mutex::lock();
  lVar2 = param_1[3];
  std::mutex::unlock();
  if (lVar2 != 0) {
    std::mutex::lock();
    lVar2 = param_1[3];
    std::mutex::unlock();
    local_30 = 1;
    local_38 = lVar2;
  }
  uVar5 = FUN_1001293ac(&local_58);
  FUN_1001a8fac(&uStack_48);
  plVar3 = (long *)CONCAT26(local_4a,CONCAT24(local_4c,uStack_50));
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
  FUN_1001a8fac(local_68);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

