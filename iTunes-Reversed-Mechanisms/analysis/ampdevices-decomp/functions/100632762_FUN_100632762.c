// name: FUN_100632762
// address: 100632762

undefined8 FUN_100632762(undefined4 param_1,ushort *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_70 [6];
  ushort local_6a;
  undefined2 local_68;
  undefined1 local_66;
  undefined1 local_64;
  undefined8 local_58;
  undefined4 local_50;
  undefined2 local_4c;
  undefined2 uStack_4a;
  undefined6 local_48;
  undefined2 uStack_42;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_38;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (ushort *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_58._0_4_ = 0x8220202;
      local_58._4_4_ = 0x7a0a90;
      local_50 = 1;
      local_4c = 0x822;
      uStack_4a = 0x64a8;
      local_48 = 0x1007f;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: err == (%d)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffce;
  }
  else {
    *param_2 = 0;
    FUN_1001c62d9(&local_68,0x10);
    FUN_1001c62d9(local_70,8);
    local_68 = 0x81a;
    local_66 = 0x20;
    local_64 = 8;
    local_50 = 6;
    local_48 = SUB86(local_70,0);
    uStack_42 = (undefined2)((ulong)local_70 >> 0x30);
    local_40 = 8;
    local_3c = 2;
    local_38 = 0;
    local_58 = &local_68;
    uVar2 = FUN_1006343f6(param_1,FUN_100637128);
    *param_2 = local_6a << 8 | local_6a >> 8;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

