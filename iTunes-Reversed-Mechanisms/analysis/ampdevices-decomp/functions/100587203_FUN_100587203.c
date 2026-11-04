// name: FUN_100587203
// address: 100587203

void FUN_100587203(long param_1,uint param_2,undefined1 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_10058770b:
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "TrackDataIsValid(trackData)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (*(int *)(param_1 + 0x80) != 0x74646174) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure (expected to be true)";
        local_4c = 0x822;
        local_4a = "trackData->magic == \'tdat\'";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_10058770b;
    }
    if ((param_2 & 1) != 0) {
      iVar2 = FUN_100586f08(param_1,1,4,param_3,0);
      if ((iVar2 != -0x80) && (iVar2 != 0)) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
    }
    if ((param_2 & 2) != 0) {
      iVar2 = FUN_100586f08(param_1,2,1,param_3,0);
      if ((iVar2 != -0x80) && (iVar2 != 0)) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
    }
    if ((param_2 & 4) != 0) {
      iVar2 = FUN_100586f08(param_1,2,2,param_3,0);
      if ((iVar2 != -0x80) && (iVar2 != 0)) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
    }
    if ((param_2 & 8) != 0) {
      iVar2 = FUN_100586f08(param_1,2,3,param_3,0);
      if ((iVar2 != -0x80) && (iVar2 != 0)) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
    }
    if ((param_2 & 0x10) != 0) {
      iVar2 = FUN_100586f08(param_1,8,5,param_3,0);
      if ((iVar2 != -0x80) && (iVar2 != 0)) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
    }
    if ((param_2 & 0x20) != 0) {
      iVar2 = FUN_100586f08(param_1,1,6,param_3,0);
      if ((iVar2 != -0x80) && (iVar2 != 0)) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
    }
    if ((param_2 & 0x40) != 0) {
      iVar2 = FUN_100586f08(param_1,2,7,param_3,0);
      if ((iVar2 != -0x80) && (iVar2 != 0)) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
    }
    lVar4 = FUN_1002796f8(1,0);
    if ((lVar4 != 0 && (char)param_2 < '\0') && (*(char *)(lVar4 + 0x1c) != '\x02')) {
      iVar2 = FUN_100586f08(param_1,1,0x1a,param_3,0);
      if ((iVar2 != -0x80) && (iVar2 != 0)) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
    }
    if ((param_2 >> 8 & 1) != 0) {
      iVar2 = FUN_100586f08(param_1,1,0x2f,param_3,0);
      if ((iVar2 != -0x80) && (iVar2 != 0)) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
    }
    if ((param_2 >> 9 & 1) != 0) {
      iVar2 = FUN_100586f08(param_1,2,0x30,param_3,0);
      if ((iVar2 != -0x80) && (iVar2 != 0)) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
    }
    if ((param_2 >> 10 & 1) != 0) {
      iVar2 = FUN_100586f08(param_1,8,0x3c,param_3,0);
      if ((iVar2 != -0x80) && (iVar2 != 0)) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
    }
    if ((param_2 >> 0xb & 1) != 0) {
      iVar2 = FUN_100586f08(param_1,1,0x40,param_3,0);
      if ((iVar2 != -0x80) && (iVar2 != 0)) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
    }
    if ((param_2 >> 0xc & 1) != 0) {
      iVar2 = FUN_100586f08(param_1,1,0x41,param_3,0);
      if ((iVar2 != -0x80) && (iVar2 != 0)) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
    }
    if ((param_2 >> 0xd & 1) != 0) {
      iVar2 = FUN_100586f08(param_1,2,0x45,param_3,0);
      if ((iVar2 != -0x80) && (iVar2 != 0)) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
    }
    if ((param_2 >> 0xe & 1) != 0) {
      iVar2 = FUN_100586f08(param_1,2,0x46,param_3,0);
      if ((iVar2 != -0x80) && (iVar2 != 0)) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

