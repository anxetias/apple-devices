// name: FUN_10024a7e6
// address: 10024a7e6

ulong FUN_10024a7e6(int *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  int iVar5;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = *param_1;
  iVar5 = *param_2;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    if (iVar2 != iVar5 && iVar5 != 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "(left.mKind == 0) || (right.mKind == 0) || (left.mKind == right.mKind)";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
      iVar2 = *param_1;
      iVar5 = *param_2;
    }
    if (iVar5 != 0 && iVar2 != 0) {
      if (iVar2 == 0x73766d64) {
        uVar4 = FUN_100173bb7(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2),0x40);
      }
      else {
        uVar4 = 0;
        if (iVar2 == 0x73766970) {
          uVar4 = FUN_10017792d(param_1 + 2,param_2 + 2,0,1);
        }
      }
      goto LAB_10024a895;
    }
  }
  uVar4 = (ulong)(uint)(iVar2 - iVar5);
LAB_10024a895:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

