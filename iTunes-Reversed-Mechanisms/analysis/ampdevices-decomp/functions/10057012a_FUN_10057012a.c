// name: FUN_10057012a
// address: 10057012a

int FUN_10057012a(long *param_1,long param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar2 = (**(code **)(*(long *)param_1[8] + 0x18))((long *)param_1[8],param_1[0x10] + 1);
  if (cVar2 != '\0') {
    if (param_2 < 0) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure";
        local_2c = 0x822;
        local_2a = "offset + length <= inAvailableDataLength";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
      iVar3 = 0;
      FUN_1001782e9(0,0);
      goto LAB_1005701e9;
    }
    param_1[0x10] = param_1[0x10] + 1;
    iVar3 = (**(code **)(*param_1 + 0x70))(param_1);
    if (iVar3 == -0x80) goto LAB_1005701e9;
    if (iVar3 != 0) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure";
        local_2c = 0x400;
        local_2a = (char *)CONCAT44(local_2a._4_4_,iVar3);
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_38,0x12);
      }
      goto LAB_1005701e9;
    }
    lVar1 = param_1[0x10];
    lVar5 = (**(code **)(*(long *)param_1[8] + 0x10))();
    if (lVar5 < lVar1) {
      *(undefined1 *)((long)param_1 + 0x74) = 1;
    }
  }
  iVar3 = 0;
LAB_1005701e9:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

