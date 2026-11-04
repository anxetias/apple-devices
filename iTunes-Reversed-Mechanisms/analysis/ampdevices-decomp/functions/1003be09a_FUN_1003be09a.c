// name: FUN_1003be09a
// address: 1003be09a

int FUN_1003be09a(undefined8 *param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  int local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar1 = *(uint *)(param_1 + 0x3d5);
  iVar5 = 0;
  iVar6 = iVar5;
  if ((uVar1 & 1) == 0) {
    LOCK();
    bVar7 = uVar1 == *(uint *)(param_1 + 0x3d5);
    if (bVar7) {
      *(uint *)(param_1 + 0x3d5) = uVar1 | 1;
    }
    UNLOCK();
    if (bVar7) {
      iVar3 = FUN_1001ecff1(*param_1,param_1 + 0x3ae);
      if (iVar3 != -0x80) {
        iVar6 = iVar3;
        if (iVar3 == 0) goto LAB_1003be122;
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x400;
          local_3a = iVar3;
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x12);
        }
        iVar6 = iVar5;
        if (iVar3 == 0) goto LAB_1003be122;
      }
      LOCK();
      if (*(int *)(param_1 + 0x3d5) == 1) {
        *(int *)(param_1 + 0x3d5) = 0;
      }
      UNLOCK();
      iVar6 = iVar3;
    }
  }
LAB_1003be122:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar6;
}

