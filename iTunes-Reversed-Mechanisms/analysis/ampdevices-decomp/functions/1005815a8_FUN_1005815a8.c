// name: FUN_1005815a8
// address: 1005815a8

int FUN_1005815a8(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  int iVar9;
  undefined8 uVar10;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (undefined4 *)0x0) {
    uVar10 = FUN_1001cc310();
    cVar8 = _os_log_type_enabled(uVar10,0x10);
    if (cVar8 != '\0') {
      local_3a = "sourceOptions != nullptr";
LAB_1005817bf:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  else {
    if (param_2 != (undefined4 *)0x0) {
      *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 8);
      uVar1 = *param_1;
      uVar2 = param_1[1];
      uVar3 = param_1[2];
      uVar4 = param_1[3];
      uVar5 = param_1[5];
      uVar6 = param_1[6];
      uVar7 = param_1[7];
      param_2[4] = param_1[4];
      param_2[5] = uVar5;
      param_2[6] = uVar6;
      param_2[7] = uVar7;
      *param_2 = uVar1;
      param_2[1] = uVar2;
      param_2[2] = uVar3;
      param_2[3] = uVar4;
      if (*(long *)(param_1 + 2) == 0) {
LAB_100581622:
        if (*(long *)(param_1 + 4) == 0) {
          iVar9 = 0;
          goto LAB_100581716;
        }
        *(undefined8 *)(param_2 + 4) = 0;
        iVar9 = FUN_100595b97(*(undefined8 *)(param_1 + 4),param_2 + 4);
        if ((iVar9 == -0x80) || (iVar9 == 0)) goto LAB_100581716;
        uVar10 = FUN_1001cc310();
        cVar8 = _os_log_type_enabled(uVar10,0x10);
        if (cVar8 == '\0') goto LAB_100581716;
        local_3a = (char *)CONCAT44(local_3a._4_4_,iVar9);
      }
      else {
        *(undefined8 *)(param_2 + 2) = 0;
        iVar9 = FUN_1001cf232(*(undefined8 *)(param_1 + 2),param_2 + 2);
        if (iVar9 == -0x80) goto LAB_100581716;
        if (iVar9 == 0) goto LAB_100581622;
        uVar10 = FUN_1001cc310();
        cVar8 = _os_log_type_enabled(uVar10,0x10);
        if (cVar8 == '\0') goto LAB_100581716;
        local_3a = (char *)CONCAT44(local_3a._4_4_,iVar9);
      }
      local_3c = 0x400;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_48,0x12);
      goto LAB_100581716;
    }
    uVar10 = FUN_1001cc310();
    cVar8 = _os_log_type_enabled(uVar10,0x10);
    if (cVar8 != '\0') {
      local_3a = "destOptions != nullptr";
      goto LAB_1005817bf;
    }
  }
  FUN_1001782e9(0,0);
  iVar9 = -0x32;
LAB_100581716:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar9;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

