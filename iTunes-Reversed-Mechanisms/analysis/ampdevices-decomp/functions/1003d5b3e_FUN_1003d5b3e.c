// name: FUN_1003d5b3e
// address: 1003d5b3e

int FUN_1003d5b3e(long param_1,int param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined ***pppuVar6;
  undefined **local_58;
  long local_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  int local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_58 = &PTR_FUN_100857818;
  pppuVar6 = &local_58;
  if (param_2 != 0) {
    pppuVar6 = (undefined ***)0x0;
  }
  local_50 = param_1;
  iVar4 = FUN_10029b8f0(*(undefined8 *)(param_1 + 0x3e0),*(long *)(param_1 + 0x10) + 0x4578,
                        *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x4570),param_2,param_1 + 0x410,
                        0,pppuVar6,param_3);
  if ((iVar4 != -0x80) && (iVar4 != 0)) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x400;
      local_3a = iVar4;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_48,0x12);
    }
    if ((iVar4 == 0x2349) && (*(char *)(param_1 + 0x3f7) != '\0')) {
      if (*(int *)(param_1 + 0x30) == 0x2349) {
        *(undefined4 *)(param_1 + 0x30) = 0;
      }
      goto LAB_1003d5be8;
    }
  }
  if (*(int *)(param_1 + 0x30) == 0) {
    *(int *)(param_1 + 0x30) = iVar4;
  }
  if (iVar4 == 0 && (char)param_2 == '\0') {
    FUN_1003d33ec(*(undefined8 *)(param_1 + 0x3e0),*(undefined8 *)(param_1 + 0x28));
  }
LAB_1003d5be8:
  lVar1 = *(long *)(param_1 + 0x10);
  lVar2 = *(long *)(lVar1 + 0x6750);
  if (lVar2 != 0) {
    FUN_100529664(lVar2,0,0);
  }
  *(undefined2 *)(lVar1 + 0x67bc) = 0;
  *(undefined4 *)(param_1 + 0x458) = 0;
  *(undefined8 *)(param_1 + 0x460) = 0;
  *(undefined8 *)(param_1 + 0x468) = 0;
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

