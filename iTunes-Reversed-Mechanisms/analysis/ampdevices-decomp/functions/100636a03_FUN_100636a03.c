// name: FUN_100636a03
// address: 100636a03

int FUN_100636a03(int param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_162 [4];
  undefined1 local_15e;
  undefined4 local_15c;
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
  local_15c = 0xff;
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
    FUN_1001c62d9(local_162,6);
    iVar2 = FUN_100268cba(param_2,&local_158,&local_15c);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        local_162[0] = 0x15;
        local_15e = (undefined1)local_15c;
        local_50 = 6;
        uStack_48 = SUB82(&local_158,0);
        uStack_46 = (undefined6)((ulong)&local_158 >> 0x10);
        local_40 = local_15c;
        local_3c = 1;
        local_38 = 0;
        local_58 = local_162;
        iVar2 = FUN_1006343f6(param_1,FUN_100637128);
        if ((iVar2 == -0x80) || (iVar2 == 0)) goto LAB_100636b5f;
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 == '\0') goto LAB_100636b5f;
        local_4a = (undefined2)iVar2;
        uStack_48 = (undefined2)((uint)iVar2 >> 0x10);
      }
      else {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 == '\0') goto LAB_100636b5f;
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
LAB_100636b5f:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

