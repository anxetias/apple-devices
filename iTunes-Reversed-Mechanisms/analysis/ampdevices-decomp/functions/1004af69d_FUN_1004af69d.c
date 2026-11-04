// name: FUN_1004af69d
// address: 1004af69d

char FUN_1004af69d(long param_1)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar3 = FUN_1004aa626();
  if (cVar3 == '\0') {
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "DownloadItem_IsValid(inItem)";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
LAB_1004af71b:
    cVar3 = '\b';
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x118);
    if ((int)uVar1 < 1000) {
      if (uVar1 - 2 < 3) {
        cVar3 = '\t';
        if (*(int *)(param_1 + 0x170) != 0x1f42) {
          cVar3 = (*(int *)(param_1 + 0x170) == -0x80) * '\x02' + '\a';
        }
        goto LAB_1004af766;
      }
      cVar3 = '\x06';
      if (uVar1 < 2) goto LAB_1004af766;
    }
    else {
      if (uVar1 == 1000) {
        cVar3 = (*(int *)(param_1 + 0x170) != 0) << 3;
        goto LAB_1004af766;
      }
      if (uVar1 == 2000) {
        iVar2 = *(int *)(param_1 + 0x170);
        cVar3 = '\t';
        if ((iVar2 == -0x80) || (iVar2 == 0x1f42)) goto LAB_1004af766;
        if (iVar2 != 0x1f41) goto LAB_1004af71b;
      }
    }
    cVar3 = '\a';
  }
LAB_1004af766:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return cVar3;
}

