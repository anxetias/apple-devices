// name: FUN_100273b58
// address: 100273b58

undefined8
FUN_100273b58(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,long *param_7)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = FUN_10039fb84(3,param_1,param_5,param_6);
  if (lVar3 == 0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "albumInfo != __null";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    uVar5 = 0xffffffce;
  }
  else {
    *param_7 = lVar3;
    FUN_1001de788(lVar3 + 0xb8,param_1 + 0x1c60,param_2);
    pvVar4 = operator_new(0x10,(nothrow_t *)PTR_nothrow_10082c970);
    if (pvVar4 != (void *)0x0) {
      FUN_1001b7a5c(pvVar4,param_3);
    }
    *(void **)(lVar3 + 0x100) = pvVar4;
    pvVar4 = operator_new(0x10,(nothrow_t *)PTR_nothrow_10082c970);
    if (pvVar4 != (void *)0x0) {
      FUN_1001b7a5c(pvVar4,param_4);
    }
    *(void **)(lVar3 + 0x108) = pvVar4;
    FUN_100277666(lVar3);
    plVar1 = *(long **)(lVar3 + 0x48);
    uVar5 = 0;
    (**(code **)(*plVar1 + 0x10))(plVar1,0x74646161,plVar1,lVar3,0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

