// name: FUN_10062677a
// address: 10062677a

int FUN_10062677a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined4 local_48;
  undefined8 local_44;
  undefined2 local_3c;
  int local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar3 = FUN_100625382();
  if (iVar3 == 0) {
    iVar3 = FUN_10058e278(*param_4,param_3);
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      if (DAT_1008c7d30 != -1) {
        _dispatch_once(&DAT_1008c7d30,&PTR___NSConcreteGlobalBlock_100871100);
      }
      uVar1 = DAT_1008c7d28;
      cVar2 = _os_log_type_enabled(DAT_1008c7d28,0x10);
      if (cVar2 != '\0') {
        local_44 = FUN_1001b83ae(param_3);
        local_48 = 0x8220202;
        local_3c = 0x400;
        local_3a = iVar3;
        __os_log_impl(0x100000000,uVar1,0x10,
                      "**ERROR**: AddSocialProfile - SocialProfileInfo::SyncSocialProfileParsedData(%{public}s) failed! status:%d"
                      ,&local_48,0x12);
      }
      FUN_1002188e4(param_4);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

