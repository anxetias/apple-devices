// name: FUN_1005e943c
// address: 1005e943c

int FUN_1005e943c(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                 undefined8 param_5,undefined8 param_6,long param_7,long param_8,long param_9,
                 undefined4 param_10,undefined4 *param_11)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_11 == (undefined4 *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "outObjectID != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
  }
  else {
    iVar2 = FUN_1005e8202(param_1,0,0,0,1,param_2,param_3,&local_60);
    if (iVar2 == 0) {
      FUN_1001e1c39(param_5,local_60 + 0x10);
      *(undefined8 *)(local_60 + 0x6870) = param_6;
      *(undefined1 *)(local_60 + 0x4c8) = param_4;
      *(undefined4 *)(local_60 + 0x2e8) = param_10;
      if (param_7 != 0) {
        FUN_1001dfbb3(param_7,local_60 + 0x226,0x20);
      }
      if (param_8 != 0) {
        FUN_1001dfbb3(param_8,local_60 + 0x304,0x100);
      }
      if (param_9 != 0) {
        FUN_1001dfbb3(param_9,local_60 + 0x63f0,0x20);
      }
      *param_11 = *(undefined4 *)(local_60 + 0x6884);
      iVar2 = 0;
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

