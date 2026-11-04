// name: FUN_1005f826e
// address: 1005f826e

undefined8
FUN_1005f826e(undefined8 param_1,char *param_2,undefined8 param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_4 != 1) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      uStack_44 = 0x7a0a90;
      uStack_40 = 1;
      local_3c = 0x822;
      local_3a = "currDepth == 1";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if (*param_2 != '\0') {
    local_48 = 0;
    uStack_44 = 0;
    iVar2 = FUN_1005f7ab1(param_1);
    if (iVar2 == 0) {
      FUN_1001709a5(*param_5,CONCAT44(uStack_44,local_48));
    }
    FUN_10017060f(CONCAT44(uStack_44,local_48));
    iVar2 = FUN_100182a5c(param_1,0,0,&local_50);
    if (iVar2 == 0) {
      param_5[1] = param_5[1] + local_50;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

