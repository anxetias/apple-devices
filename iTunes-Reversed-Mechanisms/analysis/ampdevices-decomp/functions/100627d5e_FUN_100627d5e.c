// name: FUN_100627d5e
// address: 100627d5e

int FUN_100627d5e(long param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                 undefined1 param_5,undefined1 param_6)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  _sqlite3_mprintf(
                  "UPDATE version_info SET major=%u, minor=%u, compatibility=%u, update_level=%u, platform=%u WHERE ROWID=1"
                  );
  iVar2 = FUN_100626ef4(param_1);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      *(undefined1 *)(param_1 + 0x5c) = param_2;
      *(undefined1 *)(param_1 + 0x5d) = param_3;
      *(undefined1 *)(param_1 + 0x5e) = param_4;
      *(undefined1 *)(param_1 + 0x5f) = param_5;
      *(undefined1 *)(param_1 + 0x60) = param_6;
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
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

