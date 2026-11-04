// name: FUN_100383a56
// address: 100383a56

int FUN_100383a56(long param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  int local_4a;
  undefined1 local_38 [16];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001c631b("BHUILuilfghuila37",local_38,0x10);
  iVar2 = FUN_1001779d4(param_1,(param_2 == 0) + '\x01');
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      *(undefined1 **)(param_1 + 0x18) = local_38;
      *(undefined1 *)(param_1 + 0x20) = 0x10;
      *(undefined4 *)(param_1 + 8) = 1;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined4 *)(param_1 + 0x10) = 2;
      iVar2 = FUN_100177a12(param_1);
      if (iVar2 != -0x80) {
        if (iVar2 == 0) goto LAB_100383b21;
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = iVar2;
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
      FUN_100177b23(param_1,0,0);
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = iVar2;
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
  }
LAB_100383b21:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

