// name: FUN_1004d4cb6
// address: 1004d4cb6

int FUN_1004d4cb6(undefined8 param_1,long param_2,char *param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined1 local_2a8 [16];
  undefined8 local_298;
  char *local_290;
  undefined4 local_288;
  char *local_284;
  undefined2 local_27c;
  undefined8 local_27a;
  undefined4 local_268;
  char *local_264;
  undefined2 local_25c;
  char *local_25a;
  undefined1 local_238 [512];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_5 = 0;
  local_290 = param_3;
  if ((param_2 == 0) || (*(long *)(param_2 + 0x10) == 0)) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_268 = 0x8220202;
      local_264 = "Assertion failure";
      local_25c = 0x822;
      local_25a = "TrackInfoIsValid(seedTrack)";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_268,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
  }
  else {
    iVar2 = FUN_10036a5e8(param_2,local_238);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        cVar1 = FUN_100537825();
        if (cVar1 == '\0') {
          iVar2 = FUN_1004d56ad(param_1,local_238,local_290,param_4,param_5);
          if ((iVar2 == -0x80) || (iVar2 == 0)) goto LAB_1004d4eb0;
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 == '\0') goto LAB_1004d4eb0;
          puVar5 = &local_268;
          local_268 = 0x8220202;
          local_264 = "Assertion failure";
          local_25c = 0x400;
          local_25a = (char *)CONCAT44(local_25a._4_4_,iVar2);
        }
        else {
          FUN_1005813a4(&local_268,0);
          local_268 = CONCAT22(local_268._2_2_,0x100);
          local_268 = CONCAT13(1,(undefined3)local_268);
          iVar2 = FUN_10059538f(param_2);
          if (iVar2 == -0x80) goto LAB_1004d4eb0;
          if (iVar2 == 0) {
            iVar2 = FUN_1005817ee(param_1,1,0,&local_268,local_238,0,&local_298);
            FUN_1005814bd(&local_268);
            if (iVar2 == -0x80) goto LAB_1004d4eb0;
            if (iVar2 == 0) {
              FUN_1004d47f3(local_298);
              if (local_290 != (char *)0x0) {
                lVar3 = FUN_10048b5ec(param_1);
                if (lVar3 == 0) {
                  FUN_10048f5c3(local_298,local_290);
                }
                else {
                  if (DAT_1008c75c0 != -1) {
                    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                  }
                  uVar4 = DAT_1008c75b8;
                  cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
                  if (cVar1 != '\0') {
                    FUN_1001b8dfc(local_2a8,local_238);
                    local_27a = FUN_1001b83ae(local_2a8);
                    local_288 = 0x8000202;
                    local_284 = local_290;
                    local_27c = 0x822;
                    __os_log_impl(0x100000000,uVar4,1,
                                  "sync> ignoring duplicate playlist persistent id %llu for Genius playlist \"%{public}s\""
                                  ,&local_288,0x16);
                    FUN_1001b7a50(local_2a8);
                  }
                }
              }
              FUN_100488970(local_298);
              *param_5 = local_298;
              iVar2 = 0;
              goto LAB_1004d4eb0;
            }
            uVar4 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            if (cVar1 == '\0') goto LAB_1004d4eb0;
            puVar5 = &local_288;
            local_288 = 0x8220202;
            local_284 = "Assertion failure";
            local_27c = 0x400;
            local_27a = CONCAT44(local_27a._4_4_,iVar2);
          }
          else {
            uVar4 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            if (cVar1 == '\0') goto LAB_1004d4eb0;
            puVar5 = &local_288;
            local_288 = 0x8220202;
            local_284 = "Assertion failure";
            local_27c = 0x400;
            local_27a = CONCAT44(local_27a._4_4_,iVar2);
          }
        }
      }
      else {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 == '\0') goto LAB_1004d4eb0;
        puVar5 = &local_268;
        local_268 = 0x8220202;
        local_264 = "Assertion failure";
        local_25c = 0x400;
        local_25a = (char *)CONCAT44(local_25a._4_4_,iVar2);
      }
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",puVar5,0x12);
    }
  }
LAB_1004d4eb0:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

