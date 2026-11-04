// name: FUN_10012fff6
// address: 10012fff6

/* WARNING: Removing unreachable block (ram,0x0001001301ab) */

void FUN_10012fff6(undefined8 param_1,long *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  long *plVar2;
  char cVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_90 [16];
  undefined4 local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [12];
  undefined2 local_5c;
  undefined4 local_5a;
  long *local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  (**(code **)(*(long *)*param_2 + 0xd0))(local_78);
  uVar1 = *(undefined4 *)(*param_2 + 0x188);
  uVar4 = FUN_10012d63e();
  cVar3 = _os_log_type_enabled(uVar4,1);
  if (cVar3 != '\0') {
    local_68._4_8_ = FUN_1001b83ae(local_78);
    local_68._0_4_ = 0x8220202;
    local_5c = 0x400;
    local_5a = uVar1;
    __os_log_impl(0x100000000,uVar4,1,"Request %{public}s(%d) needs custom reequirements.",local_68,
                  0x12);
  }
  plVar2 = (long *)*param_2;
  lVar6 = param_2[1];
  if (lVar6 != 0) {
    LOCK();
    *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
    UNLOCK();
  }
  FUN_10012f340(&local_a0,param_1);
  FUN_1001b7a5c(local_90,local_78);
  local_48 = (long *)0x0;
  local_80 = uVar1;
  plVar5 = operator_new(0x48);
  *plVar5 = (long)&PTR_FUN_100839130;
  plVar5[1] = (long)plVar2;
  plVar5[2] = lVar6;
  *(undefined4 *)(plVar5 + 3) = param_3;
  *(undefined4 *)(plVar5 + 4) = (undefined4)local_a0;
  *(undefined4 *)((long)plVar5 + 0x24) = local_a0._4_4_;
  *(undefined4 *)(plVar5 + 5) = (undefined4)uStack_98;
  *(undefined4 *)((long)plVar5 + 0x2c) = uStack_98._4_4_;
  local_a0 = 0;
  uStack_98 = 0;
  FUN_1001b7a5c(plVar5 + 6,local_90);
  *(undefined4 *)(plVar5 + 8) = local_80;
  local_48 = plVar5;
  (**(code **)(*plVar2 + 0x118))(plVar2,local_68);
  if (local_48 == (long *)local_68) {
    lVar6 = 0x20;
  }
  else {
    lVar6 = 0x28;
    if (local_48 == (long *)0x0) goto LAB_100130186;
  }
  (**(code **)(*local_48 + lVar6))();
LAB_100130186:
  FUN_1001b7a50(local_90);
  if (uStack_98 != 0) {
    std::__shared_weak_count::__release_weak();
  }
  FUN_1001b7a50(local_78);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

