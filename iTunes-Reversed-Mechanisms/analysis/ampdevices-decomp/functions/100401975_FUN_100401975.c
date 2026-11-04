// name: FUN_100401975
// address: 100401975

int FUN_100401975(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_4 = 0;
  iVar2 = FUN_1003f0368(param_1,param_2,param_3);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      lVar3 = FUN_100170e14(DAT_1008c4d90,param_2,param_3,
                            *(undefined8 *)PTR__kCFAllocatorNull_10082e028);
      if (lVar3 == 0) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = "cfData != nullptr";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        lVar3 = 0;
        FUN_1001782e9(0,0);
        iVar2 = -0x32;
      }
      else {
        iVar2 = 0;
        uVar4 = FUN_10016a9bd(DAT_1008c4d90,lVar3,1,0);
        *param_4 = uVar4;
      }
      goto LAB_100401a11;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x400;
      local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x12);
    }
  }
  lVar3 = 0;
LAB_100401a11:
  FUN_10017060f(lVar3);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

