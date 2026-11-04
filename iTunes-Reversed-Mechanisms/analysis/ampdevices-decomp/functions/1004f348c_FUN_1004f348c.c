// name: FUN_1004f348c
// address: 1004f348c

int FUN_1004f348c(long param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar1 = *(long *)(param_1 + 0x66b8);
  if (lVar1 == 0) {
    iVar3 = 0;
  }
  else if (*(char *)(lVar1 + 5) == '\0') {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "handlerData->iPodPhotoLibrary->dbFileSpecValid";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    iVar3 = -0x2b;
  }
  else {
    bVar5 = *(char *)(param_1 + 0x35d) != '\0';
    cVar2 = bVar5 + '\x02';
    if (*(char *)(param_1 + 0x35e) == '\0') {
      cVar2 = bVar5;
    }
    iVar3 = FUN_10038ef22(lVar1,cVar2,0);
    if (iVar3 != -0x80) {
      if (iVar3 == 0) {
        iVar3 = 0;
        FUN_100496f8c(*(undefined8 *)(param_1 + 0x66b8),0);
      }
      else {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          local_38 = 0x8220202;
          local_34 = "Assertion failure";
          local_2c = 0x400;
          local_2a = (char *)CONCAT44(local_2a._4_4_,iVar3);
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_38,0x12);
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

