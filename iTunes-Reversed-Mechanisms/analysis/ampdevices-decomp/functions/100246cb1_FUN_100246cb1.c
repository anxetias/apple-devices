// name: FUN_100246cb1
// address: 100246cb1

void FUN_100246cb1(undefined8 param_1,long param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int *piVar6;
  undefined4 local_480;
  undefined4 uStack_47c;
  undefined8 local_478;
  ulong local_470;
  undefined4 local_468;
  char *local_464;
  undefined2 local_45c;
  char *local_45a;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_45a = "prefsData != nullptr";
LAB_100246ff4:
      local_45c = 0x822;
      local_464 = "Assertion failure";
      local_468 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_468,0x16);
    }
  }
  else {
    FUN_10017103d(param_2,0x60);
    puVar3 = (undefined4 *)FUN_100170f7f(param_2);
    FUN_1001c62d9(puVar3,0x60);
    *puVar3 = 0x64707266;
    *(undefined2 *)(puVar3 + 1) = 2;
    puVar3[3] = 0;
    *(undefined4 *)((long)puVar3 + 6) = 0;
    *(undefined1 *)((long)puVar3 + 10) = 0;
    cVar1 = FUN_10017cbd0(param_1);
    if (cVar1 != '\0') {
      iVar2 = FUN_1001887a6(param_1,"PhotosFolderPrefs",&local_468);
      if ((iVar2 == -0x80) || (iVar2 == -0x2b)) goto LAB_100246f70;
      if (iVar2 != 0) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x400;
          local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x12);
        }
        if (iVar2 != 0) goto LAB_100246f70;
      }
      iVar2 = FUN_10017cc65(&local_468,0x64617461,1,&local_478);
      if ((iVar2 == -0x80) || (iVar2 == -0x2b)) goto LAB_100246f70;
      if (iVar2 != 0) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x400;
          local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x12);
        }
        if (iVar2 != 0) goto LAB_100246f70;
      }
      iVar2 = FUN_10017ce92(local_478,&local_470);
      if (iVar2 == -0x80) {
LAB_100247044:
        FUN_10017103d(param_2,0x60);
        puVar3 = (undefined4 *)FUN_100170f7f(param_2);
        FUN_1001c62d9(puVar3,0x60);
        *puVar3 = 0x64707266;
        *(undefined2 *)(puVar3 + 1) = 2;
        puVar3[3] = 0;
        *(undefined4 *)((long)puVar3 + 6) = 0;
        *(undefined1 *)((long)puVar3 + 10) = 0;
      }
      else {
        if (iVar2 == 0) {
          if (local_470 < 0x60) {
            uVar4 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            if (cVar1 != '\0') {
              local_3a = "fileLength >= sizeof(HEADER_TYPE)";
LAB_1002471d9:
              local_3c = 0x822;
              local_44 = "Assertion failure";
              local_48 = 0x8220202;
              __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
            }
LAB_10024703b:
            FUN_1001782e9(0,0);
          }
          else {
            FUN_10017103d(param_2);
            uVar4 = local_478;
            uVar5 = FUN_100170f7f(param_2);
            iVar2 = FUN_10017d186(uVar4,uVar5,local_470,0,&local_480);
            if (CONCAT44(uStack_47c,local_480) != local_470) {
              uVar4 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar4,0x10);
              if (cVar1 != '\0') {
                local_48 = 0x8220202;
                local_44 = "Assertion failure";
                local_3c = 0x822;
                local_3a = "actualFileLength == fileLength";
                __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16
                                   );
              }
              FUN_1001782e9(0,0);
            }
            if (iVar2 != -0x80) {
              if (iVar2 != 0) {
                uVar4 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar4,0x10);
                if (cVar1 != '\0') {
                  local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
                  goto LAB_10024719d;
                }
                goto LAB_100246faf;
              }
              FUN_100170f7f(param_2);
              uVar4 = FUN_100170f7f(param_2);
              cVar1 = FUN_100247584(uVar4,local_480,2);
              if (cVar1 == '\0') {
                uVar4 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar4,0x10);
                if (cVar1 != '\0') {
                  local_3a = 
                  "VALID_PROC( (HEADER_TYPE *) JRCFDataGetMutableBytePtr(prefsData), static_cast<UInt32>( actualFileLength ), supportedMajorVersion )"
                  ;
                  goto LAB_1002471d9;
                }
                goto LAB_10024703b;
              }
              goto LAB_100246fb8;
            }
          }
          goto LAB_100247044;
        }
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
LAB_10024719d:
          local_3c = 0x400;
          local_44 = "Assertion failure";
          local_48 = 0x8220202;
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x12);
        }
LAB_100246faf:
        if (iVar2 != 0) goto LAB_100247044;
LAB_100246fb8:
        piVar6 = (int *)FUN_100170f7f(param_2);
        if (*piVar6 != 0x64707266) goto LAB_100247044;
      }
      FUN_10017cdfb(local_478);
      goto LAB_100246f70;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_45a = "JRFileSpecIsValid(iTunesFolderSpec)";
      goto LAB_100246ff4;
    }
  }
  FUN_1001782e9(0,0);
LAB_100246f70:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

