// name: FUN_100532b50
// address: 100532b50

int FUN_100532b50(double param_1,undefined8 param_2,char param_3,undefined4 param_4,
                 undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  bool bVar5;
  double dVar6;
  double dVar7;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (DAT_1008c7848 != 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "sTrackFileEditPending == 0";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  cVar1 = FUN_1001ee056();
  if (cVar1 == '\0') {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "JRIsCurrentThreadCooperative() == true";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  dVar6 = (double)FUN_1001ebd46();
  LOCK();
  bVar5 = DAT_1008c7848 == 0;
  if (bVar5) {
    DAT_1008c7848 = 1;
  }
  UNLOCK();
  iVar2 = -0x32;
  if (bVar5) {
    iVar2 = FUN_1001d58b4(param_5,param_2,(int)param_3,param_4);
    iVar4 = 0;
    if (iVar2 == 0) goto LAB_100532c8f;
    dVar7 = (double)FUN_1001ebd46();
    while (dVar7 - dVar6 <= param_1) {
      FUN_1001ee7b6(0x32);
      iVar2 = FUN_1001d58b4(param_5,param_2,(int)param_3,param_4);
      if (iVar2 == 0) goto LAB_100532c8f;
      dVar7 = (double)FUN_1001ebd46();
    }
    iVar4 = -0x80;
    if (iVar2 != -0x80) goto LAB_100532c65;
  }
  else {
LAB_100532c65:
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    iVar4 = iVar2;
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x400;
      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
    }
  }
  DAT_1008c7848 = 0;
LAB_100532c8f:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

