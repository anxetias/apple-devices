// name: FUN_1005d23de
// address: 1005d23de

bool FUN_1005d23de(int *param_1,uint param_2)

{
  char cVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == (int *)0x0) || (*param_1 != 0x61727477)) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "( ((inArtwork) != __null) && ((inArtwork)->magic == \'artw\') )";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    bVar3 = false;
    FUN_1001782e9(0,0);
  }
  else {
    bVar3 = true;
    if (param_2 < 0x40000000 && param_1[3] != 0) {
      if (param_2 == 0) {
        param_2 = 0xffffffff;
      }
      else {
        if (param_2 == 1) goto LAB_1005d244b;
        param_2 = param_2 & 0xe;
      }
      bVar3 = (param_2 & param_1[3]) == 0;
    }
  }
LAB_1005d244b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

