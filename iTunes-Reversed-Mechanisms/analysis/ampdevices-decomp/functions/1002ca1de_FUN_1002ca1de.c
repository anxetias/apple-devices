// name: FUN_1002ca1de
// address: 1002ca1de

void FUN_1002ca1de(long param_1,long param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  char *sql;
  undefined8 uVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0 || param_2 == 0) {
LAB_1002ca288:
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "obj != __null and key != __null and CFGetTypeID(key) == CFStringGetTypeID()";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    lVar2 = _CFGetTypeID();
    lVar3 = _CFStringGetTypeID();
    if (lVar2 != lVar3) goto LAB_1002ca288;
    lVar2 = FUN_100166c1b(*(undefined8 *)(param_2 + 0x930),param_1);
    if (lVar2 != 0) {
      sql = (char *)FUN_1001dfadb(lVar2);
      if ((sql != (char *)0x0) && (*sql != '\0')) {
        _sqlite3_exec(*(sqlite3 **)(*(long *)(param_2 + 8) + 0x68),sql,(callback *)0x0,(void *)0x0,
                      (char **)0x0);
      }
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
        FUN_1001c64c1(sql);
        return;
      }
      goto LAB_1002ca310;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
LAB_1002ca310:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

