// name: FUN_10048f775
// address: 10048f775

void FUN_10048f775(int param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined2 local_bc;
  char *local_ba;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_c8 = 0x8220202;
      local_c4 = "Assertion failure";
      local_bc = 0x822;
      local_ba = "sortFields != __null";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_c8,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_10048f8b8;
  }
  FUN_1001c62d9(param_2,0x20);
  if (param_1 == 0x34) {
    uVar2 = FUN_1005396f9(&DAT_1008c789d,&DAT_1007565a0,0);
    uVar2 = FUN_10053974b(&DAT_1008c78be,uVar2,&DAT_1007565c4);
LAB_10048f82a:
    FUN_100538b99(param_2,uVar2);
  }
  else {
    if (param_1 == 0x35) {
      uVar2 = FUN_1005396f9(&DAT_1008c789d,&DAT_1007565a0,0);
      goto LAB_10048f82a;
    }
    piVar3 = (int *)FUN_1002ddacc(param_1);
    if (piVar3 != (int *)0x0) {
      iVar4 = *piVar3;
      while (iVar4 != 0) {
        piVar3 = piVar3 + 1;
        FUN_1005389ba(param_2);
        iVar4 = *piVar3;
      }
    }
  }
  cVar1 = FUN_10053916d(param_2,3);
  if (cVar1 != '\0') {
    FUN_1005389ba(param_2,0x1f);
    FUN_1005389ba(param_2,4);
  }
  iVar4 = 0;
  do {
    local_50 = 0;
    uStack_48 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_70 = 0;
    uStack_68 = 0;
    FUN_1002fa385(0,iVar4,&local_c8);
    cVar1 = FUN_10053916d(param_2,(ulong)local_c4 & 0xffffffff);
    if (cVar1 != '\0') {
      FUN_1005389ba(param_2,local_c4._4_4_);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 6);
LAB_10048f8b8:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

