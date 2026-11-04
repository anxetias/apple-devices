// name: FUN_1003b035b
// address: 1003b035b

int FUN_1003b035b(long param_1,long *param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  int local_50;
  char local_49;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0 || param_2 == (long *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "metaData != __null and lyrics != __null";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
  }
  else {
    *param_2 = 0;
    iVar2 = FUN_1001cbd9e(param_1,0xa96c7972,&local_50,&local_49);
    if ((iVar2 == 0) && (local_49 != '\0')) {
      lVar3 = FUN_1001c63e1((long)local_50);
      if (lVar3 == 0) {
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = "tempUTF8 != __null";
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
        iVar2 = -0x6c;
      }
      else {
        iVar2 = FUN_1001cbc39(param_1,0xa96c7972,lVar3,local_50,&local_50,&local_49);
        if ((iVar2 == 0) && (local_49 != '\0')) {
          lVar4 = FUN_100173ab4(0,lVar3,(long)local_50,0x8000100,0);
          *param_2 = lVar4;
          iVar2 = -0x6c;
          if (lVar4 != 0) {
            iVar2 = 0;
          }
        }
        FUN_1001c64c1(lVar3);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

