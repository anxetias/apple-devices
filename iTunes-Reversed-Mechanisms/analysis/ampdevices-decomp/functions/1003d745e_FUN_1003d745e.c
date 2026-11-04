// name: FUN_1003d745e
// address: 1003d745e

int FUN_1003d745e(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  int local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar1 = *(long *)(param_1 + 0x10);
  FUN_100602d40(param_1,0x636f7079,0);
  iVar5 = FUN_10060274a(param_1,FUN_1003d827a,"");
  if (iVar5 != -0x80) {
    if (iVar5 == 0) {
      iVar5 = FUN_100602806(param_1);
      if ((iVar5 == -0x80) || (iVar5 == 0)) goto LAB_1003d7530;
      uVar6 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar6,0x10);
    }
    else {
      uVar6 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar6,0x10);
    }
    if (cVar4 != '\0') {
      local_3c = 0x400;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      local_3a = iVar5;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_48,0x12);
    }
  }
LAB_1003d7530:
  lVar2 = *(long *)(param_1 + 0x10);
  lVar3 = *(long *)(lVar2 + 0x6750);
  if (lVar3 != 0) {
    FUN_100529664(lVar3,0,0);
  }
  *(undefined2 *)(lVar2 + 0x67bc) = 0;
  *(undefined4 *)(param_1 + 0x458) = 0;
  *(undefined8 *)(param_1 + 0x460) = 0;
  *(undefined8 *)(param_1 + 0x468) = 0;
  if (*(long *)(lVar1 + 0x30) != 0) {
    FUN_100321e5c();
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

