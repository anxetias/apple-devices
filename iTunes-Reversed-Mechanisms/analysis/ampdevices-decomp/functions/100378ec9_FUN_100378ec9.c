// name: FUN_100378ec9
// address: 100378ec9

void FUN_100378ec9(undefined8 param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  char *pcVar7;
  char local_148 [4];
  char *local_144;
  undefined2 local_13c;
  char local_48 [4];
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = FUN_1001705e9();
  lVar4 = _CFStringGetTypeID();
  if (lVar3 == lVar4) {
    lVar3 = FUN_1001705e9(param_2);
    lVar4 = _CFStringGetTypeID();
    if (lVar3 == lVar4) {
      cVar1 = FUN_10017393c(param_2,local_148,0x100,0x8000100);
      if (cVar1 == '\0') {
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          pcVar7 = local_48;
          builtin_strncpy(local_48,"\x02\x02\"\b",4);
          local_44 = "Assertion failure";
          local_3c = 0x822;
          pcVar6 = 
          "JRCFStringGetCString((CFStringRef) value, str, sizeof(str), kCFStringEncodingUTF8)";
          goto LAB_100379090;
        }
      }
      else {
        cVar1 = FUN_100170633(param_1,&cf_FSTotalBytes);
        if (cVar1 == '\0') {
          cVar1 = FUN_100170633(param_1,&cf_FSFreeBytes);
          if (cVar1 == '\0') {
            cVar1 = FUN_100170633(param_1,&cf_FSBlockSize);
            if (cVar1 != '\0') {
              iVar2 = _sscanf(local_148,"%u");
              if (iVar2 != 1) {
                uVar5 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar5,0x10);
                if (cVar1 != '\0') {
                  builtin_strncpy(local_48,"\x02\x02\"\b",4);
                  local_44 = "Assertion failure";
                  local_3c = 0x822;
                  local_3a = "sscanf( str, \"%u\", &blockSize ) == 1";
                  __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",local_48,
                                      0x16);
                }
                FUN_1001782e9(0,0);
              }
              *(undefined4 *)(param_3 + 0x10) = 0;
            }
            goto LAB_100379111;
          }
          iVar2 = _sscanf(local_148,"%llu",param_3 + 8);
          if (iVar2 == 1) goto LAB_100379111;
          uVar5 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar5,0x10);
          if (cVar1 != '\0') {
            pcVar7 = local_48;
            builtin_strncpy(local_48,"\x02\x02\"\b",4);
            local_44 = "Assertion failure";
            local_3c = 0x822;
            pcVar6 = "sscanf( str, \"%llu\", &volumeSizeInfo->freeBytes ) == 1";
            goto LAB_100379090;
          }
        }
        else {
          iVar2 = _sscanf(local_148,"%llu",param_3);
          if (iVar2 == 1) goto LAB_100379111;
          uVar5 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar5,0x10);
          if (cVar1 != '\0') {
            pcVar7 = local_48;
            builtin_strncpy(local_48,"\x02\x02\"\b",4);
            local_44 = "Assertion failure";
            local_3c = 0x822;
            pcVar6 = "sscanf( str, \"%llu\", &volumeSizeInfo->totalBytes ) == 1";
            goto LAB_100379090;
          }
        }
      }
    }
    else {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        pcVar7 = local_148;
        builtin_strncpy(local_148,"\x02\x02\"\b",4);
        local_144 = "Assertion failure";
        local_13c = 0x822;
        pcVar6 = "JRCFGetTypeID(value) == CFStringGetTypeID()";
        goto LAB_100379090;
      }
    }
  }
  else {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      pcVar7 = local_148;
      builtin_strncpy(local_148,"\x02\x02\"\b",4);
      local_144 = "Assertion failure";
      local_13c = 0x822;
      pcVar6 = "JRCFGetTypeID(key) == CFStringGetTypeID()";
LAB_100379090:
      *(char **)(pcVar7 + 0xe) = pcVar6;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",pcVar7,0x16);
    }
  }
  FUN_1001782e9(0,0);
LAB_100379111:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

