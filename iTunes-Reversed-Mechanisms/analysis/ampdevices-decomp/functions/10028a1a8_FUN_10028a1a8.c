// name: FUN_10028a1a8
// address: 10028a1a8

long FUN_10028a1a8(undefined8 param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 local_4c;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar2 = FUN_1001d153d();
  local_4c = uVar2;
  lVar4 = FUN_100170ea9(0,uVar2);
  if (lVar4 == 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "criteriaData != __null";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    lVar4 = 0;
    FUN_1001782e9(0,0);
    goto LAB_10028a26f;
  }
  FUN_10017103d(lVar4,uVar2);
  uVar5 = FUN_100170f7f(lVar4);
  iVar3 = FUN_100289fdc(param_1,uVar5,uVar2,&local_4c);
  if (iVar3 != -0x80) {
    if (iVar3 == 0) {
      FUN_10017103d(lVar4,local_4c);
      goto LAB_10028a26f;
    }
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x400;
      local_3a = (char *)CONCAT44(local_3a._4_4_,iVar3);
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_48,0x12);
    }
    if (iVar3 == 0) goto LAB_10028a26f;
  }
  FUN_10017060f(lVar4);
  lVar4 = 0;
LAB_10028a26f:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

