// name: FUN_10034a8b2
// address: 10034a8b2

int FUN_10034a8b2(long param_1,undefined8 param_2,char *param_3,undefined8 param_4,code *param_5,
                 undefined8 param_6)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_278;
  undefined1 local_270 [16];
  undefined8 local_260;
  undefined4 local_258;
  char *local_254;
  undefined2 local_24c;
  char *local_24a;
  undefined2 local_242;
  int local_240;
  undefined1 local_238 [512];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = FUN_1004e0c3f(param_1,1);
  if (lVar3 == 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_258 = 0x8220202;
      local_254 = "Assertion failure";
      local_24c = 0x822;
      local_24a = "trackData != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_258,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x2b;
LAB_10034aa7c:
    lVar4 = 0;
  }
  else {
    lVar4 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                          PTR__kCFTypeDictionaryValueCallBacks_10082e140);
    if (lVar4 == 0) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_258 = 0x8220202;
        local_254 = "Assertion failure";
        local_24c = 0x822;
        local_24a = "geniusDict != nullptr";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_258,0x16);
      }
      FUN_1001782e9(0,0);
      iVar2 = -0x6c;
      goto LAB_10034aa7c;
    }
    if (param_3 == (char *)0x0) {
      lVar3 = FUN_10034b114(lVar3);
      if (lVar3 == 0) {
        iVar2 = -0x2b;
      }
      else {
        FUN_100171502(lVar4,&cf_genius_config,lVar3);
        FUN_10017060f(lVar3);
LAB_10034aae8:
        lVar3 = FUN_10016aaf8(DAT_1008c4d90,lVar4,0);
        if (lVar3 != 0) {
          iVar2 = FUN_1003376b5(*(undefined4 *)(param_1 + 8),param_2,local_238);
          if (iVar2 != -0x80) {
            if (iVar2 == 0) {
              (*param_5)(param_6,lVar3,param_4,local_238);
              iVar2 = 0;
            }
            else {
              uVar5 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar5,0x10);
              if (cVar1 != '\0') {
                local_258 = 0x8220202;
                local_254 = "Assertion failure";
                local_24c = 0x400;
                local_24a = (char *)CONCAT44(local_24a._4_4_,iVar2);
                __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_258,0x12
                                   );
              }
            }
          }
          goto LAB_10034aa81;
        }
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          local_258 = 0x8220202;
          local_254 = "Assertion failure";
          local_24c = 0x822;
          local_24a = "geniusData != nullptr";
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_258,0x16);
        }
        FUN_1001782e9(0,0);
        iVar2 = -0x6c;
      }
    }
    else {
      local_260 = 0;
      local_278 = 0;
      lVar3 = FUN_1003075bc(lVar3,param_3);
      if (lVar3 == 0) {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar5 = DAT_1008c75b8;
        cVar1 = _os_log_type_enabled(DAT_1008c75b8,0x10);
        iVar2 = -0x2b;
        if (cVar1 != '\0') {
          local_258 = 0x8000100;
          local_254 = param_3;
          __os_log_impl(0x100000000,uVar5,0x10,"airtraffic> failed to find track for Genius id %llu"
                        ,&local_258,0xc);
        }
      }
      else {
        iVar2 = FUN_1003699ab(lVar3,&local_260,0);
        if (iVar2 == 0) {
          iVar2 = FUN_100369c71(lVar3,&local_278,0);
          if (iVar2 == 0) {
            FUN_100171502(lVar4,&cf_genius_metadata,local_260);
            FUN_100171502(lVar4,&cf_genius_similarities,local_278);
            FUN_10017060f(local_278);
            FUN_10017060f(local_260);
            goto LAB_10034aae8;
          }
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar5 = DAT_1008c75b8;
          cVar1 = _os_log_type_enabled(DAT_1008c75b8,0x10);
          if (cVar1 != '\0') {
            FUN_100476ac1(local_270,lVar3);
            local_24a = (char *)FUN_1001b83ae(local_270);
            local_258 = 0x8000302;
            local_24c = 0x822;
            local_242 = 0x400;
            local_254 = param_3;
            local_240 = iVar2;
            __os_log_impl(0x100000000,uVar5,0x10,
                          "airtraffic> failed to copy similarities for Genius id %llu (\"%{public}s\") (%d)"
                          ,&local_258,0x1c);
            FUN_1001b7a50(local_270);
          }
          FUN_10017060f(local_260);
        }
        else {
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar5 = DAT_1008c75b8;
          cVar1 = _os_log_type_enabled(DAT_1008c75b8,0x10);
          if (cVar1 != '\0') {
            FUN_100476ac1(local_270,lVar3);
            local_24a = (char *)FUN_1001b83ae(local_270);
            local_258 = 0x8000302;
            local_24c = 0x822;
            local_242 = 0x400;
            local_254 = param_3;
            local_240 = iVar2;
            __os_log_impl(0x100000000,uVar5,0x10,
                          "airtraffic> failed to copy metadata for Genius id %llu (\"%{public}s\") (%d)"
                          ,&local_258,0x1c);
            FUN_1001b7a50(local_270);
          }
        }
      }
    }
  }
  lVar3 = 0;
LAB_10034aa81:
  FUN_10017060f(lVar3);
  FUN_10017060f(lVar4);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

