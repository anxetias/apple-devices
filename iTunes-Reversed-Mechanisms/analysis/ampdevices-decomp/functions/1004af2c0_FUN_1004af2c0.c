// name: FUN_1004af2c0
// address: 1004af2c0

int FUN_1004af2c0(long param_1,undefined8 *param_2,code *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_2 == (undefined8 *)0x0) || (cVar2 = FUN_1004aa626(param_2), cVar2 != '\0')) {
    iVar3 = FUN_1001e9de0();
    iVar4 = -0x32;
    if (iVar3 != -0x80) {
      if (iVar3 == 0) {
        if (param_2 == (undefined8 *)0x0) {
          param_2 = *(undefined8 **)(param_1 + 0x68);
        }
        cVar2 = FUN_1004aa626(param_2);
        if (cVar2 == '\0') {
          iVar4 = 0;
        }
        else {
          do {
            puVar1 = (undefined8 *)*param_2;
            iVar4 = (*param_3)(param_2,param_4);
            cVar2 = FUN_1004aa626(puVar1);
            if (cVar2 == '\0') break;
            param_2 = puVar1;
          } while (iVar4 == 0);
        }
        FUN_1001e9eb9(param_1 + 0x18);
      }
      else {
        uVar5 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar5,0x10);
        if (cVar2 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
    }
  }
  else {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "DownloadItem_IsValid(current)";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    iVar4 = 0x1f49;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

