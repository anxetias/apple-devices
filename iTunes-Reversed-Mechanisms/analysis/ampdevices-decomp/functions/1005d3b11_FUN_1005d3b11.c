// name: FUN_1005d3b11
// address: 1005d3b11

void FUN_1005d3b11(int *param_1,int param_2,int *param_3)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == (int *)0x0) || (*param_1 != 0x61727461)) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_2a = "ArtworkArrayIsValid(inArray)";
LAB_1005d3bf1:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
LAB_1005d3c31:
    FUN_1001782e9(0,0);
  }
  else {
    if ((param_3 == (int *)0x0) || (*param_3 != 0x61727477)) {
      uVar3 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 != '\0') {
        local_2a = "( ((inArtwork) != __null) && ((inArtwork)->magic == \'artw\') )";
        goto LAB_1005d3bf1;
      }
      goto LAB_1005d3c31;
    }
    lVar1 = *(long *)(param_1 + 0x12);
    if (lVar1 == 0) {
      uVar3 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 != '\0') {
        local_2a = "inArray->cfArray != __null";
        goto LAB_1005d3bf1;
      }
      goto LAB_1005d3c31;
    }
    if (param_2 < param_1[0x14]) {
      FUN_100170a16(lVar1,(long)param_2,param_3);
    }
    else {
      FUN_1001709a5(lVar1,param_3);
    }
    param_1[0x14] = param_1[0x14] + 1;
    if ((char)param_1[6] != '\0') {
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
        FUN_1005d3540(param_3,param_1[5]);
        return;
      }
      goto LAB_1005d3cb3;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
LAB_1005d3cb3:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

