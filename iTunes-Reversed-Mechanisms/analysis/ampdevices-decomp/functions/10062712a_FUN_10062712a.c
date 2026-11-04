// name: FUN_10062712a
// address: 10062712a

int FUN_10062712a(long param_1)

{
  long lVar1;
  ulong uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  ulong local_260;
  long local_258;
  long local_250;
  undefined1 local_248 [512];
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_250 = 0;
  iVar4 = 0;
  if (*(char *)(param_1 + 0x1045) != '\x01') goto LAB_1006274f9;
  FUN_1001e04f5("sentinel",local_248);
  lVar1 = param_1 + 0x1480;
  iVar4 = FUN_10017ecc9(param_1 + 0x1048,local_248,lVar1,0);
  if (iVar4 != -0x80) {
    if (iVar4 == 0) {
LAB_100627211:
      iVar4 = FUN_10017cc65(lVar1,0x64617461,3,&local_250);
      if (iVar4 != -0x80) {
        if (iVar4 == 0) {
          uVar2 = *(ulong *)(param_1 + 0x50);
          local_260 = uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 |
                      (uVar2 & 0xff0000000000) >> 0x18 | (uVar2 & 0xff00000000) >> 8 |
                      (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 |
                      (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38;
          iVar4 = FUN_10017cf3c(local_250,0);
          if (iVar4 != -0x80) {
            if (iVar4 == 0) {
              iVar4 = FUN_100188151(local_250,0,&local_260,8,0,&local_258);
              if (iVar4 != -0x80) {
                if (iVar4 == 0) {
                  iVar4 = 0;
                  if (local_258 != 8) {
                    uVar5 = FUN_1001cc310();
                    cVar3 = _os_log_type_enabled(uVar5,0x10);
                    if (cVar3 != '\0') {
                      local_48 = 0x8220202;
                      local_44 = "Assertion failure";
                      local_3c = 0x822;
                      local_3a = "numBytes == sizeof(sentinelData)";
                      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",
                                          &local_48,0x16);
                    }
                    FUN_1001782e9(0,0);
                    iVar4 = -0x24;
                  }
                }
                else {
                  uVar5 = FUN_1001cc310();
                  cVar3 = _os_log_type_enabled(uVar5,0x10);
                  if (cVar3 != '\0') {
                    local_3a = (char *)CONCAT44(local_3a._4_4_,iVar4);
                    goto LAB_1006274c5;
                  }
                }
              }
            }
            else {
              uVar5 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar5,0x10);
              if (cVar3 != '\0') {
                local_3a = (char *)CONCAT44(local_3a._4_4_,iVar4);
                goto LAB_1006274c5;
              }
            }
          }
        }
        else {
          uVar5 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar5,0x10);
          if (cVar3 != '\0') {
            local_3a = (char *)CONCAT44(local_3a._4_4_,iVar4);
LAB_1006274c5:
            local_3c = 0x400;
            local_44 = "Assertion failure";
            local_48 = 0x8220202;
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_48,0x12);
          }
        }
      }
    }
    else if (iVar4 == -0x2b) {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "fileExists";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
      iVar4 = FUN_1001891ea(param_1 + 0x1048,local_248,lVar1);
      if (iVar4 != -0x80) {
        if (iVar4 == 0) {
          FUN_100186d13(lVar1,1);
          goto LAB_100627211;
        }
        uVar5 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar5,0x10);
        if (cVar3 != '\0') {
          local_3a = (char *)CONCAT44(local_3a._4_4_,iVar4);
          goto LAB_1006274c5;
        }
      }
    }
    else {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_3a = (char *)CONCAT44(local_3a._4_4_,iVar4);
        goto LAB_1006274c5;
      }
    }
  }
  if (local_250 != 0) {
    FUN_10017cdfb();
  }
  if (iVar4 == 0) {
    FUN_10018e164(lVar1);
    iVar4 = 0;
  }
LAB_1006274f9:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

