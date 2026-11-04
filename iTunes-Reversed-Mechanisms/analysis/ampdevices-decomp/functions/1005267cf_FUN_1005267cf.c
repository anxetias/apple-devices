// name: FUN_1005267cf
// address: 1005267cf

undefined4 FUN_1005267cf(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined1 local_a8 [16];
  undefined4 local_98;
  long local_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  undefined4 local_48;
  undefined8 local_44;
  undefined2 local_3c;
  undefined4 local_3a;
  undefined2 uStack_36;
  undefined2 uStack_34;
  undefined2 uStack_32;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_60 = 0;
  FUN_100160c3f(param_1 + 8);
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar1 = DAT_1008c75b8;
  cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar2 != '\0') {
    FUN_1001b8dfc(local_58,param_1 + 0x470);
    local_44 = FUN_1001b83ae(local_58);
    local_48 = 0x8220202;
    local_3c = 0x800;
    local_3a = (undefined4)local_60;
    uStack_36 = (undefined2)((ulong)local_60 >> 0x20);
    uStack_34 = (undefined2)((ulong)local_60 >> 0x30);
    __os_log_impl(0x100000000,uVar1,1,"sync> writing \"%{public}s\", size = %llu",&local_48,0x16);
    FUN_1001b7a50(local_58);
  }
  FUN_100160f1a(local_a8,param_1 + 8,param_1 + 0x50,param_1 + 0x470);
  if (*(char *)(param_1 + 1) != '\0') {
    local_98 = 5;
  }
  local_68 = param_1 + 0x678;
  iVar3 = FUN_100160f8a();
  *(int *)(param_1 + 0x670) = iVar3;
  if (iVar3 != 0) {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar1 = DAT_1008c75b8;
    cVar2 = _os_log_type_enabled(DAT_1008c75b8,0x10);
    if (cVar2 != '\0') {
      FUN_1001b8dfc(local_58,param_1 + 0x470);
      local_44 = FUN_1001b83ae(local_58);
      local_3a = *(undefined4 *)(param_1 + 0x670);
      local_48 = 0x8220302;
      local_3c = 0x400;
      uStack_36 = 0x400;
      uStack_34 = (undefined2)local_3a;
      uStack_32 = (undefined2)((uint)local_3a >> 0x10);
      __os_log_impl(0x100000000,uVar1,0x10,"writing \"%{public}s\" failed (%d / 0x%08X)",&local_48,
                    0x18);
      FUN_1001b7a50(local_58);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return *(undefined4 *)(param_1 + 0x670);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

