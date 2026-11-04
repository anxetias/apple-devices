// name: FUN_1003d1639
// address: 1003d1639

int FUN_1003d1639(undefined8 param_1,int param_2,byte param_3,long *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined4 uVar10;
  ulong uVar11;
  long *plVar12;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_2 == 0 || param_4 != (long *)0x0) && (param_2 != 0 || param_4 == (long *)0x0)) {
    uVar8 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar8,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = 
      "(nextItemPriority != 0 && outImageAlbum == nullptr) || (nextItemPriority == 0 && outImageAlbum != nullptr)"
      ;
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    lVar5 = FUN_10049bd23(param_1);
    if (lVar5 != 0) {
      plVar6 = (long *)FUN_1001c6429((ulong)*(uint *)(lVar5 + 0x50) << 4);
      if (plVar6 == (long *)0x0) {
        uVar8 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar8,0x10);
        if (cVar1 != '\0') {
          local_4a = "sortedMasterImageList != nullptr";
LAB_1003d1b4b:
          local_4c = 0x822;
          local_54 = "Assertion failure";
          local_58 = 0x8220202;
          __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
LAB_1003d1972:
        lVar7 = 0;
LAB_1003d1975:
        FUN_1001782e9(0,0);
        iVar2 = -0x6c;
LAB_1003d1986:
        FUN_100496508(lVar7);
      }
      else {
        FUN_1001c631b(*(undefined8 *)(lVar5 + 0x58),plVar6,(ulong)*(uint *)(lVar5 + 0x50) << 4);
        lVar7 = 0;
        FUN_1001d290b(plVar6,*(undefined4 *)(lVar5 + 0x50),0x10,FUN_100496326,0);
        if (param_4 != (long *)0x0) {
          uVar10 = 0;
          lVar7 = FUN_10049a4a2(param_1,0,0);
          if (lVar7 == 0) {
            uVar8 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar8,0x10);
            if (cVar1 != '\0') {
              local_4a = "autoIncludeAlbum != nullptr";
              goto LAB_1003d1b4b;
            }
            goto LAB_1003d1972;
          }
          *(undefined1 *)(lVar7 + 0x11) = 3;
          if ((byte)(param_3 + 0x9b) < 0xd) {
            uVar10 = *(undefined4 *)(&DAT_100747c64 + (ulong)(byte)(param_3 + 0x9b) * 4);
          }
          FUN_1001c334a(&local_58,uVar10);
          uVar8 = FUN_1001b83ae(&local_58);
          iVar2 = FUN_10058f474(lVar7,uVar8);
          FUN_1001b7a50(&local_58);
          if (iVar2 == -0x80) {
            iVar2 = -0x80;
            goto LAB_1003d1986;
          }
          if (iVar2 != 0) {
            uVar8 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar8,0x10);
            if (cVar1 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x400;
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
              __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            }
            goto LAB_1003d1a0d;
          }
          lVar9 = FUN_1001c6429((ulong)*(uint *)(lVar5 + 0x50) << 4);
          *(long *)(lVar7 + 0x58) = lVar9;
          if (lVar9 != 0) goto LAB_1003d178e;
          uVar8 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar8,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "autoIncludeAlbum->imageList != nullptr";
            __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          goto LAB_1003d1975;
        }
LAB_1003d178e:
        iVar3 = FUN_100177d5c(0);
        iVar2 = -0x93a80;
        if (param_3 != 0x71) {
          iVar2 = (uint)param_3 * -0x2819a0 + 0xfaa0280;
        }
        if (*(int *)(lVar5 + 0x50) != 0) {
          uVar11 = 0;
          plVar12 = plVar6;
          do {
            lVar9 = *plVar12;
            if ((uint)(iVar3 + iVar2) < *(uint *)(lVar9 + 0x5c)) {
              if (param_2 == 0) {
                iVar4 = FUN_10049b80b(lVar7,*(undefined4 *)(lVar7 + 0x50));
                if (iVar4 != -0x80) {
                  if (iVar4 == 0) {
                    *(int *)(lVar7 + 0x50) = *(int *)(lVar7 + 0x50) + 1;
                  }
                  else {
                    uVar8 = FUN_1001cc310();
                    cVar1 = _os_log_type_enabled(uVar8,0x10);
                    if (cVar1 != '\0') {
                      local_58 = 0x8220202;
                      local_54 = "Assertion failure";
                      local_4c = 0x400;
                      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
                      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58
                                          ,0x12);
                    }
                  }
                }
              }
              else if (*(int *)(lVar9 + 0xa4) == 0) {
                *(int *)(lVar9 + 0xa4) = param_2;
              }
            }
            uVar11 = uVar11 + 1;
            plVar12 = plVar12 + 2;
          } while (uVar11 < *(uint *)(lVar5 + 0x50));
        }
        iVar2 = 0;
        if (param_4 != (long *)0x0) {
          iVar2 = FUN_100591a43(lVar7);
          if (iVar2 != -0x80) {
            if (iVar2 == 0) {
              *param_4 = lVar7;
              iVar2 = 0;
            }
            else {
              uVar8 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar8,0x10);
              if (cVar1 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x400;
                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
                __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,0x12)
                ;
              }
LAB_1003d1a0d:
              if (iVar2 != 0) goto LAB_1003d1986;
              iVar2 = 0;
            }
            goto LAB_1003d198e;
          }
          goto LAB_1003d1986;
        }
      }
LAB_1003d198e:
      FUN_1001c64c1(plVar6);
      goto LAB_1003d1997;
    }
    uVar8 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar8,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "masterAlbum != nullptr";
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  iVar2 = -0x32;
LAB_1003d1997:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

