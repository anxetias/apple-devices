// name: FUN_100567901
// address: 100567901

int FUN_100567901(undefined4 param_1,undefined8 param_2,int param_3,undefined8 param_4,
                 undefined8 param_5,undefined4 param_6)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 local_80 [16];
  undefined1 local_70 [20];
  undefined4 local_5c;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_5c = param_1;
  if (param_3 == 0) {
    lVar3 = FUN_1004993ef(param_4,param_6,0,1);
    if (lVar3 == 0) goto LAB_100567953;
    *(undefined1 *)(lVar3 + 0x50) = 0;
  }
  else {
LAB_100567953:
    lVar3 = FUN_100499159(param_4,param_6,0);
    if (lVar3 == 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "imageInstance != nullptr";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      iVar2 = -0x6c;
      goto LAB_100567a40;
    }
  }
  FUN_1001b7a5c(local_80,param_2);
  FUN_1001b7a5c(local_70,param_5);
  iVar2 = FUN_10056747a(local_5c,local_80,lVar3,local_70);
  FUN_1001b7a50(local_70);
  FUN_1001b7a50(local_80);
  if ((iVar2 != -0x80) && (iVar2 != 0)) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x400;
      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
    }
  }
LAB_100567a40:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

