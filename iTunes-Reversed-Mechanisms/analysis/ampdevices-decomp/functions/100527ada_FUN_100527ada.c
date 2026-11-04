// name: FUN_100527ada
// address: 100527ada

void FUN_100527ada(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  long lVar5;
  long in_R8;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_100527a20(in_R8);
  if (cVar1 == '\0') {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "AppProgressBarIsValid(progressBar)";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_100527dc7;
  }
  if (param_1 != 0x64706c73) goto LAB_100527dc7;
  if ((*(byte *)(in_R8 + 0x829) & 1) != 0) {
    piVar3 = (int *)FUN_10048bde8();
    if (piVar3 == (int *)0x0) {
LAB_100527cb7:
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "PlaylistIsValid(primaryDefaultPlaylist)";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else {
      if (*piVar3 != 0x706c7374) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure (expected to be true)";
          local_3c = 0x822;
          local_3a = "playlist->magic == \'plst\'";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x16);
        }
        cVar1 = FUN_1001782e9(0,1);
        if (cVar1 == '\0') goto LAB_100527cb7;
      }
      cVar1 = FUN_100527a20(in_R8);
      if (cVar1 == '\0') {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_3a = "AppProgressBarIsValid(progressBar)";
LAB_100528045:
          local_3c = 0x822;
          local_44 = "Assertion failure";
          local_48 = 0x8220202;
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x16);
        }
LAB_100527d93:
        FUN_1001782e9(0,0);
        iVar2 = -0x32;
      }
      else {
        if (*piVar3 != 0x706c7374) {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            local_48 = 0x8220202;
            local_44 = "Assertion failure (expected to be true)";
            local_3c = 0x822;
            local_3a = "playlist->magic == \'plst\'";
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x16);
          }
          cVar1 = FUN_1001782e9(0,1);
          if (cVar1 == '\0') {
            uVar4 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            if (cVar1 != '\0') {
              local_3a = "PlaylistIsValid(newPlaylist)";
              goto LAB_100528045;
            }
            goto LAB_100527d93;
          }
        }
        lVar5 = FUN_10048bc57(*(undefined4 *)(in_R8 + 0xc));
        if (lVar5 == 0) {
LAB_100527bf1:
          *(int *)(in_R8 + 0xc) = piVar3[0x1a];
          lVar5 = in_R8 + 0x860;
          cVar1 = FUN_1001c6646(lVar5);
          if (cVar1 == '\0') {
            iVar2 = FUN_1001c703f(lVar5,FUN_100527ada,in_R8);
            if (iVar2 == -0x80) goto LAB_100527dbf;
            if (iVar2 != 0) {
              uVar4 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar4,0x10);
              if (cVar1 != '\0') {
                local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
                goto LAB_100527f1d;
              }
              goto LAB_100527f30;
            }
          }
          iVar2 = FUN_1001c6b4a(piVar3 + 0x32,lVar5);
          if (iVar2 == -0x80) goto LAB_100527dbf;
          if (iVar2 == 0) {
            uVar4 = FUN_1001c156e();
            FUN_1001c6987(uVar4,0x63707267,in_R8,0,0);
            if (*(char *)(in_R8 + 0x8e0) == '\0') {
              FUN_100528074(in_R8,1);
            }
            goto LAB_100527dc7;
          }
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
            goto LAB_100527f1d;
          }
        }
        else {
          iVar2 = FUN_1001c6d2a(lVar5 + 200,in_R8 + 0x860);
          if (iVar2 == -0x80) goto LAB_100527dbf;
          if (iVar2 == 0) goto LAB_100527bf1;
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
LAB_100527f1d:
            local_3c = 0x400;
            local_44 = "Assertion failure";
            local_48 = 0x8220202;
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x12);
          }
        }
LAB_100527f30:
        if (iVar2 == 0) goto LAB_100527dc7;
      }
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x400;
        local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x12);
      }
    }
  }
LAB_100527dbf:
  FUN_10052897c(in_R8);
LAB_100527dc7:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

