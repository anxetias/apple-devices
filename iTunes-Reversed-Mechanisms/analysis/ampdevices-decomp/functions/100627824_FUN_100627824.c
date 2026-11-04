// name: FUN_100627824
// address: 100627824

int FUN_100627824(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  int local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = FUN_1001d33d7(*(undefined8 *)(param_1 + 0x68),"version_info",
                        "(id INTEGER PRIMARY KEY, major INTEGER, minor INTEGER, compatibility INTEGER DEFAULT 0, update_level INTEGER DEFAULT 0, device_update_level INTEGER DEFAULT 0, platform INTEGER DEFAULT 0)"
                        ,0);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      _sqlite3_mprintf("INSERT OR REPLACE INTO version_info (ROWID, major, minor, compatibility, update_level, platform) VALUES (%u, %u, %u, %u, %u, %u)"
                       ,1,(ulong)*(byte *)(param_1 + 0x5c),(ulong)*(byte *)(param_1 + 0x5d),
                       (ulong)*(byte *)(param_1 + 0x5e),(ulong)*(byte *)(param_1 + 0x5f),
                       (uint)*(byte *)(param_1 + 0x60));
      iVar2 = FUN_100626ef4(param_1);
      if ((iVar2 == -0x80) || (iVar2 == 0)) goto LAB_100627918;
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
    }
    if (cVar1 != '\0') {
      local_2c = 0x400;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      local_2a = iVar2;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_38,0x12);
    }
  }
LAB_100627918:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

