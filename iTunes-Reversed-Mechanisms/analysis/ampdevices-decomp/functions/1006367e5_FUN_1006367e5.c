// name: FUN_1006367e5
// address: 1006367e5

int FUN_1006367e5(int param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined2 local_15e;
  undefined1 local_15c;
  undefined1 local_15a;
  undefined4 local_158;
  char *local_154;
  undefined2 local_14c;
  char *local_14a;
  undefined8 local_58;
  undefined4 local_50;
  undefined2 local_4c;
  undefined2 local_4a;
  undefined2 uStack_48;
  undefined6 uStack_46;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_38;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_158 = 0x8220202;
      local_154 = "Assertion failure";
      local_14c = 0x822;
      local_14a = "driverObject != 0";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_158,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
  }
  else {
    FUN_1001c62d9(&local_15e,6);
    FUN_1001c62d9(&local_158,0xff);
    local_15e = 0x81a;
    local_15c = 0x24;
    local_15a = 0xff;
    local_50 = 6;
    uStack_48 = SUB82(&local_158,0);
    uStack_46 = (undefined6)((ulong)&local_158 >> 0x10);
    local_40 = 0xff;
    local_3c = 2;
    local_38 = 0;
    local_58 = &local_15e;
    iVar2 = FUN_1006343f6(param_1,FUN_100637128);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        iVar2 = FUN_100268a8c(&local_158,param_2);
        if ((iVar2 == -0x80) || (iVar2 == 0)) goto LAB_100636940;
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 == '\0') goto LAB_100636940;
        local_4a = (undefined2)iVar2;
        uStack_48 = (undefined2)((uint)iVar2 >> 0x10);
      }
      else {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 == '\0') goto LAB_100636940;
        local_4a = (undefined2)iVar2;
        uStack_48 = (undefined2)((uint)iVar2 >> 0x10);
      }
      local_4c = 0x400;
      local_50 = 1;
      local_58._4_4_ = 0x7a0a90;
      local_58._0_4_ = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
    }
  }
LAB_100636940:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

