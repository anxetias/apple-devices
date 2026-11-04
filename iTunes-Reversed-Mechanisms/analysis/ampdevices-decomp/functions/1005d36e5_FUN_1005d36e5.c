// name: FUN_1005d36e5
// address: 1005d36e5

undefined8 FUN_1005d36e5(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == (int *)0x0) || (*param_1 != 0x61727477)) {
    uVar9 = FUN_1001cc310();
    cVar7 = _os_log_type_enabled(uVar9,0x10);
    if (cVar7 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "( ((inArtwork) != __null) && ((inArtwork)->magic == \'artw\') )";
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    uVar9 = 0xffffffce;
    goto LAB_1005d3859;
  }
  if (param_2 < 0x61776f73) {
    if (param_2 == 0x61776465) {
      if (*(long *)(param_1 + 0x1e) != 0) {
        FUN_1001c64c1();
      }
      *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)param_3;
    }
    else {
      if (param_2 != 0x61776765) {
LAB_1005d37da:
        uVar9 = FUN_1001cc310();
        cVar7 = _os_log_type_enabled(uVar9,0x10);
        if (cVar7 != '\0') {
          local_38 = 0x8220202;
          local_34 = "Assertion failure";
          local_2c = 0x822;
          local_2a = "0";
          __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
        }
        FUN_1001782e9(0,0);
        uVar9 = 0xffffff22;
        goto LAB_1005d3859;
      }
      if ((char)*param_3 == '\0') {
        uVar8 = param_1[2] & 0xfffffffd;
      }
      else {
        uVar8 = param_1[2] | 2;
      }
      param_1[2] = uVar8;
    }
  }
  else if (param_2 == 0x61776f73) {
    iVar1 = *param_3;
    iVar2 = param_3[1];
    iVar3 = param_3[2];
    iVar4 = param_3[3];
    uVar9 = *(undefined8 *)(param_3 + 4);
    uVar5 = *(undefined8 *)(param_3 + 6);
    uVar6 = *(undefined8 *)(param_3 + 9);
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_3 + 7);
    *(undefined8 *)(param_1 + 0xe) = uVar6;
    *(undefined8 *)(param_1 + 9) = uVar9;
    *(undefined8 *)(param_1 + 0xb) = uVar5;
    param_1[5] = iVar1;
    param_1[6] = iVar2;
    param_1[7] = iVar3;
    param_1[8] = iVar4;
  }
  else if (param_2 == 0x61777372) {
    param_1[4] = *param_3;
  }
  else {
    if (param_2 != 0x61777470) goto LAB_1005d37da;
    param_1[0x11] = *param_3;
  }
  uVar9 = 0;
LAB_1005d3859:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

