// name: FUN_1004ae1d2
// address: 1004ae1d2

int FUN_1004ae1d2(long param_1,long param_2,byte param_3)

{
  long lVar1;
  long lVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined8 *puVar9;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_1004ae341:
    uVar7 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar7,0x10);
    if (cVar3 != '\0') {
      local_4a = 
      "( ((inDM) != __null) && (((inDM)->magic == \'down\') ? true : HandleAssert(AssertCategory::None, \"Assertion failure (expected to be true)\", \"(inDM)->magic == \'down\'\", \"/AppleInternal/Library/BuildRoots/4~CakmugD0CR2Rb-cGHdD_ypyZft5Sukl8ug0NgCk/Library/Caches/com.apple.xbs/Sources/Devices/iTunes/Application/DownloadManager.cpp\", 15680, true)) )"
      ;
LAB_1004ae521:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
LAB_1004ae35e:
    FUN_1001782e9(0,0);
    iVar6 = -0x32;
    goto LAB_1004ae9fe;
  }
  if (*(int *)(param_1 + 4) != 0x646f776e) {
    uVar7 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar7,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure (expected to be true)";
      local_4c = 0x822;
      local_4a = "(inDM)->magic == \'down\'";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    cVar3 = FUN_1001782e9(0,1);
    if (cVar3 == '\0') goto LAB_1004ae341;
  }
  cVar3 = FUN_1004aa626(param_2);
  if (cVar3 == '\0') {
    uVar7 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar7,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "DownloadItem_IsValid(inItem)";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    iVar6 = 0x1f49;
    goto LAB_1004ae9fe;
  }
  if (*(int *)(param_2 + 0x120) == 0) {
    uVar7 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar7,0x10);
    if (cVar3 != '\0') {
      local_4a = "inItem->category != kDownloadCategory_Unknown";
      goto LAB_1004ae521;
    }
    goto LAB_1004ae35e;
  }
  FUN_1004aa6e0(param_2,param_1);
  cVar3 = FUN_1001ee056();
  if (cVar3 == '\0') {
    uVar7 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar7,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "JRIsCurrentThreadCooperative()";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if (((*(char *)(param_1 + 0x5c8) == '\0') && (iVar6 = FUN_1004bb2cc(param_1), iVar6 != -0x80)) &&
     (iVar6 != 0)) {
    uVar7 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar7,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x400;
      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar6);
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
    }
  }
  uVar5 = *(uint *)(param_2 + 0x144) & 0x8000000;
  *(undefined1 *)(param_1 + 0x619) = 0;
  lVar1 = *(long *)(param_1 + 0x150 + (ulong)(uVar5 >> 0x18));
  if (lVar1 == 0) {
    uVar7 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar7,0x10);
    iVar6 = -0x32;
    if (cVar3 != '\0') {
      local_4a = "inQueue != __null";
LAB_1004ae58e:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
LAB_1004ae5b3:
    FUN_1001782e9(0,0);
  }
  else {
    if (*(long *)(lVar1 + 8) == 0) {
      uVar7 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar7,0x10);
      iVar6 = -0x32;
      if (cVar3 != '\0') {
        local_4a = "inQueue->downloadManager != __null";
        goto LAB_1004ae58e;
      }
      goto LAB_1004ae5b3;
    }
    cVar3 = FUN_1004aa626(param_2);
    if (cVar3 == '\0') {
      uVar7 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar7,0x10);
      iVar6 = 0x1f49;
      if (cVar3 != '\0') {
        local_4a = "DownloadItem_IsValid(inDownloadItem)";
        goto LAB_1004ae58e;
      }
      goto LAB_1004ae5b3;
    }
    FUN_1004a88cf(param_2);
    *(long *)(param_2 + 0x28) = lVar1;
    cVar3 = *(char *)(lVar1 + 0x145);
    if (cVar3 != '\0') {
      if (*(char *)(param_2 + 0x779) == '\0') {
        if (*(int *)(param_2 + 0x118) - 0x3e9U < 0xfffffc1b) {
          FUN_1004ac2b6(param_2,0,0x1f42,1);
        }
        if (*(long *)(param_2 + 0x20) != 0) {
          *(undefined1 *)(*(long *)(param_2 + 0x20) + 0x618) = 1;
        }
        *(undefined1 *)(param_2 + 0x1b8) = 1;
      }
      else {
        uVar7 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar7,0x10);
        if (cVar4 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "inItem->isSubItem == false";
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
    }
    *(byte *)(param_2 + 0x147) = *(byte *)(param_2 + 0x147) | 0x40;
    FUN_1004af7d3(param_2,1,1);
    if (((*(char *)(param_2 + 0x778) == '\0') &&
        (((*(int *)(param_2 + 0x140) != 0x66696c65 || (*(int *)(param_2 + 0x1304) == 0x636f7079)) ||
         (-1 < *(int *)(param_2 + 0x7d8))))) && (cVar4 = FUN_1004aa626(param_2), cVar4 != '\0')) {
      *(undefined1 *)(param_2 + 0x210) = 2;
    }
    if (cVar3 == '\0') {
      *(undefined4 *)(param_2 + 0x118) = 1;
      lVar2 = *(long *)(lVar1 + 8);
      if (lVar2 == 0) {
        uVar7 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar7,0x10);
        if (cVar4 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "inDM != __null";
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
      else {
        iVar6 = *(int *)(param_2 + 0x120);
        if (iVar6 != 0) {
          if (iVar6 == 0x73746f72) {
            iVar6 = 1;
LAB_1004ae82d:
            piVar8 = (int *)((ulong)(uint)(iVar6 * 0x50) + lVar2 + 0x14);
          }
          else {
            if (iVar6 == 0x64657669) {
              iVar6 = 2;
              goto LAB_1004ae82d;
            }
            piVar8 = (int *)(lVar2 + 0x104);
          }
          *piVar8 = *piVar8 + 1;
        }
        *(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + 1;
        *(undefined1 *)(lVar2 + 0x61a) = 1;
      }
    }
    else {
      *(undefined4 *)(param_2 + 0x118) = 2000;
    }
    if (*(char *)(lVar1 + 0x16) != '\0') {
      FUN_1004aedef(lVar1,0,1);
    }
    cVar4 = FUN_1004aa626(param_2);
    if (cVar4 == '\0') {
      uVar7 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar7,0x10);
      if (cVar4 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "DownloadItem_IsValid(inItem)";
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else {
      FUN_1004a88cf(param_2);
      iVar6 = FUN_1001e9de0();
      if (iVar6 != -0x80) {
        if (iVar6 == 0) {
          puVar9 = (undefined8 *)(lVar1 + 0x68);
          if ((uVar5 == 0 & param_3) == 0) {
            FUN_1001c2c8a(puVar9,param_2);
          }
          else {
            FUN_1001c2bbb(puVar9,param_2);
            puVar9 = (undefined8 *)*puVar9;
            cVar4 = FUN_1004aa626(puVar9);
            if (cVar4 == '\0') {
              iVar6 = 1;
            }
            else {
              uVar5 = 0;
              do {
                if (uVar5 < *(uint *)((long)puVar9 + 0x11c)) {
                  uVar5 = *(uint *)((long)puVar9 + 0x11c);
                }
                puVar9 = (undefined8 *)*puVar9;
                cVar4 = FUN_1004aa626(puVar9);
              } while (cVar4 != '\0');
              iVar6 = uVar5 + 1;
            }
            *(int *)(param_2 + 0x11c) = iVar6;
          }
          *(int *)(lVar1 + 0x60) = *(int *)(lVar1 + 0x60) + 1;
          FUN_1001e9eb9(lVar1 + 0x18);
        }
        else {
          uVar7 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar7,0x10);
          if (cVar4 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x400;
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar6);
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
          }
        }
      }
    }
    if (cVar3 != '\0') {
      FUN_1004bb191(param_2,0,0);
LAB_1004ae9bb:
      if (*(char *)(lVar1 + 0x17) != '\0') {
        FUN_1001c6987(lVar1 + 0x80,0x646d6961,param_2,0,0);
      }
      FUN_1004aebc3(*(undefined8 *)(lVar1 + 8));
      FUN_1004aa496(param_2);
LAB_1004ae9ec:
      *(undefined1 *)(param_1 + 0x618) = 1;
      FUN_1004b10ec(param_1);
      iVar6 = 0;
      goto LAB_1004ae9fe;
    }
    iVar6 = FUN_1004b132d(lVar1,1);
    if (iVar6 == 0) {
      FUN_1004ade8e(param_2);
      goto LAB_1004ae9bb;
    }
    if (iVar6 == -0x80) {
      FUN_1004aa496(param_2);
      iVar6 = -0x80;
      goto LAB_1004ae9fe;
    }
    uVar7 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar7,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x400;
      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar6);
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
    }
    FUN_1004aa496(param_2);
    if (iVar6 == 0) goto LAB_1004ae9ec;
  }
  uVar7 = FUN_1001cc310();
  cVar3 = _os_log_type_enabled(uVar7,0x10);
  if (cVar3 != '\0') {
    local_58 = 0x8220202;
    local_54 = "Assertion failure";
    local_4c = 0x400;
    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar6);
    __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
  }
LAB_1004ae9fe:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar6;
}

