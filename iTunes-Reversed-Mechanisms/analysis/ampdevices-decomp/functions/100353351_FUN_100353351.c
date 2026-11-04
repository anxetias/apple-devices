// name: FUN_100353351
// address: 100353351

/* WARNING: Removing unreachable block (ram,0x000100353425) */

long FUN_100353351(long param_1,char *param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long local_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  int local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = FUN_10049368a();
  if ((lVar3 == param_1 || lVar3 == 0) || (local_50 = FUN_100352c96(lVar3,param_2,0), local_50 == 0)
     ) {
    local_50 = 0;
    iVar2 = FUN_100352899(param_2,param_3);
    if (iVar2 == 0) {
      if (((param_3 & 2) == 0) && (*param_2 == '\x04')) {
        FUN_1003532a2(param_1,0);
      }
    }
    else {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x400;
        local_3a = iVar2;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x12);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return local_50;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

