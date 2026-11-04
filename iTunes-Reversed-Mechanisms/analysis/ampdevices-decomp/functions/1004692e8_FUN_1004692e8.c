// name: FUN_1004692e8
// address: 1004692e8

undefined8 FUN_1004692e8(undefined8 param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 local_458;
  char *local_454;
  undefined2 local_44c;
  int local_44a;
  undefined1 local_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1002cd170(param_3,param_3[1]);
  *param_3 = (long)(param_3 + 1);
  param_3[1] = 0;
  param_3[2] = 0;
  if (*(int *)(param_2 + 0x84) != 0x646f5069) goto LAB_10046960b;
  lVar1 = param_2 + 0x27b8;
  iVar4 = FUN_1001823de(lVar1,local_438,0x400);
  if (iVar4 != -0x80) {
    if (iVar4 != 0) {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      goto joined_r0x0001004694b0;
    }
    uVar2 = *(undefined4 *)(param_2 + 0x2d08);
    iVar4 = FUN_1004690b4(uVar2,0x736f6e67,lVar1,local_438,1,param_3);
    if (iVar4 == -0x80) goto LAB_1004695f5;
    if (iVar4 != 0) {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      goto joined_r0x0001004694b0;
    }
    iVar4 = FUN_1004690b4(uVar2,0x72696e67,lVar1,local_438,6,param_3);
    if (iVar4 == -0x80) goto LAB_1004695f5;
    if (iVar4 != 0) {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      goto joined_r0x0001004694b0;
    }
    iVar4 = FUN_1004690b4(uVar2,0x63617374,lVar1,local_438,4,param_3);
    if (iVar4 == -0x80) goto LAB_1004695f5;
    if (iVar4 == 0) {
      iVar4 = FUN_1004690b4(uVar2,0x70757263,lVar1,local_438,8,param_3);
      if ((iVar4 != -0x80) && (iVar4 != 0)) {
        uVar5 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar5,0x10);
        goto joined_r0x0001004694b0;
      }
    }
    else {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
joined_r0x0001004694b0:
      if (cVar3 != '\0') {
        local_44c = 0x400;
        local_454 = "Assertion failure";
        local_458 = 0x8220202;
        local_44a = iVar4;
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_458,0x12);
      }
    }
    if (iVar4 == 0) goto LAB_10046960b;
  }
LAB_1004695f5:
  FUN_1002cd170(param_3,param_3[1]);
  *param_3 = (long)(param_3 + 1);
  param_3[1] = 0;
  param_3[2] = 0;
LAB_10046960b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return 0;
}

