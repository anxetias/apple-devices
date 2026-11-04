// name: FUN_1005fb50a
// address: 1005fb50a

uint FUN_1005fb50a(long param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 local_58;
  uint local_54;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "inTrackData != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffce;
  }
  else {
    FUN_100238ca8(&local_48,param_1 + 0x38);
    if (*(char *)(param_1 + 0x80) == '\x01') {
      *(long *)(param_1 + 0xa0) = param_2;
      *(undefined1 *)(param_1 + 0x80) = 2;
      uVar2 = FUN_10044d3e6(param_1,param_3);
      if (uVar2 == 0) {
        *(undefined1 *)(param_1 + 0x80) = 3;
        uVar2 = 0;
      }
      else {
        if (DAT_1008c7d20 != -1) {
          _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
        }
        uVar3 = DAT_1008c7d18;
        cVar1 = _os_log_type_enabled(DAT_1008c7d18,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x4000100;
          local_54 = uVar2;
          __os_log_impl(0x100000000,uVar3,0x10,
                        "**ERROR**: SetupServerConnection() failed! status:%d",&local_58,8);
        }
        *(undefined1 *)(param_1 + 0x80) = 10;
      }
    }
    else {
      if (DAT_1008c7d20 != -1) {
        _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
      }
      uVar3 = DAT_1008c7d18;
      cVar1 = _os_log_type_enabled(DAT_1008c7d18,0x10);
      uVar2 = 0x234f;
      if (cVar1 != '\0') {
        local_58 = 0x4000100;
        local_54 = (uint)*(byte *)(param_1 + 0x80);
        __os_log_impl(0x100000000,uVar3,0x10,
                      "**ERROR**: Invalid state for RegisterWithLibrary! state:%d",&local_58,8);
      }
    }
    FUN_10015a142(&local_48);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

