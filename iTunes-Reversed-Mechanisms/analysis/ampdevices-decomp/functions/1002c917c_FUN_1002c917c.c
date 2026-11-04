// name: FUN_1002c917c
// address: 1002c917c

int FUN_1002c917c(long param_1,int param_2,long param_3,long param_4)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  char *local_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_50 = (char *)0x0;
  iVar2 = 0;
  if ((param_4 != 0 && param_2 == 0x7069686d) && (*(char *)(param_3 + 0x11) == '\0')) {
    lVar3 = FUN_1002ccbae(param_1 + 0xa0,*(undefined4 *)(param_3 + 0x18));
    if (lVar3 != (long)*(int *)(param_1 + 0xa8) * 0x10 + *(long *)(param_1 + 0xa0)) {
      lVar3 = *(long *)(lVar3 + 8);
      if (lVar3 != *(long *)(param_3 + 0x2c)) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = "trackID == item->trackPersistentID";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
      }
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
      local_50 = _sqlite3_mprintf("INSERT INTO item_to_container (item_pid,container_pid,physical_order) VALUES (%lld,%lld,%d)"
                                  ,lVar3,*(undefined8 *)(param_1 + 0x38));
      iVar2 = FUN_100626ef4(*(undefined8 *)(param_1 + 0x10));
      if ((iVar2 != -0x80) && (iVar2 != 0)) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x400;
          local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x12);
        }
      }
    }
  }
  _sqlite3_free(local_50);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

