// name: FUN_1005b7fce
// address: 1005b7fce

void FUN_1005b7fce(long param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined6 uVar3;
  undefined6 uVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 local_50 [8];
  undefined4 local_48;
  int local_44;
  undefined2 uStack_40;
  undefined2 uStack_3e;
  undefined2 uStack_3c;
  undefined4 uStack_3a;
  undefined2 uStack_36;
  undefined2 uStack_34;
  undefined6 uStack_32;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar7 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar7,0x10);
    if (cVar5 != '\0') {
      local_48 = 0x8220202;
      local_44 = 0x7a0a90;
      uStack_40 = 1;
      uStack_3e = 0;
      uStack_3c = 0x822;
      uStack_3a = 0x7eeb85;
      uStack_36 = 1;
      uStack_34 = 0;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_1005b80e8;
  }
  iVar6 = _AMDeviceStopSession();
  uVar3 = uStack_32;
  uVar1 = uStack_34;
  uStack_34 = (undefined2)param_1;
  uVar2 = uStack_34;
  uStack_32 = (undefined6)((ulong)param_1 >> 0x10);
  uVar4 = uStack_32;
  uStack_34 = uVar1;
  uStack_32 = uVar3;
  if ((iVar6 + 0x17fffff5U < 0x14) && ((0xc0001U >> (iVar6 + 0x17fffff5U & 0x1f) & 1) != 0)) {
    cVar5 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
    if (cVar5 != '\0') {
      uVar7 = _AMDeviceCopyDeviceIdentifier(param_1);
      FUN_1001aaedc(local_50,uVar7);
      local_48 = 0x4000302;
      uStack_40 = 0x842;
      uStack_3e = local_50._0_2_;
      uStack_3c = local_50._2_2_;
      uStack_3a = local_50._4_4_;
      uStack_36 = 0x800;
      local_44 = iVar6;
      uStack_34 = uVar2;
      uStack_32 = uVar4;
      __os_log_impl(0x100000000,PTR___os_log_default_10082cb88,1,
                    "AMDeviceStopSession returned 0x%08X for device %{public}@ (%p), ignoring",
                    &local_48,0x1c);
LAB_1005b8098:
      FUN_1001ab006(local_50);
    }
  }
  else if (iVar6 != 0) {
    cVar5 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
    if (cVar5 != '\0') {
      uVar7 = _AMDeviceCopyDeviceIdentifier(param_1);
      FUN_1001aaedc(local_50,uVar7);
      local_48 = 0x4000302;
      uStack_40 = 0x842;
      uStack_3e = local_50._0_2_;
      uStack_3c = local_50._2_2_;
      uStack_3a = local_50._4_4_;
      uStack_36 = 0x800;
      local_44 = iVar6;
      uStack_34 = uVar2;
      uStack_32 = uVar4;
      __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                          "AMDeviceStopSession failed (0x%08X) for device %{public}@ (%p)",&local_48
                          ,0x1c);
      goto LAB_1005b8098;
    }
  }
  FUN_1005c68f3(param_1);
LAB_1005b80e8:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

