// name: FUN_100626d82
// address: 100626d82

int FUN_100626d82(sqlite3_stmt *param_1,undefined1 *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = 0;
  }
  while( true ) {
    iVar2 = _sqlite3_step(param_1);
    iVar3 = FUN_1001d2d10(iVar2);
    if (iVar2 != 5) break;
    FUN_1001ee7ac();
  }
  if ((iVar2 != 0x65) && (iVar3 != -0x80)) {
    if (iVar3 == 0) {
      iVar3 = 0;
      if (iVar2 != 100) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = "result == 100";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
        iVar3 = -0x24;
      }
      if (param_2 != (undefined1 *)0x0) {
        *param_2 = 1;
      }
    }
    else {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x400;
        local_3a = (char *)CONCAT44(local_3a._4_4_,iVar3);
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x12);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

