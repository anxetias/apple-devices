// name: FUN_1006365ba
// address: 1006365ba

int FUN_1006365ba(int param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined2 local_16e;
  undefined1 local_16c;
  undefined1 local_16a;
  undefined4 local_168;
  char *local_164;
  undefined2 local_15c;
  char *local_15a;
  undefined8 local_68;
  undefined4 local_60;
  undefined2 local_5c;
  undefined2 local_5a;
  undefined2 uStack_58;
  undefined6 uStack_56;
  undefined4 local_50;
  undefined1 local_4c;
  undefined4 local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_168 = 0x8220202;
      local_164 = "Assertion failure";
      local_15c = 0x822;
      local_15a = "driverObject != 0";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_168,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
  }
  else {
    FUN_1001c62d9(&local_16e,6);
    FUN_1001c62d9(&local_168,0xff);
    local_16e = 0x81a;
    local_16c = 0x23;
    local_16a = 0xff;
    local_60 = 6;
    uStack_58 = SUB82(&local_168,0);
    uStack_56 = (undefined6)((ulong)&local_168 >> 0x10);
    local_50 = 0xff;
    local_4c = 2;
    local_48 = 0;
    local_68 = &local_16e;
    iVar2 = FUN_1006343f6(param_1,FUN_100637128);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        iVar2 = FUN_100268422(&local_168,param_2,param_3);
        if ((iVar2 == -0x80) || (iVar2 == 0)) goto LAB_100636720;
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 == '\0') goto LAB_100636720;
        local_5a = (undefined2)iVar2;
        uStack_58 = (undefined2)((uint)iVar2 >> 0x10);
      }
      else {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 == '\0') goto LAB_100636720;
        local_5a = (undefined2)iVar2;
        uStack_58 = (undefined2)((uint)iVar2 >> 0x10);
      }
      local_5c = 0x400;
      local_60 = 1;
      local_68._4_4_ = 0x7a0a90;
      local_68._0_4_ = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_68,0x12);
    }
  }
LAB_100636720:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

