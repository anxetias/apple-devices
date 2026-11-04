// name: FUN_100498e55
// address: 100498e55

int FUN_100498e55(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_100498fee:
    uVar7 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar7,0x10);
    if (cVar4 != '\0') {
      local_4a = "ITImageInfoIsValid(sourceImageInfo)";
LAB_10049909f:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x16);
    }
  }
  else {
    cVar4 = FUN_100495380(*(undefined8 *)(param_1 + 0x10));
    if (cVar4 == '\0') goto LAB_100498fee;
    if (param_2 != 0) {
      cVar4 = FUN_100495380(*(undefined8 *)(param_2 + 0x10));
      if (cVar4 != '\0') {
        iVar5 = FUN_100497b7f(param_1,param_2);
        if (iVar5 != 0) {
          uVar7 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar7,0x10);
          if (cVar4 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x400;
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
          }
        }
        *(undefined1 *)(param_2 + 0x81) = *(undefined1 *)(param_1 + 0x81);
        *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(param_1 + 0x58);
        *(undefined8 *)(param_2 + 0x8c) = *(undefined8 *)(param_1 + 0x8c);
        uVar1 = *(undefined4 *)(param_1 + 0xbc);
        uVar2 = *(undefined4 *)(param_1 + 0xc0);
        uVar3 = *(undefined4 *)(param_1 + 0xc4);
        *(undefined4 *)(param_2 + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
        *(undefined4 *)(param_2 + 0xbc) = uVar1;
        *(undefined4 *)(param_2 + 0xc0) = uVar2;
        *(undefined4 *)(param_2 + 0xc4) = uVar3;
        uVar1 = *(undefined4 *)(param_2 + 0x88);
        iVar6 = FUN_1001de586(*(long *)(param_1 + 0x10) + 0x70,*(undefined4 *)(param_1 + 0x88),
                              *(long *)(param_2 + 0x10) + 0x70,param_2 + 0x88);
        if ((iVar6 != -0x80) && (iVar6 != 0)) {
          uVar7 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar7,0x10);
          if (cVar4 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x400;
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar6);
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
          }
        }
        if (iVar5 != 0) {
          iVar6 = iVar5;
        }
        iVar5 = FUN_1001dcff5(*(long *)(param_2 + 0x10) + 0x70,uVar1);
        if ((iVar5 != -0x80) && (iVar5 != 0)) {
          uVar7 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar7,0x10);
          if (cVar4 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x400;
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
          }
        }
        goto LAB_100499055;
      }
    }
    uVar7 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar7,0x10);
    if (cVar4 != '\0') {
      local_4a = "ITImageInfoIsValid(destImageInfo)";
      goto LAB_10049909f;
    }
  }
  FUN_1001782e9(0,0);
  iVar6 = -0x32;
LAB_100499055:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

