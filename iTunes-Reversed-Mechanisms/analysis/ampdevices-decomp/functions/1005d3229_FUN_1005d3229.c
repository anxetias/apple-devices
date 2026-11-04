// name: FUN_1005d3229
// address: 1005d3229

undefined8 FUN_1005d3229(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
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
      local_2a = "( ((inArtwork) != __null) && ((inArtwork)->magic == \'artw\') )";
LAB_1005d3312:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
  }
  else {
    cVar1 = FUN_1005d23de(param_1);
    if (cVar1 != '\0') {
      FUN_1005d3341(param_1);
      uVar2 = *(undefined8 *)(param_1 + 0x24);
      goto LAB_1005d3291;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_2a = "ArtworkAllowsAction(inArtwork, inAction)";
      goto LAB_1005d3312;
    }
  }
  uVar2 = 0;
  FUN_1001782e9(0,0);
LAB_1005d3291:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

