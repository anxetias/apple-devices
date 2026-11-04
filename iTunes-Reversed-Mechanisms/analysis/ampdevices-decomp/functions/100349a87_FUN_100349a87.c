// name: FUN_100349a87
// address: 100349a87

int FUN_100349a87(long param_1,undefined8 param_2,char *param_3,undefined8 param_4,code *param_5,
                 undefined8 param_6)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined4 local_268;
  undefined8 local_264;
  undefined1 local_258 [512];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = FUN_1004e0c3f(param_1,1);
  if (lVar3 == 0) {
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "trackData != nullptr";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    lVar3 = FUN_100300729(lVar3,param_3);
    if (lVar3 == 0) {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar6 = DAT_1008c75b8;
      cVar1 = _os_log_type_enabled(DAT_1008c75b8,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8000100;
        local_54 = param_3;
        __os_log_impl(0x100000000,uVar6,0x10,
                      "airtraffic> failed to find track for persistent id %llu",&local_58,0xc);
      }
    }
    else {
      lVar4 = FUN_100597c13(lVar3,0);
      if (lVar4 == 0) {
        uVar6 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar6,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "trackInstance != nullptr";
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar6 = DAT_1008c75b8;
        cVar1 = _os_log_type_enabled(DAT_1008c75b8,0x10);
        if (cVar1 != '\0') {
          FUN_100476ac1(&local_58,lVar3);
          local_264 = FUN_1001b83ae(&local_58);
          pcVar7 = "airtraffic> failed to find sync track instance for track \"%{public}s\"";
LAB_100349d3f:
          local_268 = 0x8220102;
          __os_log_impl(0x100000000,uVar6,0x10,pcVar7,&local_268,0xc);
          FUN_1001b7a50(&local_58);
        }
      }
      else {
        lVar4 = FUN_1002b646f(lVar4);
        if (lVar4 != 0) {
          lVar5 = FUN_100173afd(DAT_1008c4d90,lVar4,0x8000100,0);
          if (lVar5 == 0) {
            uVar6 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar6,0x10);
            if (cVar1 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "lyricsData != nullptr";
              __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar6 = DAT_1008c75b8;
            cVar1 = _os_log_type_enabled(DAT_1008c75b8,0x10);
            iVar2 = -0x2b;
            if (cVar1 != '\0') {
              FUN_100476ac1(&local_58,lVar3);
              local_264 = FUN_1001b83ae(&local_58);
              local_268 = 0x8220102;
              __os_log_impl(0x100000000,uVar6,0x10,
                            "airtraffic> failed to create lyrics data for track \"%{public}s\"",
                            &local_268,0xc);
              FUN_1001b7a50(&local_58);
            }
            lVar5 = 0;
          }
          else {
            iVar2 = FUN_1003376b5(*(undefined4 *)(param_1 + 8),param_2,local_258);
            if (iVar2 != -0x80) {
              if (iVar2 == 0) {
                (*param_5)(param_6,lVar5,param_4,local_258);
                iVar2 = 0;
              }
              else {
                uVar6 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar6,0x10);
                if (cVar1 != '\0') {
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x400;
                  local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
                  __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,
                                      0x12);
                }
              }
            }
          }
          goto LAB_100349d61;
        }
        uVar6 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar6,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "lyrics != nullptr";
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar6 = DAT_1008c75b8;
        cVar1 = _os_log_type_enabled(DAT_1008c75b8,0x10);
        if (cVar1 != '\0') {
          FUN_100476ac1(&local_58,lVar3);
          local_264 = FUN_1001b83ae(&local_58);
          pcVar7 = "airtraffic> failed to get lyrics for track \"%{public}s\"";
          goto LAB_100349d3f;
        }
      }
    }
  }
  iVar2 = -0x2b;
  lVar5 = 0;
  lVar4 = 0;
LAB_100349d61:
  FUN_10017060f(lVar5);
  FUN_10017060f(lVar4);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

