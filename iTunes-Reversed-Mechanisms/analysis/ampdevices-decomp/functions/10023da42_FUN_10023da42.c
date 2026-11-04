// name: FUN_10023da42
// address: 10023da42

undefined8 FUN_10023da42(undefined8 param_1,char param_2,long *param_3,char *param_4)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_4 = '\0';
  *param_3 = 0;
  lVar2 = _CGImageSourceCreateWithData(param_1,0);
  if (lVar2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "imageSource != __null";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    uVar3 = 0xffffff32;
    goto LAB_10023db19;
  }
  uVar3 = _CGImageSourceGetType(lVar2);
  cVar1 = FUN_1005d1a54(uVar3);
  if ((byte)(cVar1 - 0xdU) < 2) {
    if (param_2 == '\0') {
      lVar4 = FUN_1001705fc(param_1);
    }
    else {
      uVar3 = FUN_100170651(param_1);
      lVar4 = FUN_100170e65(uVar3,param_1);
    }
LAB_10023db08:
    *param_4 = cVar1;
    *param_3 = lVar4;
    uVar3 = 0;
  }
  else {
    lVar4 = FUN_1001962a8(lVar2);
    if (lVar4 != 0) {
      cVar1 = '\x0e';
      goto LAB_10023db08;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "cfData != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    uVar3 = 0xffffff32;
  }
  FUN_10017060f(lVar2);
LAB_10023db19:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

