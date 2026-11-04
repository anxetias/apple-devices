// name: FUN_1002e6017
// address: 1002e6017

undefined8 FUN_1002e6017(int *param_1,long param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  char cVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 uVar8;
  undefined8 local_d8;
  undefined1 local_c0 [8];
  long local_b8;
  char local_a9;
  undefined4 local_a8;
  char *local_a4;
  undefined2 local_9c;
  char *local_9a;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_b8 = param_3;
  if (param_1 == (int *)0x0) {
LAB_1002e6145:
    uVar6 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar6,0x10);
    if (cVar5 != '\0') {
      local_a8 = 0x8220202;
      local_a4 = "Assertion failure";
      local_9c = 0x822;
      local_9a = "PlaylistIsValid( inPlaylist )";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_a8,0x16);
    }
    FUN_1001782e9(0,1);
  }
  else {
    if (*param_1 != 0x706c7374) {
      uVar6 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar6,0x10);
      if (cVar5 != '\0') {
        local_a8 = 0x8220202;
        local_a4 = "Assertion failure (expected to be true)";
        local_9c = 0x822;
        local_9a = "playlist->magic == \'plst\'";
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_a8,0x16);
      }
      cVar5 = FUN_1001782e9(0,1);
      if (cVar5 == '\0') goto LAB_1002e6145;
    }
    if (*(long *)(param_1 + 2) == 0) {
LAB_1002e616c:
      uVar6 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar6,0x10);
      if (cVar5 != '\0') {
        local_a8 = 0x8220202;
        local_a4 = "Assertion failure";
        local_9c = 0x822;
        local_9a = "TrackDataIsValid( trackData )";
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_a8,0x16);
      }
      FUN_1001782e9(0,1);
    }
    else {
      if (*(int *)(*(long *)(param_1 + 2) + 0x80) != 0x74646174) {
        uVar6 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar6,0x10);
        if (cVar5 != '\0') {
          local_a8 = 0x8220202;
          local_a4 = "Assertion failure (expected to be true)";
          local_9c = 0x822;
          local_9a = "trackData->magic == \'tdat\'";
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_a8,0x16);
        }
        cVar5 = FUN_1001782e9(0,1);
        if (cVar5 == '\0') goto LAB_1002e616c;
      }
      FUN_100490cfc(&local_a8,param_1);
      iVar1 = param_1[0x13a];
      iVar2 = *(int *)(param_2 + 0x10);
      if (((iVar2 - 0x3cU < 0x2b) && ((0x40000000029U >> ((ulong)(iVar2 - 0x3cU) & 0x3f) & 1) != 0))
         || (iVar2 == 0)) {
        if (iVar1 != 0) {
          uVar6 = 0;
          if (iVar2 < 0x3f) {
            if ((iVar2 != 0) && (iVar2 != 0x3c)) goto LAB_1002e6197;
          }
          else if (iVar2 != 0x3f) {
            if (iVar2 == 0x66) {
              if (iVar1 == 0x66) goto LAB_1002e6223;
            }
            else {
              if (iVar2 != 0x41) goto LAB_1002e6197;
              if (iVar1 == 0x41) goto LAB_1002e6223;
            }
            goto LAB_1002e6195;
          }
        }
LAB_1002e6223:
        FUN_100314020(param_1);
        FUN_1001a8c1c(local_c0,param_1 + 0x136);
        uVar8 = (undefined1)param_1[0x13b];
        local_a9 = FUN_10048838a(param_1);
        uVar3 = param_1[0xcc];
        local_d8 = 0x10008;
        if (iVar1 != 0) {
          FUN_1001a7bd2(param_1 + 0x136,0);
          param_1[0x138] = 0;
          param_1[0x139] = 0;
          *(byte *)((long)param_1 + 0x333) = *(byte *)((long)param_1 + 0x333) & 0xfe;
          puVar4 = PTR_cf_generated_artwork_uuids_100844b58;
          cVar5 = FUN_100487c5d(param_1,PTR_cf_generated_artwork_uuids_100844b58);
          if (cVar5 != '\0') {
            local_d8 = 0x50008;
            FUN_1004881db(param_1,puVar4);
          }
        }
        iVar2 = *(int *)(param_2 + 0x10);
        if (iVar2 < 0x3f) {
          if (iVar2 == 0) {
            lVar7 = FUN_1001ab132(local_c0);
            uVar8 = 0;
            if ((lVar7 != 0) && (uVar8 = 0, (uVar3 & 0x1000000) == 0)) {
              FUN_1002e3d90(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_1 + 0x18),local_c0,
                            "playlist");
              uVar8 = 0;
            }
          }
          else if ((iVar2 == 0x3c) && (local_b8 != 0)) {
            FUN_1002e667a(param_1,&local_a8,param_2,local_b8,param_4);
          }
        }
        else if (iVar2 == 0x3f) {
          if (iVar1 != 0) {
            uVar8 = 0;
          }
        }
        else if (iVar2 == 0x41) {
          if (local_b8 == 0) {
            uVar6 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(uVar6,0x10);
            if (cVar5 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "inOptionalData != nullptr";
              __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
          }
          if (local_a9 != '\0') {
            uVar6 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(uVar6,0x10);
            if (cVar5 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "hadArtworkToken == false";
              __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
          }
LAB_1002e63dc:
          FUN_1002e667a(param_1,&local_a8,param_2,local_b8,param_4);
          uVar8 = 8;
        }
        else if (iVar2 == 0x66) {
          if (local_a9 != '\0') {
            uVar6 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(uVar6,0x10);
            if (cVar5 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "hadArtworkToken == false";
              __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
          }
          if (local_b8 != 0) goto LAB_1002e63dc;
          uVar8 = 8;
        }
        param_1[0x13a] = *(int *)(param_2 + 0x10);
        *(undefined1 *)(param_1 + 0x13b) = uVar8;
        FUN_1004874fd(param_1,local_d8);
        FUN_1001ab006(local_c0);
        FUN_1003142ca(param_1);
        uVar6 = 1;
        goto LAB_1002e6197;
      }
    }
  }
LAB_1002e6195:
  uVar6 = 0;
LAB_1002e6197:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar6;
}

