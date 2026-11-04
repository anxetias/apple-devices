// name: FUN_100536603
// address: 100536603

void FUN_100536603(char *param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (char *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_2a = "fileInfo != nullptr";
LAB_1005366fd:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
  }
  else {
    if (param_2 != 0) {
      *(undefined8 *)(param_2 + 0x428) = *(undefined8 *)(param_1 + 0x18);
      if (param_1[1] == '\0') {
        if (*param_1 == '\0') {
          *(undefined4 *)(param_2 + 0x420) = *(undefined4 *)(param_1 + 0x30);
        }
        else {
          *(undefined4 *)(param_2 + 0x420) = 0x666f6c64;
        }
      }
      else {
        *(undefined4 *)(param_2 + 0x420) = 0x6469736b;
      }
      goto LAB_1005366a6;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_2a = "fileLocation != nullptr";
      goto LAB_1005366fd;
    }
  }
  FUN_1001782e9(0,0);
LAB_1005366a6:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

