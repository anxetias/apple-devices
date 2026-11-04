// name: FUN_1004cf5be
// address: 1004cf5be

int FUN_1004cf5be(short *param_1,long *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (long *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "outArtistInfo != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
  }
  else {
    iVar2 = 0x234e;
    if (*param_1 == 2) {
      iVar2 = FUN_1005e3ab6(*(undefined8 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                            *(undefined4 *)(param_1 + 10),*(undefined8 *)(param_1 + 0xc),
                            *(undefined8 *)(param_1 + 0x10),(char)param_1[0x14],param_2);
      if (iVar2 == 0) {
        iVar2 = 0;
        if (*param_2 != 0) {
          cVar1 = FUN_1001b8428(param_1 + 0x18);
          if (cVar1 == '\0') {
            FUN_1005e5dd6(*param_2,param_1 + 0x18);
            iVar2 = 0;
          }
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

