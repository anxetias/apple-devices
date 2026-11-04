// name: FUN_10022b037
// address: 10022b037

undefined8 FUN_10022b037(undefined8 *param_1)

{
  void *pvVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 local_508;
  undefined4 uStack_504;
  undefined4 local_500;
  undefined2 local_4fc;
  undefined2 local_4fa;
  undefined6 uStack_4f8;
  undefined2 uStack_4f2;
  void *pvStack_4f0;
  undefined8 local_4e8;
  undefined4 local_4e0;
  void *local_4d8;
  void *pvStack_4d0;
  undefined8 local_4c8;
  undefined4 local_4c0;
  void *local_4b8;
  void *pvStack_4b0;
  undefined8 local_4a8;
  undefined4 local_4a0;
  undefined2 local_498;
  undefined1 local_490 [16];
  undefined1 auStack_480 [1056];
  void *local_60;
  void *pvStack_58;
  undefined8 local_50;
  undefined1 auStack_48 [16];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (undefined8 *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_508 = 0x8220202;
      uStack_504 = 0x7a0a90;
      local_500 = 1;
      local_4fc = 0x822;
      local_4fa = 0x2090;
      uStack_4f8 = 0x1007b;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_508,0x16);
    }
    FUN_1001782e9(0,0);
    uVar3 = 0xffffffce;
  }
  else {
    ___bzero(&local_508,0x4d0);
    FUN_10022c186(&local_508);
    *(undefined1 *)(param_1 + 1) = (undefined1)local_500;
    *param_1 = CONCAT44(uStack_504,local_508);
    pvVar1 = (void *)param_1[2];
    if (pvVar1 != (void *)0x0) {
      param_1[3] = pvVar1;
      operator_delete(pvVar1);
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
    }
    param_1[2] = CONCAT26(uStack_4f2,uStack_4f8);
    param_1[3] = pvStack_4f0;
    param_1[4] = local_4e8;
    uStack_4f8 = 0;
    uStack_4f2 = 0;
    pvStack_4f0 = (void *)0x0;
    local_4e8 = 0;
    *(undefined4 *)(param_1 + 5) = local_4e0;
    pvVar1 = (void *)param_1[6];
    if (pvVar1 != (void *)0x0) {
      param_1[7] = pvVar1;
      operator_delete(pvVar1);
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[8] = 0;
    }
    param_1[6] = local_4d8;
    param_1[7] = pvStack_4d0;
    param_1[8] = local_4c8;
    local_4d8 = (void *)0x0;
    pvStack_4d0 = (void *)0x0;
    local_4c8 = 0;
    *(undefined4 *)(param_1 + 9) = local_4c0;
    pvVar1 = (void *)param_1[10];
    if (pvVar1 != (void *)0x0) {
      param_1[0xb] = pvVar1;
      operator_delete(pvVar1);
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
    }
    param_1[10] = local_4b8;
    param_1[0xb] = pvStack_4b0;
    param_1[0xc] = local_4a8;
    local_4b8 = (void *)0x0;
    pvStack_4b0 = (void *)0x0;
    local_4a8 = 0;
    *(undefined4 *)(param_1 + 0xd) = local_4a0;
    *(undefined2 *)(param_1 + 0xe) = local_498;
    FUN_1001a7b1c(param_1 + 0xf,local_490);
    _memcpy(param_1 + 0x11,auStack_480,0x420);
    pvVar1 = (void *)param_1[0x95];
    if (pvVar1 != (void *)0x0) {
      param_1[0x96] = pvVar1;
      operator_delete(pvVar1);
      param_1[0x95] = 0;
      param_1[0x96] = 0;
      param_1[0x97] = 0;
    }
    param_1[0x95] = local_60;
    param_1[0x96] = pvStack_58;
    param_1[0x97] = local_50;
    local_60 = (void *)0x0;
    pvStack_58 = (void *)0x0;
    local_50 = 0;
    FUN_1001b80b2(param_1 + 0x98,auStack_48);
    FUN_1001b7a50(auStack_48);
    if (local_60 != (void *)0x0) {
      pvStack_58 = local_60;
      operator_delete(local_60);
    }
    FUN_1001a85d4(local_490);
    if (local_4b8 != (void *)0x0) {
      pvStack_4b0 = local_4b8;
      operator_delete(local_4b8);
    }
    if (local_4d8 != (void *)0x0) {
      pvStack_4d0 = local_4d8;
      operator_delete(local_4d8);
    }
    pvVar1 = (void *)CONCAT26(uStack_4f2,uStack_4f8);
    if (pvVar1 != (void *)0x0) {
      pvStack_4f0 = pvVar1;
      operator_delete(pvVar1);
    }
    *(undefined1 *)(param_1 + 1) = 1;
    *(undefined1 *)((long)param_1 + 0x2b) = 1;
    *(undefined1 *)((long)param_1 + 0x4b) = 1;
    *(undefined1 *)((long)param_1 + 0x6b) = 1;
    *(undefined1 *)((long)param_1 + 1) = 0xff;
    uVar3 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

