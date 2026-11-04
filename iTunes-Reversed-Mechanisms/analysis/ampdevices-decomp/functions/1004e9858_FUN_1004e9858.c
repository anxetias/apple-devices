// name: FUN_1004e9858
// address: 1004e9858

int FUN_1004e9858(long param_1,char param_2)

{
  long lVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((param_1 == 0) || (lVar1 = *(long *)(param_1 + 8), lVar1 == 0)) ||
     (*(long *)(lVar1 + 0x10) == 0)) {
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "TrackInstanceIsValid(trackInstance)";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    iVar7 = 0x3f3f3f3f;
  }
  else {
    if (param_2 != '\0') {
      FUN_1002ae6f7(param_1);
    }
    iVar7 = 0x3f3f3f3f;
    if (((*(int *)(param_1 + 0x3c) == 0x4d46494c) || (*(int *)(param_1 + 0x3c) == 0x46494c45)) &&
       ((lVar2 = *(long *)(param_1 + 0x80), lVar2 != 0 &&
        ((param_2 == '\0' || (iVar4 = FUN_1002b0559(param_1,0x42), iVar4 == 0)))))) {
      iVar4 = FUN_1004e9a46(lVar2);
      if ((iVar4 == 0x3f3f3f3f) &&
         (((*(int *)(param_1 + 0x3c) != 0x46494c45 || (*(int *)(param_1 + 0xa4) == 0)) ||
          (iVar4 = FUN_1003aea86(*(int *)(param_1 + 0xa4),0), iVar4 == 0x3f3f3f3f)))) {
        uVar5 = FUN_1004744bf(lVar1,0);
        iVar4 = 0x50444620;
        iVar7 = 0x50444620;
        if ((uVar5 & 0x800010) == 0) {
          iVar4 = 0x3f3f3f3f;
          iVar7 = 0x3f3f3f3f;
        }
      }
      else {
        iVar7 = iVar4;
        if (iVar4 == 0x4d344120) {
          cVar3 = FUN_1003203ad(lVar1);
          iVar7 = 0x4d345220;
          if (cVar3 != '\0') goto LAB_1004e9979;
          iVar4 = 0x4d345020;
          iVar7 = 0x4d344120;
        }
      }
      if (*(long *)(*(long *)(param_1 + 0x10) + 8) != 0) {
        cVar3 = FUN_1003202eb(lVar1);
        iVar7 = 0x4d345220;
        if (cVar3 == '\0') {
          iVar7 = iVar4;
        }
      }
    }
  }
LAB_1004e9979:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar7;
}

