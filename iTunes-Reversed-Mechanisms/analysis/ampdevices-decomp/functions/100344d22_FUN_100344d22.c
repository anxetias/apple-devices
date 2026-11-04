// name: FUN_100344d22
// address: 100344d22

undefined4 FUN_100344d22(long param_1,char *param_2,char *param_3,long param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 local_478 [1056];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_4 == 0) {
    iVar2 = FUN_100347c5b(param_1,&cf_Genius,local_478);
    uVar3 = 3;
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        uVar3 = 0;
        iVar2 = FUN_10034a8b2(param_1,param_2,param_3,local_478,FUN_10034aecf,0);
        if (iVar2 != 0) {
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar5 = DAT_1008c75b8;
          uVar3 = 0x10;
          cVar1 = _os_log_type_enabled(DAT_1008c75b8,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8000200;
            local_4c = 0x400;
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
            uVar3 = 0x10;
            local_54 = param_3;
            __os_log_impl(0x100000000,uVar5,0x10,
                          "airtraffic> failed to set promised data for Genius id %llu (%d)",
                          &local_58,0x12);
          }
        }
      }
      else {
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
    }
  }
  else {
    lVar4 = FUN_1003075bc(*(undefined8 *)(param_1 + 0x30),param_3);
    if (lVar4 == 0) {
      uVar5 = FUN_1001cc310();
      uVar3 = 0x10;
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "trackInfo != nullptr";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else {
      FUN_100476928(lVar4,local_478);
      iVar2 = FUN_100406f46(*(undefined8 *)(param_1 + 0x30),0x67656e75,param_2,local_478,0x8000,
                            FUN_10034a2b3,0,FUN_10034a7ac,0);
      if (iVar2 != -0x80) {
        if (iVar2 == 0) {
          FUN_1001714de(*(undefined8 *)(param_1 + 0x167f0),param_2,param_4);
          uVar3 = 0;
          goto LAB_100344f85;
        }
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar5 = DAT_1008c75b8;
      cVar1 = _os_log_type_enabled(DAT_1008c75b8,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8420102;
        local_54 = param_2;
        __os_log_impl(0x100000000,uVar5,0x10,
                      "airtraffic> failed to queue promised Genius data for asset identifier \"%{public}@\""
                      ,&local_58,0xc);
      }
      uVar3 = FUN_10032f3b4(iVar2);
    }
  }
LAB_100344f85:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

