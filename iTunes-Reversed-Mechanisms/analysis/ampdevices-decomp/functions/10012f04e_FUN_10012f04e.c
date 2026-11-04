// name: FUN_10012f04e
// address: 10012f04e

/* WARNING: Removing unreachable block (ram,0x00010012f229) */

ulong FUN_10012f04e(undefined8 param_1,long *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 unaff_R12;
  ulong uVar7;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0 [16];
  undefined4 local_90;
  undefined1 local_88 [8];
  long *local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [12];
  undefined2 local_5c;
  undefined4 local_5a;
  long *local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar3 = (**(code **)(*(long *)*param_2 + 0x60))();
  uVar7 = CONCAT71((int7)((ulong)unaff_R12 >> 8),1);
  if ((cVar3 == '\0') || (cVar3 = FUN_100144388(*param_2), cVar3 != '\0')) goto LAB_10012f266;
  (**(code **)(*(long *)*param_2 + 0xd0))(local_78);
  uVar1 = *(undefined4 *)(*param_2 + 0x188);
  uVar4 = FUN_10012d63e();
  cVar3 = _os_log_type_enabled(uVar4,1);
  if (cVar3 != '\0') {
    local_68._4_8_ = FUN_1001b83ae(local_78);
    local_68._0_4_ = 0x8220202;
    local_5c = 0x400;
    local_5a = uVar1;
    __os_log_impl(0x100000000,uVar4,1,"Request %{public}s(%d) needs bag.",local_68,0x12);
  }
  FUN_10012bbaa(local_88);
  lVar6 = *param_2;
  lVar2 = param_2[1];
  if (param_2[1] != 0) {
    LOCK();
    plVar5 = (long *)(param_2[1] + 0x10);
    *plVar5 = *plVar5 + 1;
    UNLOCK();
  }
  FUN_10012f340(&local_b0,param_1);
  FUN_1001b7a5c(local_a0,local_78);
  local_48 = (long *)0x0;
  local_90 = uVar1;
  plVar5 = operator_new(0x48);
  *plVar5 = (long)&PTR_FUN_100838f90;
  plVar5[1] = lVar6;
  plVar5[2] = lVar2;
  *(undefined4 *)(plVar5 + 3) = param_3;
  *(undefined4 *)(plVar5 + 4) = (undefined4)local_b0;
  *(undefined4 *)((long)plVar5 + 0x24) = local_b0._4_4_;
  *(undefined4 *)(plVar5 + 5) = (undefined4)uStack_a8;
  *(undefined4 *)((long)plVar5 + 0x2c) = uStack_a8._4_4_;
  local_b0 = 0;
  uStack_a8 = 0;
  FUN_1001b7a5c(plVar5 + 6,local_a0);
  *(undefined4 *)(plVar5 + 8) = local_90;
  local_48 = plVar5;
  FUN_10012bbf4(local_88,local_68,0);
  if (local_48 == (long *)local_68) {
    lVar6 = 0x20;
LAB_10012f1fe:
    (**(code **)(*local_48 + lVar6))();
  }
  else {
    lVar6 = 0x28;
    if (local_48 != (long *)0x0) goto LAB_10012f1fe;
  }
  FUN_1001b7a50(local_a0);
  if (uStack_a8 != 0) {
    std::__shared_weak_count::__release_weak();
  }
  if (local_80 != (long *)0x0) {
    LOCK();
    plVar5 = local_80 + 1;
    lVar6 = *plVar5;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*local_80 + 0x10))(local_80);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_1001b7a50(local_78);
  uVar7 = 0;
LAB_10012f266:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

