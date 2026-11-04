// name: FUN_10012f3de
// address: 10012f3de

ulong FUN_10012f3de(undefined8 param_1,long *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 unaff_R12;
  ulong uVar6;
  undefined1 local_e0 [8];
  long *local_d8;
  long local_c8;
  long lStack_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0 [16];
  undefined4 local_90;
  undefined1 local_80 [16];
  undefined4 local_70;
  undefined1 local_69;
  undefined1 local_68 [12];
  undefined2 local_5c;
  undefined4 local_5a;
  long *local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = (**(code **)(*(long *)*param_2 + 0x38))();
  uVar6 = CONCAT71((int7)((ulong)unaff_R12 >> 8),1);
  if ((iVar2 == 0) || (cVar1 = FUN_1001443f6(*param_2), cVar1 != '\0')) goto LAB_10012f622;
  iVar2 = (**(code **)(*(long *)*param_2 + 0x40))();
  local_69 = iVar2 == 1;
  (**(code **)(*(long *)*param_2 + 0xd0))(local_80);
  local_70 = *(undefined4 *)(*param_2 + 0x188);
  uVar3 = FUN_10012d63e();
  cVar1 = _os_log_type_enabled(uVar3,1);
  if (cVar1 != '\0') {
    local_68._4_8_ = FUN_1001b83ae(local_80);
    local_68._0_4_ = 0x8220202;
    local_5c = 0x400;
    local_5a = local_70;
    __os_log_impl(0x100000000,uVar3,1,"Request %{public}s(%d) needs Mescal session.",local_68,0x12);
  }
  FUN_10013b750(local_e0,local_69);
  local_c8 = *param_2;
  lStack_c0 = param_2[1];
  if (param_2[1] != 0) {
    LOCK();
    plVar4 = (long *)(param_2[1] + 0x10);
    *plVar4 = *plVar4 + 1;
    UNLOCK();
  }
  local_b8 = param_3;
  FUN_10012f340(&local_b0,param_1);
  FUN_1001b7a5c(local_a0,local_80);
  local_90 = local_70;
  local_48 = (long *)0x0;
  plVar4 = operator_new(0x48);
  *plVar4 = (long)&PTR_FUN_100839010;
  plVar4[1] = local_c8;
  plVar4[2] = lStack_c0;
  local_c8 = 0;
  lStack_c0 = 0;
  *(undefined4 *)(plVar4 + 3) = local_b8;
  *(undefined4 *)(plVar4 + 4) = (undefined4)local_b0;
  *(undefined4 *)((long)plVar4 + 0x24) = local_b0._4_4_;
  *(undefined4 *)(plVar4 + 5) = (undefined4)uStack_a8;
  *(undefined4 *)((long)plVar4 + 0x2c) = uStack_a8._4_4_;
  local_b0 = 0;
  uStack_a8 = 0;
  FUN_1001b7a5c(plVar4 + 6,local_a0);
  *(undefined4 *)(plVar4 + 8) = local_90;
  local_48 = plVar4;
  FUN_10013ba0a(local_e0,local_68,0);
  if (local_48 == (long *)local_68) {
    lVar5 = 0x20;
LAB_10012f5b7:
    (**(code **)(*local_48 + lVar5))();
  }
  else {
    lVar5 = 0x28;
    if (local_48 != (long *)0x0) goto LAB_10012f5b7;
  }
  FUN_1001b7a50(local_a0);
  if (uStack_a8 != 0) {
    std::__shared_weak_count::__release_weak();
  }
  if (lStack_c0 != 0) {
    std::__shared_weak_count::__release_weak();
  }
  if (local_d8 != (long *)0x0) {
    LOCK();
    plVar4 = local_d8 + 1;
    lVar5 = *plVar4;
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (lVar5 == 0) {
      (**(code **)(*local_d8 + 0x10))(local_d8);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_1001b7a50(local_80);
  uVar6 = 0;
LAB_10012f622:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar6 & 0xffffffff;
}

