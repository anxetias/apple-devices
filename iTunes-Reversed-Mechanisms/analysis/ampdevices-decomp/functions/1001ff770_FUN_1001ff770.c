// name: FUN_1001ff770
// address: 1001ff770

bool FUN_1001ff770(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  bool bVar5;
  long local_650;
  undefined4 local_648;
  char *local_644;
  undefined2 local_63c;
  char *local_63a;
  undefined1 local_448 [1056];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  bVar5 = false;
  iVar2 = FUN_1001888ba(param_1 + 0x75e0,"MobileSync.plist",local_448,0);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      lVar3 = FUN_10016aa24(DAT_1008c4d90,local_448,0,0);
      if (lVar3 == 0) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_648 = 0x8220202;
          local_644 = "Assertion failure";
          local_63c = 0x822;
          local_63a = "syncSettingsDict != nullptr";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_648,0x16);
        }
        bVar5 = false;
        FUN_1001782e9(0,0);
      }
      else {
        cVar1 = FUN_100167abd(lVar3,&cf_iTunesUserID,&local_650);
        if ((cVar1 == '\0') || (local_650 != *(long *)(param_1 + 0x14d80))) {
          bVar5 = false;
        }
        else {
          FUN_1004f0e83(param_1,&local_648);
          iVar2 = FUN_1001ff952(*(undefined8 *)(param_1 + 0x152c8),&local_648,lVar3);
          bVar5 = iVar2 == 0;
        }
        FUN_10017060f(lVar3);
      }
    }
    else {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_648 = 0x8220202;
        local_644 = "Assertion failure";
        local_63c = 0x400;
        local_63a = (char *)CONCAT44(local_63a._4_4_,iVar2);
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_648,0x12);
      }
      bVar5 = false;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

