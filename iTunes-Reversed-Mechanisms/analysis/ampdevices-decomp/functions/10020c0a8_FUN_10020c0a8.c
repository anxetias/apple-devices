// name: FUN_10020c0a8
// address: 10020c0a8

void FUN_10020c0a8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  size_t sVar5;
  size_t sVar6;
  char *pcVar7;
  undefined4 local_c58;
  char *local_c54;
  undefined2 local_c4c;
  int local_c4a;
  char local_c38 [4];
  char *local_c34;
  undefined2 local_c2c;
  int local_c2a;
  char local_838 [4];
  char *local_834;
  undefined2 local_82c;
  char local_438 [4];
  char *local_434;
  undefined2 local_42c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      pcVar3 = local_438;
      builtin_strncpy(local_438,"\x02\x02\"\b",4);
      local_434 = "Assertion failure";
      local_42c = 0x822;
      pcVar7 = "appIconFileName != __null";
LAB_10020c424:
      *(char **)(pcVar3 + 0xe) = pcVar7;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",pcVar3,0x16);
    }
  }
  else {
    cVar1 = FUN_10017393c(param_3,local_438,0x400,0x8000100);
    if (cVar1 != '\0') {
      _snprintf(local_838,0x400,"Payload/%s/%s",param_2,local_438);
      pcVar3 = _strchr(local_438,0x2e);
      if (pcVar3 == (char *)0x0) {
        sVar5 = _strlen(local_838);
        iVar2 = FUN_1001f7ba5(param_1);
        if (iVar2 == 0) {
          do {
            iVar2 = FUN_1001f802f(param_1,local_c38,0x400);
            if (iVar2 != 0) {
              if (iVar2 == -0x80) break;
              uVar4 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar4,0x10);
              if (cVar1 != '\0') {
                local_c58 = 0x8220202;
                local_c54 = "Assertion failure";
                local_c4c = 0x400;
                local_c4a = iVar2;
                __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_c58,0x12
                                   );
              }
              if (iVar2 != 0) break;
            }
            sVar6 = _strlen(local_c38);
            if ((((sVar5 <= sVar6) && (iVar2 = _strncasecmp(local_c38,local_838,sVar5), iVar2 == 0))
                && ((cVar1 = local_c38[sVar5], cVar1 == '.' || ((cVar1 == '~' || (cVar1 == '@'))))))
               && (iVar2 = FUN_10020df3c(param_1,local_c38,param_4), iVar2 != 0)) {
              if (iVar2 == -0x80) break;
              uVar4 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar4,0x10);
              if (cVar1 != '\0') {
                local_c58 = 0x8220202;
                local_c54 = "Assertion failure";
                local_c4c = 0x400;
                local_c4a = iVar2;
                __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_c58,0x12
                                   );
              }
              if (iVar2 != 0) break;
            }
            iVar2 = FUN_1001f7c48(param_1);
          } while (iVar2 == 0);
        }
      }
      else {
        iVar2 = FUN_10020df3c(param_1,local_838,param_4);
        if ((iVar2 != -0x80) && (iVar2 != 0)) {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            builtin_strncpy(local_c38,"\x02\x02\"\b",4);
            local_c34 = "Assertion failure";
            local_c2c = 0x400;
            local_c2a = iVar2;
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",local_c38,0x12);
          }
        }
      }
      goto LAB_10020c231;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      pcVar3 = local_838;
      builtin_strncpy(local_838,"\x02\x02\"\b",4);
      local_834 = "Assertion failure";
      local_82c = 0x822;
      pcVar7 = 
      "JRCFStringGetCString(appIconFileName, appIconFileNameCString, sizeof(appIconFileNameCString), kCFStringEncodingUTF8)"
      ;
      goto LAB_10020c424;
    }
  }
  FUN_1001782e9(0,0);
LAB_10020c231:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

