// name: FUN_1005d3389
// address: 1005d3389

undefined8 FUN_1005d3389(int *param_1,int param_2,byte *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == (int *)0x0) || (*param_1 != 0x61727477)) {
    uVar8 = FUN_1001cc310();
    cVar6 = _os_log_type_enabled(uVar8,0x10);
    if (cVar6 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "( ((inArtwork) != __null) && ((inArtwork)->magic == \'artw\') )";
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    uVar8 = 0xffffffce;
    goto LAB_1005d3484;
  }
  if (param_2 < 0x61776f73) {
    if (param_2 == 0x61776465) {
      *(undefined8 *)param_3 = *(undefined8 *)(param_1 + 0x1e);
    }
    else {
      if (param_2 == 0x6177666d) {
        iVar7 = param_1[0x12];
        goto LAB_1005d3480;
      }
      if (param_2 != 0x61776765) {
LAB_1005d344b:
        uVar8 = FUN_1001cc310();
        cVar6 = _os_log_type_enabled(uVar8,0x10);
        if (cVar6 != '\0') {
          local_38 = 0x8220202;
          local_34 = "Assertion failure";
          local_2c = 0x822;
          local_2a = "0";
          __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
        }
        FUN_1001782e9(0,0);
        uVar8 = 0xffffff22;
        goto LAB_1005d3484;
      }
      *param_3 = *(byte *)(param_1 + 2) >> 1 & 1;
    }
  }
  else if (param_2 == 0x61776f73) {
    iVar7 = param_1[5];
    iVar1 = param_1[6];
    iVar2 = param_1[7];
    iVar3 = param_1[8];
    uVar8 = *(undefined8 *)(param_1 + 9);
    uVar4 = *(undefined8 *)(param_1 + 0xb);
    uVar5 = *(undefined8 *)(param_1 + 0xe);
    *(undefined8 *)(param_3 + 0x1c) = *(undefined8 *)(param_1 + 0xc);
    *(undefined8 *)(param_3 + 0x24) = uVar5;
    *(undefined8 *)(param_3 + 0x10) = uVar8;
    *(undefined8 *)(param_3 + 0x18) = uVar4;
    *(int *)param_3 = iVar7;
    *(int *)(param_3 + 4) = iVar1;
    *(int *)(param_3 + 8) = iVar2;
    *(int *)(param_3 + 0xc) = iVar3;
  }
  else {
    if (param_2 == 0x61777372) {
      iVar7 = param_1[4];
    }
    else {
      if (param_2 != 0x61777470) goto LAB_1005d344b;
      iVar7 = param_1[0x11];
    }
LAB_1005d3480:
    *(int *)param_3 = iVar7;
  }
  uVar8 = 0;
LAB_1005d3484:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

