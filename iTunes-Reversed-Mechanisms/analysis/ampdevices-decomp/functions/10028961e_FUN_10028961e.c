// name: FUN_10028961e
// address: 10028961e

int FUN_10028961e(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined **local_208;
  undefined2 local_200;
  undefined1 local_1fe;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined4 local_1e8;
  undefined1 local_1e0 [400];
  undefined8 local_50;
  undefined8 uStack_48;
  int local_40;
  char local_39;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_208 = &PTR_FUN_100844f40;
  local_200 = 0;
  local_1fe = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_1e8 = 0;
  local_50 = 0;
  uStack_48 = 0;
  FUN_1001c62d9(local_1e0,400);
  local_40 = 0;
  cVar1 = FUN_100286e80(&local_208,param_1);
  if (cVar1 == '\0') {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "context.SetSearchCriteriaList(criteriaList)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    iVar4 = 0;
  }
  else {
    iVar2 = FUN_1001d0bd4(param_1,&local_40,4,FUN_10028980c,&local_208,&local_39);
    if ((iVar2 == -0x80) || (iVar2 == 0)) {
      iVar4 = local_40;
      if (local_40 != 0 && (local_39 == '\0' && iVar2 == 0)) goto LAB_100289726;
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure";
        local_2c = 0x400;
        local_2a = (char *)CONCAT44(local_2a._4_4_,iVar2);
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_38,0x12);
      }
    }
    iVar4 = 0x1ffffff;
  }
LAB_100289726:
  FUN_100286d70(&local_208);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

