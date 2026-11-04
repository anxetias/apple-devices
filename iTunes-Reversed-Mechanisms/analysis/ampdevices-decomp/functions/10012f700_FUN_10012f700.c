// name: FUN_10012f700
// address: 10012f700

/* WARNING: Removing unreachable block (ram,0x00010012fb66) */

ulong FUN_10012f700(undefined8 param_1,long *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined8 unaff_R12;
  ulong uVar8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_e0 [16];
  undefined4 local_d0;
  long local_c8;
  undefined8 local_c0;
  long local_b8;
  long *local_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  undefined4 local_78 [4];
  undefined1 local_68 [12];
  undefined2 local_5c;
  undefined4 local_5a;
  long *local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar3 = (**(code **)(*(long *)*param_2 + 0x68))();
  uVar8 = CONCAT71((int7)((ulong)unaff_R12 >> 8),1);
  if ((cVar3 == '\0') || (cVar3 = FUN_100140dbe(*param_2), cVar3 != '\0')) goto LAB_10012fba6;
  FUN_1001358da(&local_b8);
  if (local_b8 == 0) {
    uVar4 = FUN_10012d63e();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      (**(code **)(*(long *)*param_2 + 0xd0))(local_78);
      local_68._4_8_ = FUN_1001b83ae(local_78);
      local_5a = *(undefined4 *)(*param_2 + 0x188);
      local_68._0_4_ = 0x8220202;
      local_5c = 0x400;
      __os_log_impl(0x100000000,uVar4,0x10,
                    "No token service! Cannot get JWT for Request %{public}s(%d)",local_68,0x12);
      FUN_1001b7a50(local_78);
    }
    FUN_1001b7b04(local_68,PTR_s_com_apple_iTunes_errors_store_re_10083b490);
    FUN_1001b7b04(local_78,"No token service..");
    FUN_1001b7a44(local_a8);
    FUN_1001b7a44(local_98);
    FUN_1001aa318(local_88);
    FUN_1001aaaac(local_80,local_68,0x1d5d,local_78,local_a8,local_98,local_88);
    FUN_10012fd0a(param_1,param_2,local_80);
LAB_10012f980:
    FUN_1001aaad2(local_80);
    FUN_1001aaad2(local_88);
    FUN_1001b7a50(local_98);
    FUN_1001b7a50(local_a8);
    FUN_1001b7a50(local_78);
    puVar7 = (undefined4 *)local_68;
  }
  else {
    uVar4 = FUN_10013f078(*param_2);
    cVar3 = FUN_1001b8428(uVar4);
    if (cVar3 != '\0') {
      uVar4 = FUN_10012d63e();
      cVar3 = _os_log_type_enabled(uVar4,0x10);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)*param_2 + 0xd0))(local_78);
        local_68._4_8_ = FUN_1001b83ae(local_78);
        local_5a = *(undefined4 *)(*param_2 + 0x188);
        local_68._0_4_ = 0x8220202;
        local_5c = 0x400;
        __os_log_impl(0x100000000,uVar4,0x10,
                      "Request %{public}s(%d) has no clientId. Cannot get JWT.",local_68,0x12);
        FUN_1001b7a50(local_78);
      }
      FUN_1001b7b04(local_68,PTR_s_com_apple_iTunes_errors_store_re_10083b490);
      FUN_1001b7b04(local_78,"No clientId to fetch API token.");
      FUN_1001b7a44(local_a8);
      FUN_1001b7a44(local_98);
      FUN_1001aa318(local_88);
      FUN_1001aaaac(local_80,local_68,0x1d5d,local_78,local_a8,local_98,local_88);
      FUN_10012fd0a(param_1,param_2,local_80);
      goto LAB_10012f980;
    }
    (**(code **)(*(long *)*param_2 + 0xd0))(local_78);
    uVar1 = *(undefined4 *)(*param_2 + 0x188);
    uVar4 = FUN_10012d63e();
    cVar3 = _os_log_type_enabled(uVar4,1);
    if (cVar3 != '\0') {
      local_68._4_8_ = FUN_1001b83ae(local_78);
      local_68._0_4_ = 0x8220202;
      local_5c = 0x400;
      local_5a = uVar1;
      __os_log_impl(0x100000000,uVar4,1,"Request %{public}s(%d) needs JWT.",local_68,0x12);
    }
    local_c0 = FUN_10013f078(*param_2);
    local_c8 = local_b8;
    lVar6 = *param_2;
    lVar2 = param_2[1];
    if (param_2[1] != 0) {
      LOCK();
      plVar5 = (long *)(param_2[1] + 0x10);
      *plVar5 = *plVar5 + 1;
      UNLOCK();
    }
    FUN_10012f340(&local_f0,param_1);
    FUN_1001b7a5c(local_e0,local_78);
    local_48 = (long *)0x0;
    local_d0 = uVar1;
    plVar5 = operator_new(0x48);
    *plVar5 = (long)&PTR_FUN_1008390a0;
    plVar5[1] = lVar6;
    plVar5[2] = lVar2;
    *(undefined4 *)(plVar5 + 3) = param_3;
    *(undefined4 *)(plVar5 + 4) = (undefined4)local_f0;
    *(undefined4 *)((long)plVar5 + 0x24) = local_f0._4_4_;
    *(undefined4 *)(plVar5 + 5) = (undefined4)uStack_e8;
    *(undefined4 *)((long)plVar5 + 0x2c) = uStack_e8._4_4_;
    local_f0 = 0;
    uStack_e8 = 0;
    FUN_1001b7a5c(plVar5 + 6,local_e0);
    *(undefined4 *)(plVar5 + 8) = local_d0;
    local_48 = plVar5;
    FUN_100135a5a(local_c8,local_c0,local_68);
    if (local_48 == (long *)local_68) {
      lVar6 = 0x20;
LAB_10012fb3b:
      (**(code **)(*local_48 + lVar6))();
    }
    else {
      lVar6 = 0x28;
      if (local_48 != (long *)0x0) goto LAB_10012fb3b;
    }
    FUN_1001b7a50(local_e0);
    if (uStack_e8 != 0) {
      std::__shared_weak_count::__release_weak();
    }
    puVar7 = local_78;
  }
  FUN_1001b7a50(puVar7);
  if (local_b0 != (long *)0x0) {
    LOCK();
    plVar5 = local_b0 + 1;
    lVar6 = *plVar5;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*local_b0 + 0x10))(local_b0);
      std::__shared_weak_count::__release_weak();
    }
  }
  uVar8 = 0;
LAB_10012fba6:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar8 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

