// name: FUN_1005d4855
// address: 1005d4855

int FUN_1005d4855(int *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_60 = 0;
  if ((param_1 == (int *)0x0) || (*param_1 != 0x61727477)) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "( ((inArtwork) != __null) && ((inArtwork)->magic == \'artw\') )";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    iVar3 = -0x32;
    goto LAB_1005d490a;
  }
  iVar3 = FUN_1005d38c7(0,0,&local_60);
  lVar5 = local_60;
  if (iVar3 == 0) {
    FUN_1005d3b11(local_60,0,param_1);
    iVar3 = FUN_1005d40d7(lVar5,param_2,param_3);
    if ((iVar3 != -0x80) && (iVar3 != 0)) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      lVar5 = local_60;
      if (cVar2 != '\0') {
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
        goto LAB_1005d4a2c;
      }
    }
  }
  else {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    lVar5 = local_60;
    if (cVar2 != '\0') {
      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
LAB_1005d4a2c:
      local_4c = 0x400;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      lVar5 = local_60;
    }
  }
  if (lVar5 != 0) {
    piVar1 = (int *)(lVar5 + 4);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1005d3cba(lVar5);
    }
  }
LAB_1005d490a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

