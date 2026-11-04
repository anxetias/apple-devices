// name: FUN_1005f09c2
// address: 1005f09c2

int FUN_1005f09c2(undefined4 *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar6 = 0;
  if (*(char *)(param_1 + 0x1a31) == '\0') {
    iVar1 = param_1[0x1a21];
    FUN_1005e73f0(&local_48,param_1);
    iVar3 = FUN_10024f5ea(&local_48,*param_1,0,0,0,0,FUN_10025364a,0);
    FUN_1001b7a50(&local_48);
    iVar7 = -0x80;
    if (iVar3 != 0x5ca) {
      iVar7 = iVar3;
    }
    iVar6 = iVar7;
    if (iVar7 != -0x80) {
      if (iVar7 != 0) {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x400;
          local_3a = (char *)CONCAT44(local_3a._4_4_,iVar7);
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x12);
        }
        iVar6 = iVar3;
        if (iVar7 != 0) goto LAB_1005f0ade;
      }
      FUN_1005e9a2c();
      lVar5 = DAT_1008c7bc0;
      if (DAT_1008c7bc0 != 0 && iVar1 != 0) {
        do {
          if (*(int *)(lVar5 + 0x6884) == iVar1) {
            *(undefined1 *)(lVar5 + 0x68c4) = 1;
            iVar6 = iVar7;
            goto LAB_1005f0ade;
          }
          lVar5 = *(long *)(lVar5 + 0x6878);
        } while (lVar5 != 0);
      }
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "device != nullptr";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
      iVar6 = -0x80;
    }
  }
LAB_1005f0ade:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar6;
}

