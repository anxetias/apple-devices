// name: FUN_10041503c
// address: 10041503c

int FUN_10041503c(long param_1,long *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (long *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_3a = "connection != nullptr";
LAB_10041518e:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  else {
    *param_2 = 0;
    if (param_1 == 0) {
      lVar4 = FUN_1001c6429(0x10);
      if (lVar4 == 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = "dbConnectionData != nullptr";
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        lVar4 = 0;
        FUN_1001782e9(0,0);
        iVar2 = -0x6c;
      }
      else {
        *(undefined8 *)(lVar4 + 8) = 0;
        iVar2 = FUN_10041558d(lVar4);
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          FUN_1001c64c1(lVar4);
          lVar4 = 0;
        }
      }
      *param_2 = lVar4;
      goto LAB_100415148;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_3a = "authDBFolderGUID == 0";
      goto LAB_10041518e;
    }
  }
  FUN_1001782e9(0,0);
  iVar2 = -0x32;
LAB_100415148:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

