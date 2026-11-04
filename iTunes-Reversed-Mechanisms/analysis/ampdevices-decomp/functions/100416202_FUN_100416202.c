// name: FUN_100416202
// address: 100416202

int FUN_100416202(long param_1,long *param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*param_2 == 0) {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "diversityBag.IsValid()";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    iVar5 = -0x32;
    goto LAB_100416348;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  uVar6 = FUN_1001a8626(param_2);
  uVar3 = FUN_1001a8610(param_2);
  iVar4 = FUN_100057690(uVar1,uVar6,uVar3);
  if (iVar4 != -0x80) {
    iVar5 = 0;
    if (iVar4 == 0) goto LAB_100416348;
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x400;
      local_3a = (char *)CONCAT44(local_3a._4_4_,iVar4);
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_48,0x12);
    }
    if (iVar4 == 0) {
      iVar5 = 0;
      goto LAB_100416348;
    }
  }
  FUN_1000ee5e0(*(undefined4 *)(param_1 + 0x14));
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  uVar6 = FUN_1001a8626(param_2);
  uVar3 = FUN_1001a8610(param_2);
  iVar5 = FUN_100057690(uVar1,uVar6,uVar3);
  if ((iVar5 != -0x80) && (iVar5 != 0)) {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x400;
      local_3a = (char *)CONCAT44(local_3a._4_4_,iVar5);
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_48,0x12);
    }
  }
LAB_100416348:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

