// name: FUN_10049089c
// address: 10049089c

void FUN_10049089c(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  undefined8 uVar9;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar8 = FUN_100490002();
  if (cVar8 == '\0') {
    if (param_2 == (undefined4 *)0x0) {
      uVar9 = FUN_1001cc310();
      cVar8 = _os_log_type_enabled(uVar9,0x10);
      if (cVar8 != '\0') {
        local_2a = "permissions != nullptr";
        goto LAB_1004909cd;
      }
      goto LAB_1004908e1;
    }
    *(undefined2 *)(param_1 + 0x42c) = *(undefined2 *)(param_2 + 8);
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    uVar5 = param_2[5];
    uVar6 = param_2[6];
    uVar7 = param_2[7];
    *(undefined4 *)(param_1 + 0x41c) = param_2[4];
    *(undefined4 *)(param_1 + 0x420) = uVar5;
    *(undefined4 *)(param_1 + 0x424) = uVar6;
    *(undefined4 *)(param_1 + 0x428) = uVar7;
    *(undefined4 *)(param_1 + 0x40c) = uVar1;
    *(undefined4 *)(param_1 + 0x410) = uVar2;
    *(undefined4 *)(param_1 + 0x414) = uVar3;
    *(undefined4 *)(param_1 + 0x418) = uVar4;
    if ((*(byte *)(param_1 + 0x242) & 0x40) != 0) {
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
        FUN_1004874fd(param_1,0x400000000);
        return;
      }
      goto LAB_1004909f7;
    }
  }
  else {
    uVar9 = FUN_1001cc310();
    cVar8 = _os_log_type_enabled(uVar9,0x10);
    if (cVar8 != '\0') {
      local_2a = "PlaylistIsLocked(playlist) == false";
LAB_1004909cd:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
LAB_1004908e1:
    FUN_1001782e9(0,0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
LAB_1004909f7:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

