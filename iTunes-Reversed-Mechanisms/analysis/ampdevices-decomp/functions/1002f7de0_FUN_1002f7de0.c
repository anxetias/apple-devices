// name: FUN_1002f7de0
// address: 1002f7de0

void FUN_1002f7de0(int *param_1,long *param_2)

{
  long lVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (int *)0x0) {
LAB_1002f7f14:
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      local_3a = "PlaylistIsValid(playlist)";
      goto LAB_1002f8187;
    }
  }
  else {
    if (*param_1 != 0x706c7374) {
      uVar4 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar4,0x10);
      if (cVar3 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure (expected to be true)";
        local_3c = 0x822;
        local_3a = "playlist->magic == \'plst\'";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      cVar3 = FUN_1001782e9(0,1);
      if (cVar3 == '\0') goto LAB_1002f7f14;
    }
    lVar1 = *(long *)(param_1 + 2);
    if (lVar1 == 0) {
LAB_1002f7f56:
      uVar4 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar4,0x10);
      if (cVar3 != '\0') {
        local_3a = "TrackDataIsValid(trackData)";
        goto LAB_1002f8187;
      }
    }
    else {
      if (*(int *)(lVar1 + 0x80) != 0x74646174) {
        uVar4 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar4,0x10);
        if (cVar3 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure (expected to be true)";
          local_3c = 0x822;
          local_3a = "trackData->magic == \'tdat\'";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        cVar3 = FUN_1001782e9(0,1);
        if (cVar3 == '\0') goto LAB_1002f7f56;
      }
      if (*(long *)(param_1 + 0xc) != 0) {
        uVar4 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar4,0x10);
        if (cVar3 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = "playlist->nextSibling == nullptr";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
      }
      if (*(long *)(param_1 + 0xe) != 0) {
        uVar4 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar4,0x10);
        if (cVar3 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = "playlist->prevSibling == nullptr";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
      }
      if (param_2 == (long *)0x0) {
LAB_1002f7ff6:
        lVar7 = *(long *)(lVar1 + 0x1b60);
LAB_1002f7ffd:
        if (lVar7 == 0) {
          param_1[10] = 0;
          param_1[0xb] = 0;
          param_1[0xe] = 0;
          param_1[0xf] = 0;
          lVar7 = *(long *)(lVar1 + 7000);
          *(long *)(param_1 + 0xc) = lVar7;
          if (lVar7 != 0) {
            *(int **)(lVar7 + 0x38) = param_1;
          }
          *(int **)(lVar1 + 7000) = param_1;
          lVar8 = 0;
          if (*(long *)(lVar1 + 0x1b60) == 0) goto LAB_1002f81b9;
        }
        else {
          bVar2 = true;
          lVar8 = 0;
LAB_1002f8007:
          if (*(long *)(lVar7 + 0x28) != lVar8) {
            uVar4 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar4,0x10);
            if (cVar3 != '\0') {
              local_3a = "afterPlaylist == nullptr || afterPlaylist->parent == parent";
              goto LAB_1002f8187;
            }
            goto LAB_1002f7f73;
          }
          *(long *)(param_1 + 10) = lVar8;
          *(long *)(param_1 + 0xe) = lVar7;
          *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(lVar7 + 0x30);
          *(int **)(lVar7 + 0x30) = param_1;
          if (*(long *)(param_1 + 0xc) != 0) {
            puVar5 = (undefined8 *)(*(long *)(param_1 + 0xc) + 0x38);
            goto LAB_1002f82eb;
          }
          if (!bVar2) goto LAB_1002f82e7;
LAB_1002f81b9:
          puVar5 = (undefined8 *)(lVar1 + 0x1b60);
LAB_1002f82eb:
          *puVar5 = param_1;
        }
LAB_1002f82ee:
        iVar6 = param_1[0x16];
        if (iVar6 == 0) {
          uVar4 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar4,0x10);
          if (cVar3 != '\0') {
            local_48 = 0x8220202;
            local_44 = "Assertion failure (expected to be true)";
            local_3c = 0x822;
            local_3a = "playlist->objectID != 0";
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
          }
          cVar3 = FUN_1001782e9(0,1);
          if (cVar3 != '\0') {
            iVar6 = param_1[0x16];
            goto LAB_1002f8325;
          }
        }
        else {
LAB_1002f8325:
          FUN_1002f8472(*(long *)(param_1 + 2) + 0x26a0,iVar6,param_1);
        }
        lVar7 = *(long *)(param_1 + 0x18);
        if (lVar7 == 0) {
          uVar4 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar4,0x10);
          if (cVar3 != '\0') {
            local_48 = 0x8220202;
            local_44 = "Assertion failure (expected to be true)";
            local_3c = 0x822;
            local_3a = "playlist->persistentID != 0";
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
          }
          cVar3 = FUN_1001782e9(0,1);
          if (cVar3 != '\0') {
            lVar7 = *(long *)(param_1 + 0x18);
            goto LAB_1002f8370;
          }
        }
        else {
LAB_1002f8370:
          FUN_1002f8572(*(long *)(param_1 + 2) + 0x26c8,lVar7,param_1);
        }
        if ((*(long *)(lVar1 + 0x26f0) != 0) &&
           (*(long *)(param_1 + 0x76) - 1U < 0xfffffffffffffffc)) {
          FUN_1002f8572(*(long *)(lVar1 + 0x26f0),*(long *)(param_1 + 0x76),param_1);
        }
        for (; lVar8 != 0; lVar8 = *(long *)(lVar8 + 0x28)) {
          *(int *)(lVar8 + 0x40) = *(int *)(lVar8 + 0x40) + 1;
        }
        *(int *)(lVar1 + 0x98) = *(int *)(lVar1 + 0x98) + 1;
        *(byte *)(lVar1 + 0x1bb1) = *(byte *)(lVar1 + 0x1bb1) | 2;
        FUN_1002dd7e7(lVar1);
        goto LAB_1002f7f7c;
      }
      lVar8 = *param_2;
      lVar7 = param_2[1];
      if (lVar7 == -1) {
        if (lVar8 == 0) goto LAB_1002f7ff6;
        lVar7 = *(long *)(lVar8 + 0x50);
      }
      else if (lVar8 == 0) goto LAB_1002f7ffd;
      if (*(long *)(lVar8 + 8) == *(long *)(param_1 + 2)) {
        cVar3 = FUN_100485090(param_1,lVar8);
        if (cVar3 == '\0') {
          if (lVar7 != 0) {
            bVar2 = false;
            goto LAB_1002f8007;
          }
          *(long *)(param_1 + 10) = lVar8;
          param_1[0xe] = 0;
          param_1[0xf] = 0;
          lVar7 = *(long *)(lVar8 + 0x48);
          *(long *)(param_1 + 0xc) = lVar7;
          if (lVar7 != 0) {
            *(int **)(lVar7 + 0x38) = param_1;
          }
          *(int **)(lVar8 + 0x48) = param_1;
          if (*(long *)(lVar8 + 0x50) != 0) goto LAB_1002f82ee;
LAB_1002f82e7:
          puVar5 = (undefined8 *)(lVar8 + 0x50);
          goto LAB_1002f82eb;
        }
        uVar4 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar4,0x10);
        if (cVar3 != '\0') {
          local_3a = "PlaylistIsParent(playlist, parent) == false";
          goto LAB_1002f8187;
        }
      }
      else {
        uVar4 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar4,0x10);
        if (cVar3 != '\0') {
          local_3a = "parent->trackData == playlist->trackData";
LAB_1002f8187:
          local_3c = 0x822;
          local_44 = "Assertion failure";
          local_48 = 0x8220202;
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
      }
    }
  }
LAB_1002f7f73:
  FUN_1001782e9(0,0);
LAB_1002f7f7c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

