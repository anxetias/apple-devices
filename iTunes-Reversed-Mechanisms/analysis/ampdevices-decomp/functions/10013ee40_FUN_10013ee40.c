// name: FUN_10013ee40
// address: 10013ee40

undefined8 FUN_10013ee40(long *param_1,undefined4 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  undefined8 uVar8;
  undefined1 local_48 [16];
  undefined4 local_38;
  undefined8 local_34;
  undefined2 local_2c;
  undefined4 local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  if (*(long *)(param_2 + 2) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(param_2 + 2) + 0x10);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  lVar2 = param_1[2];
  *(undefined4 *)(param_1 + 1) = uVar3;
  *(undefined4 *)((long)param_1 + 0xc) = uVar4;
  *(undefined4 *)(param_1 + 2) = uVar5;
  *(undefined4 *)((long)param_1 + 0x14) = uVar6;
  if (lVar2 != 0) {
    std::__shared_weak_count::__release_weak();
  }
  uVar8 = FUN_100135270();
  cVar7 = _os_log_type_enabled(uVar8,0);
  if (cVar7 != '\0') {
    (**(code **)(*param_1 + 0xd0))(local_48,param_1);
    local_34 = FUN_1001b83ae(local_48);
    local_2a = (undefined4)param_1[0x31];
    local_38 = 0x8220202;
    local_2c = 0x400;
    __os_log_impl(0x100000000,uVar8,0,"storereq> %{public}s(%d). Created.",&local_38,0x12);
    FUN_1001b7a50(local_48);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return CONCAT71((int7)((ulong)*(long *)PTR____stack_chk_guard_10082cb58 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

