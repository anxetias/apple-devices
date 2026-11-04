// name: FUN_1004ac737
// address: 1004ac737

void FUN_1004ac737(long param_1,undefined8 param_2)

{
  long lVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 local_868 [1056];
  undefined4 local_448;
  char *local_444;
  undefined2 local_43c;
  char *local_43a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar2 = FUN_1004aa626();
  if (cVar2 == '\0') {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_43a = "DownloadItem_IsValid(inItem)";
LAB_1004ac87b:
      local_43c = 0x822;
      local_444 = "Assertion failure";
      local_448 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_448,0x16);
    }
  }
  else {
    lVar1 = *(long *)(param_1 + 0x20);
    if (lVar1 != 0) {
      uVar3 = FUN_1004ac8a7(param_1,0);
      iVar4 = FUN_100534ba4(lVar1 + 0x1a8,uVar3,&local_448);
      if (iVar4 == 0) {
        iVar4 = FUN_10017d5ba(&local_448,local_868);
        if (iVar4 == 0) {
          iVar4 = FUN_100534e54(local_868,param_2,0,1);
          if (iVar4 == 0) goto LAB_1004ac836;
        }
      }
      FUN_100182d4d(param_2);
      goto LAB_1004ac836;
    }
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_43a = "inItem->downloadManager != __null";
      goto LAB_1004ac87b;
    }
  }
  FUN_1001782e9(0,0);
LAB_1004ac836:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

