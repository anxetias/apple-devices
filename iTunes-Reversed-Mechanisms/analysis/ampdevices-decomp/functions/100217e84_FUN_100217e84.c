// name: FUN_100217e84
// address: 100217e84

void FUN_100217e84(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_b0;
  undefined4 local_a8;
  char *local_a4;
  undefined2 local_9c;
  int local_9a;
  undefined **local_88;
  code *local_80;
  undefined8 local_78;
  long local_70;
  undefined ***local_68;
  undefined8 local_58;
  undefined4 local_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined6 local_48;
  undefined2 uStack_42;
  long local_40;
  long *local_38;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_b0 = 0;
  if (param_1 == 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_58._0_4_ = 0x8220202;
      local_58._4_4_ = 0x7a0a90;
      local_50 = 1;
      uStack_4c = 0x822;
      uStack_4a = 0x1d5e;
      local_48 = 0x1007a;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_100218007;
  }
  if (*(long *)(param_1 + 0x10) == 0) {
    if (*(long *)(param_1 + 0x18) != 0) {
      uVar2 = _AMRecoveryModeDeviceRequestAbbreviatedSendSync
                        (*(long *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x28),&local_b0);
      goto LAB_100217f33;
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      uVar2 = _AMDFUModeDeviceRequestAbbreviatedSendSync
                        (*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),&local_b0);
      goto LAB_100217f33;
    }
  }
  else {
    uVar2 = _AMDeviceRequestAbbreviatedSendSync
                      (*(long *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x28),&local_b0);
LAB_100217f33:
    *(undefined4 *)(param_1 + 0x34) = uVar2;
  }
  FUN_10017060f(local_b0);
  local_58._0_4_ = 0x83dc20;
  local_58._4_4_ = 1;
  local_50 = 0x21746c;
  uStack_4c = 1;
  uStack_4a = 0;
  local_48 = 0;
  uStack_42 = 0;
  local_88 = &PTR_FUN_10083dc20;
  local_80 = FUN_10021746c;
  local_78 = 0;
  local_70 = param_1;
  local_68 = &local_88;
  local_40 = param_1;
  local_38 = &local_58;
  iVar3 = FUN_1001eec95(0,0,0,0,&local_88,0);
  if (local_68 == &local_88) {
    lVar4 = 0x20;
LAB_100217fbb:
    (**(code **)((long)*local_68 + lVar4))();
  }
  else {
    lVar4 = 0x28;
    if (local_68 != (undefined ***)0x0) goto LAB_100217fbb;
  }
  if ((iVar3 != -0x80) && (iVar3 != 0)) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_a8 = 0x8220202;
      local_a4 = "Assertion failure";
      local_9c = 0x400;
      local_9a = iVar3;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_a8,0x12);
    }
  }
  if (local_38 == &local_58) {
    lVar4 = 0x20;
  }
  else {
    lVar4 = 0x28;
    if (local_38 == (long *)0x0) goto LAB_100218007;
  }
  (**(code **)(*local_38 + lVar4))();
LAB_100218007:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

