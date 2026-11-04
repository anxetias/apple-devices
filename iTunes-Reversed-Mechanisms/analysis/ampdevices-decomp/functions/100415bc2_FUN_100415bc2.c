// name: FUN_100415bc2
// address: 100415bc2

/* WARNING: Removing unreachable block (ram,0x000100415c7e) */

int FUN_100415bc2(long param_1,undefined8 param_2,undefined8 param_3,int param_4,long param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_5 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "outRequestData != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if ((param_4 - 1U < 0xb) || (param_4 == 100)) {
      iVar2 = FUN_10004ebb0(*(undefined4 *)(param_1 + 0x14));
      if (iVar2 == 0) {
        FUN_1001a833e(&local_38,0,0,0);
      }
      else {
        FUN_10032f0f2(&local_38,0);
      }
      FUN_1001a7b1c(param_5,&local_38);
      FUN_1001a85d4(&local_38);
      goto LAB_100415c83;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "rawTransactionType != kTransactionTypeUnset";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
  }
  iVar2 = -0x32;
LAB_100415c83:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

