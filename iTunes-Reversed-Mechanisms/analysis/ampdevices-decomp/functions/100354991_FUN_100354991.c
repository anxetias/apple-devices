// name: FUN_100354991
// address: 100354991

undefined8 FUN_100354991(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 local_60 [16];
  char *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (long *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      uStack_44 = 0x7a0a90;
      uStack_40 = 1;
      local_3c = 0x822;
      local_3a = "artworkData != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    uVar5 = 0xffffffce;
  }
  else {
    FUN_10046d2e2(&local_48,param_1);
    lVar3 = FUN_1001705fc(CONCAT44(uStack_44,local_48));
    *param_2 = lVar3;
    FUN_1001a85d4(&local_48);
    uVar5 = 0;
    if (*param_2 == 0) {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar1 = DAT_1008c75b8;
      cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
      uVar5 = 0x232d;
      if (cVar2 != '\0') {
        FUN_100486d8f(local_60,param_1);
        uVar4 = FUN_1001b83ae(local_60);
        FUN_1002e5cf1(&local_50,param_1);
        local_48 = 0x8220202;
        uStack_44 = (undefined4)uVar4;
        uStack_40 = (undefined4)((ulong)uVar4 >> 0x20);
        local_3c = 0x842;
        local_3a = local_50;
        __os_log_impl(0x100000000,uVar1,1,
                      "artwork> failed to get artwork for playlist \"%{public}s\", uuid %{public}@",
                      &local_48,0x16);
        FUN_1001ab006(&local_50);
        FUN_1001b7a50(local_60);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

