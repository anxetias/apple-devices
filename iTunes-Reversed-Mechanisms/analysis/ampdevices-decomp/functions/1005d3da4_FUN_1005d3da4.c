// name: FUN_1005d3da4
// address: 1005d3da4

undefined8 FUN_1005d3da4(int *param_1,int param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == (int *)0x0) || (*param_1 != 0x61727461)) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_2a = "ArtworkArrayIsValid(inArray)";
LAB_1005d3e9b:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
LAB_1005d3e12:
    FUN_1001782e9(0,0);
  }
  else if (0 < param_1[0x14]) {
    if (param_2 < param_1[0x14]) {
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
        uVar2 = FUN_100170853(*(undefined8 *)(param_1 + 0x12),(long)param_2);
        return uVar2;
      }
      goto LAB_1005d3ec5;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_2a = "inArray->numArtworks > inIndex";
      goto LAB_1005d3e9b;
    }
    goto LAB_1005d3e12;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return 0;
  }
LAB_1005d3ec5:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

