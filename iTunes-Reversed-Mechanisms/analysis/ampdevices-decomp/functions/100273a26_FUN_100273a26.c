// name: FUN_100273a26
// address: 100273a26

undefined4
FUN_100273a26(long param_1,int param_2,undefined4 param_3,undefined8 param_4,undefined4 param_5,
             long *param_6)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = FUN_10039fb84(4,param_1,param_4,param_5);
  if (lVar3 == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "albumInfo != __null";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    uVar5 = 0xffffffce;
  }
  else {
    *param_6 = lVar3;
    if (param_2 != 0) {
      FUN_1001de788(lVar3 + 0xb8,param_1 + 0x2070,param_2);
    }
    *(undefined4 *)(lVar3 + 0x100) = param_3;
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

