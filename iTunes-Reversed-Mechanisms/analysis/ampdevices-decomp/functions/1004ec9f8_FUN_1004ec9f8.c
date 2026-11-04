// name: FUN_1004ec9f8
// address: 1004ec9f8

int FUN_1004ec9f8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = FUN_10020a12e(param_2);
  if (lVar3 == 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "appInfoDict != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = 0xc;
  }
  else {
    iVar2 = FUN_1004ec441(param_1,lVar3,0);
    if (iVar2 == 0) {
      lVar4 = FUN_1004ecb06(param_1,lVar3);
      iVar6 = 0;
      if (lVar4 == -1) {
        iVar6 = 0x41;
      }
      iVar2 = 0x40;
      if (lVar4 != 0) {
        iVar2 = iVar6;
      }
    }
    FUN_10017060f(lVar3);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

