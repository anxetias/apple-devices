// name: FUN_10042288a
// address: 10042288a

void FUN_10042288a(undefined8 param_1,long param_2,int param_3)

{
  char cVar1;
  short sVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  short local_4a;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_4a = 0;
  if (param_2 != 0) {
    lVar3 = ___dynamic_cast(param_2,&PTR_DAT_100857ed8,&PTR_DAT_100857ef0,0);
    if (lVar3 != 0) {
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      plVar4 = (long *)FUN_10039a28c();
      uVar5 = (**(code **)(*plVar4 + 0x50))(plVar4);
      FUN_10039c194(uVar5,lVar3);
      if (param_3 == 0) {
        param_3 = FUN_10041f200(lVar3,0,&local_4a);
        sVar2 = local_4a;
      }
      else {
        sVar2 = 0;
      }
      FUN_1004218c8(lVar3,param_3,(int)sVar2);
      FUN_1001ceee0(lVar3);
      goto LAB_100422949;
    }
  }
  uVar5 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar5,0x10);
  if (cVar1 != '\0') {
    local_48 = 0x8220202;
    local_44 = "Assertion failure";
    local_3c = 0x822;
    local_3a = "updateRestoreActionDelegateImp != nullptr";
    __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
  }
  FUN_1001782e9(0,0);
LAB_100422949:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

