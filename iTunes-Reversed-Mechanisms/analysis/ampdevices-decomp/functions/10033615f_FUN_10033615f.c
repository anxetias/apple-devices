// name: FUN_10033615f
// address: 10033615f

void FUN_10033615f(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined4 local_38;
  undefined4 local_34;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  undefined4 uStack_2a;
  undefined4 uStack_26;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar4 = DAT_1008c75b8;
  cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar2 != '\0') {
    local_34 = *(undefined4 *)(param_1 + 0x18);
    uVar1 = *(undefined8 *)(param_1 + 8);
    local_38 = 0x4000202;
    uStack_30 = 0x842;
    uStack_2e = (undefined2)uVar1;
    uStack_2c = (undefined2)((ulong)uVar1 >> 0x10);
    uStack_2a = (undefined4)((ulong)uVar1 >> 0x20);
    __os_log_impl(0x100000000,uVar4,1,
                  "airtraffic> setting sync anchor to %u for dataclass %{public}@",&local_38,0x12);
  }
  uVar3 = *(uint *)(param_1 + 0x18);
  if (uVar3 < *(uint *)(param_1 + 0x14)) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_38 = 0x8220202;
      local_34 = 0x7a0a90;
      uStack_30 = 1;
      uStack_2e = 0;
      uStack_2c = 0x822;
      uStack_2a = 0x7c249c;
      uStack_26 = 1;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    uVar3 = *(uint *)(param_1 + 0x18);
  }
  *(uint *)(param_1 + 0x14) = uVar3;
  FUN_100170c94(*(undefined8 *)(param_1 + 0x28));
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

