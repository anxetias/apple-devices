// name: FUN_100327d7e
// address: 100327d7e

void FUN_100327d7e(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  undefined4 *puVar7;
  void *pvVar8;
  undefined8 uVar9;
  ulong uVar10;
  cfstringStruct **ppcVar11;
  cfstringStruct *local_150 [2];
  undefined1 local_140 [16];
  cfstringStruct *local_130 [2];
  cfstringStruct *local_120 [2];
  cfstringStruct *local_110 [2];
  cfstringStruct *local_100 [2];
  cfstringStruct *local_f0 [2];
  cfstringStruct *local_e0 [2];
  cfstringStruct *local_d0 [2];
  cfstringStruct *local_c0 [2];
  cfstringStruct *local_b0 [2];
  cfstringStruct *local_a0;
  undefined1 local_98 [16];
  cfstringStruct *local_88 [2];
  long local_78 [2];
  long local_68 [2];
  cfstringStruct *local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar9 = FUN_1001cc310();
    cVar6 = _os_log_type_enabled(uVar9,0x10);
    if (cVar6 != '\0') {
      local_48 = 0x8220202;
      uStack_44 = 0x7a0a90;
      uStack_40 = 1;
      local_3c = 0x822;
      local_3a = "mDataDict != nullptr";
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    *(undefined1 *)(param_1 + 0x2b6) = 1;
    local_b0[0] = &cf_create;
    FUN_1001a7b90(local_78);
    FUN_10032f0f2(local_88);
    FUN_10032f0f2(&local_48);
    lVar1 = param_1 + 0x18;
    cVar6 = FUN_1001a92ae(lVar1,local_78,&local_48);
    ppcVar11 = local_88;
    if (cVar6 != '\0') {
      ppcVar11 = (cfstringStruct **)&local_48;
    }
    FUN_1001a7a9e(local_68,ppcVar11);
    FUN_1001a85d4(&local_48);
    FUN_1001a85d4(local_88);
    FUN_1001ab240(local_78);
    if (local_68[0] != 0) {
      puVar7 = (undefined4 *)FUN_1001a8626(local_68);
      uVar2 = *puVar7;
      uVar3 = puVar7[1];
      uVar4 = puVar7[2];
      uVar5 = puVar7[3];
      uVar9 = *(undefined8 *)((long)puVar7 + 0x12);
      *(undefined8 *)(param_1 + 0x32) = *(undefined8 *)((long)puVar7 + 10);
      *(undefined8 *)(param_1 + 0x3a) = uVar9;
      *(undefined4 *)(param_1 + 0x28) = uVar2;
      *(undefined4 *)(param_1 + 0x2c) = uVar3;
      *(undefined4 *)(param_1 + 0x30) = uVar4;
      *(undefined4 *)(param_1 + 0x34) = uVar5;
    }
    FUN_1001a85d4(local_68);
    local_b0[0] = &cf_fixed;
    FUN_1001a7b90(local_78);
    FUN_10032f0f2(local_88);
    FUN_10032f0f2(&local_48);
    cVar6 = FUN_1001a92ae(lVar1,local_78,&local_48);
    ppcVar11 = local_88;
    if (cVar6 != '\0') {
      ppcVar11 = (cfstringStruct **)&local_48;
    }
    FUN_1001a7a9e(local_68,ppcVar11);
    FUN_1001a85d4(&local_48);
    FUN_1001a85d4(local_88);
    FUN_1001ab240(local_78);
    if (local_68[0] != 0) {
      pvVar8 = (void *)FUN_1001a8626(local_68);
      _memcpy((void *)(param_1 + 0x42),pvVar8,0x17c);
    }
    FUN_1001a85d4(local_68);
    FUN_1001b7a44(local_68);
    FUN_10032f0f2(local_88);
    FUN_10032f0f2(local_78);
    FUN_10032f0f2(local_b0);
    FUN_10032f0f2(local_98);
    FUN_10032f0f2(local_140);
    local_150[0] = &cf_validFields;
    FUN_1001a7b90(local_58);
    cVar6 = FUN_1001a9810(lVar1,local_58,&local_48);
    if (cVar6 == '\0') {
      uVar9 = 0;
    }
    else {
      uVar9 = CONCAT44(uStack_44,local_48);
    }
    *(undefined8 *)(param_1 + 0x1be) = uVar9;
    FUN_1001ab240(local_58);
    local_120[0] = &cf_name;
    FUN_1001a7b90(local_130);
    FUN_1001b7a44(local_150);
    FUN_1001b7a44(&local_48);
    cVar6 = FUN_1001a944e(lVar1,local_130,&local_48);
    ppcVar11 = local_150;
    if (cVar6 != '\0') {
      ppcVar11 = (cfstringStruct **)&local_48;
    }
    FUN_1001b7a5c(local_58,ppcVar11);
    FUN_1001b7a50(&local_48);
    FUN_1001b80b2(local_68,local_58);
    FUN_1001b7a50(local_58);
    FUN_1001b7a50(local_150);
    FUN_1001ab240(local_130);
    cVar6 = FUN_1001b8428(local_68);
    if (cVar6 == '\0') {
      FUN_1001b8172(param_1 + 0x1c6,local_68);
      uVar10 = *(ulong *)(param_1 + 0x1be);
      if ((uVar10 & 1) == 0) {
        uVar9 = FUN_1001cc310();
        cVar6 = _os_log_type_enabled(uVar9,0x10);
        if (cVar6 != '\0') {
          local_48 = 0x8220202;
          uStack_44 = 0x7a0a90;
          uStack_40 = 1;
          local_3c = 0x822;
          local_3a = 
          "(outChangeDataVar->mValidFields & kAMPLPlaylistChangeDataValidField_Var_Name) != kAMPLPlaylistChangeDataValidFields_Var_None"
          ;
          __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
        uVar10 = *(ulong *)(param_1 + 0x1be);
      }
      *(ulong *)(param_1 + 0x1be) = uVar10 | 1;
    }
    local_110[0] = &cf_artworkUUID;
    FUN_1001a7b90(local_120);
    FUN_1001b7a44(local_130);
    FUN_1001b7a44(&local_48);
    cVar6 = FUN_1001a944e(lVar1,local_120,&local_48);
    ppcVar11 = local_130;
    if (cVar6 != '\0') {
      ppcVar11 = (cfstringStruct **)&local_48;
    }
    FUN_1001b7a5c(local_58,ppcVar11);
    FUN_1001b7a50(&local_48);
    FUN_1001b80b2(local_68,local_58);
    FUN_1001b7a50(local_58);
    FUN_1001b7a50(local_130);
    FUN_1001ab240(local_120);
    cVar6 = FUN_1001b8428(local_68);
    if (cVar6 == '\0') {
      FUN_1001b8172(param_1 + 0x1d6,local_68);
      uVar10 = *(ulong *)(param_1 + 0x1be);
      if ((uVar10 & 2) == 0) {
        uVar9 = FUN_1001cc310();
        cVar6 = _os_log_type_enabled(uVar9,0x10);
        if (cVar6 != '\0') {
          local_48 = 0x8220202;
          uStack_44 = 0x7a0a90;
          uStack_40 = 1;
          local_3c = 0x822;
          local_3a = 
          "(outChangeDataVar->mValidFields & kAMPLPlaylistChangeDataValidField_Var_ArtworkUUID) != kAMPLPlaylistChangeDataValidFields_Var_None"
          ;
          __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
        uVar10 = *(ulong *)(param_1 + 0x1be);
      }
      *(ulong *)(param_1 + 0x1be) = uVar10 | 2;
    }
    local_100[0] = &cf_dataDict;
    FUN_1001a7b90(local_110);
    FUN_10032f0f2(local_120);
    FUN_10032f0f2(&local_48);
    cVar6 = FUN_1001a9164(lVar1,local_110,&local_48);
    ppcVar11 = local_120;
    if (cVar6 != '\0') {
      ppcVar11 = (cfstringStruct **)&local_48;
    }
    FUN_1001a7a9e(local_58,ppcVar11);
    FUN_1001a8fac(&local_48);
    FUN_1001a7b1c(local_78,local_58);
    FUN_1001a8fac(local_58);
    FUN_1001a8fac(local_120);
    FUN_1001ab240(local_110);
    if (local_78[0] != 0) {
      FUN_1001a7ad8(param_1 + 0x1e6,local_78);
      uVar10 = *(ulong *)(param_1 + 0x1be);
      if ((uVar10 & 4) == 0) {
        uVar9 = FUN_1001cc310();
        cVar6 = _os_log_type_enabled(uVar9,0x10);
        if (cVar6 != '\0') {
          local_48 = 0x8220202;
          uStack_44 = 0x7a0a90;
          uStack_40 = 1;
          local_3c = 0x822;
          local_3a = 
          "(outChangeDataVar->mValidFields & kAMPLPlaylistChangeDataValidField_Var_DataDict) != kAMPLPlaylistChangeDataValidFields_Var_None"
          ;
          __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
        uVar10 = *(ulong *)(param_1 + 0x1be);
      }
      *(ulong *)(param_1 + 0x1be) = uVar10 | 4;
    }
    local_f0[0] = &cf_splCriteria;
    FUN_1001a7b90(local_100);
    FUN_10032f0f2(local_110);
    FUN_10032f0f2(&local_48);
    cVar6 = FUN_1001a92ae(lVar1,local_100,&local_48);
    ppcVar11 = local_110;
    if (cVar6 != '\0') {
      ppcVar11 = (cfstringStruct **)&local_48;
    }
    FUN_1001a7a9e(local_58,ppcVar11);
    FUN_1001a85d4(&local_48);
    FUN_1001a7b1c(local_88,local_58);
    FUN_1001a85d4(local_58);
    FUN_1001a85d4(local_110);
    FUN_1001ab240(local_100);
    if (local_88[0] != (cfstringStruct *)0x0) {
      FUN_1001a7ad8(param_1 + 0x206,local_88);
      uVar10 = *(ulong *)(param_1 + 0x1be);
      if ((uVar10 & 8) == 0) {
        uVar9 = FUN_1001cc310();
        cVar6 = _os_log_type_enabled(uVar9,0x10);
        if (cVar6 != '\0') {
          local_48 = 0x8220202;
          uStack_44 = 0x7a0a90;
          uStack_40 = 1;
          local_3c = 0x822;
          local_3a = 
          "(outChangeDataVar->mValidFields & kAMPLPlaylistChangeDataValidField_Var_SmartPlaylistCriteria) != kAMPLPlaylistChangeDataValidFields_Var_None"
          ;
          __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
        uVar10 = *(ulong *)(param_1 + 0x1be);
      }
      *(ulong *)(param_1 + 0x1be) = uVar10 | 8;
    }
    local_e0[0] = &cf_description;
    FUN_1001a7b90(local_f0);
    FUN_1001b7a44(local_100);
    FUN_1001b7a44(&local_48);
    cVar6 = FUN_1001a944e(lVar1,local_f0,&local_48);
    ppcVar11 = local_100;
    if (cVar6 != '\0') {
      ppcVar11 = (cfstringStruct **)&local_48;
    }
    FUN_1001b7a5c(local_58,ppcVar11);
    FUN_1001b7a50(&local_48);
    FUN_1001b80b2(local_68,local_58);
    FUN_1001b7a50(local_58);
    FUN_1001b7a50(local_100);
    FUN_1001ab240(local_f0);
    cVar6 = FUN_1001b8428(local_68);
    if (cVar6 == '\0') {
      FUN_1001b8172(param_1 + 0x216,local_68);
      uVar10 = *(ulong *)(param_1 + 0x1be);
      if ((uVar10 & 0x10) == 0) {
        uVar9 = FUN_1001cc310();
        cVar6 = _os_log_type_enabled(uVar9,0x10);
        if (cVar6 != '\0') {
          local_48 = 0x8220202;
          uStack_44 = 0x7a0a90;
          uStack_40 = 1;
          local_3c = 0x822;
          local_3a = 
          "(outChangeDataVar->mValidFields & kAMPLPlaylistChangeDataValidField_Var_Description) != kAMPLPlaylistChangeDataValidFields_Var_None"
          ;
          __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
        uVar10 = *(ulong *)(param_1 + 0x1be);
      }
      *(ulong *)(param_1 + 0x1be) = uVar10 | 0x10;
    }
    local_d0[0] = &cf_longDesc;
    FUN_1001a7b90(local_e0);
    FUN_1001b7a44(local_f0);
    FUN_1001b7a44(&local_48);
    cVar6 = FUN_1001a944e(lVar1,local_e0,&local_48);
    ppcVar11 = local_f0;
    if (cVar6 != '\0') {
      ppcVar11 = (cfstringStruct **)&local_48;
    }
    FUN_1001b7a5c(local_58,ppcVar11);
    FUN_1001b7a50(&local_48);
    FUN_1001b80b2(local_68,local_58);
    FUN_1001b7a50(local_58);
    FUN_1001b7a50(local_f0);
    FUN_1001ab240(local_e0);
    cVar6 = FUN_1001b8428(local_68);
    if (cVar6 == '\0') {
      FUN_1001b8172(param_1 + 0x226,local_68);
      uVar10 = *(ulong *)(param_1 + 0x1be);
      if ((uVar10 & 0x20) == 0) {
        uVar9 = FUN_1001cc310();
        cVar6 = _os_log_type_enabled(uVar9,0x10);
        if (cVar6 != '\0') {
          local_48 = 0x8220202;
          uStack_44 = 0x7a0a90;
          uStack_40 = 1;
          local_3c = 0x822;
          local_3a = 
          "(outChangeDataVar->mValidFields & kAMPLPlaylistChangeDataValidField_Var_LongDescription) != kAMPLPlaylistChangeDataValidFields_Var_None"
          ;
          __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
        uVar10 = *(ulong *)(param_1 + 0x1be);
      }
      *(ulong *)(param_1 + 0x1be) = uVar10 | 0x20;
    }
    local_c0[0] = &cf_geniusSeed;
    FUN_1001a7b90(local_d0);
    FUN_10032f0f2(local_e0);
    FUN_10032f0f2(&local_48);
    cVar6 = FUN_1001a90d0(lVar1,local_d0,&local_48);
    ppcVar11 = local_e0;
    if (cVar6 != '\0') {
      ppcVar11 = (cfstringStruct **)&local_48;
    }
    FUN_1001a7a9e(local_58,ppcVar11);
    FUN_1001a7a94(&local_48);
    FUN_1001a7b1c(local_b0,local_58);
    FUN_1001a7a94(local_58);
    FUN_1001a7a94(local_e0);
    FUN_1001ab240(local_d0);
    if (local_b0[0] != (cfstringStruct *)0x0) {
      FUN_1001a7ad8(param_1 + 0x246,local_b0);
      uVar10 = *(ulong *)(param_1 + 0x1be);
      if ((uVar10 & 0x40) == 0) {
        uVar9 = FUN_1001cc310();
        cVar6 = _os_log_type_enabled(uVar9,0x10);
        if (cVar6 != '\0') {
          local_48 = 0x8220202;
          uStack_44 = 0x7a0a90;
          uStack_40 = 1;
          local_3c = 0x822;
          local_3a = 
          "(outChangeDataVar->mValidFields & kAMPLPlaylistChangeDataValidField_Var_GeniusSeedTracks) != kAMPLPlaylistChangeDataValidFields_Var_None"
          ;
          __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
        uVar10 = *(ulong *)(param_1 + 0x1be);
      }
      *(ulong *)(param_1 + 0x1be) = uVar10 | 0x40;
    }
    local_58[0] = &cf_removedKeys;
    FUN_1001a7b90(&local_48);
    cVar6 = FUN_1001a90d0(lVar1,&local_48,local_b0);
    FUN_1001ab240(&local_48);
    if (cVar6 != '\0') {
      FUN_1001a7ad8(param_1 + 0x1f6,local_b0);
      uVar10 = *(ulong *)(param_1 + 0x1be);
      if (-1 < (char)uVar10) {
        uVar9 = FUN_1001cc310();
        cVar6 = _os_log_type_enabled(uVar9,0x10);
        if (cVar6 != '\0') {
          local_48 = 0x8220202;
          uStack_44 = 0x7a0a90;
          uStack_40 = 1;
          local_3c = 0x822;
          local_3a = 
          "(outChangeDataVar->mValidFields & kAMPLPlaylistChangeDataValidField_Var_RemovedDataDictKeys) != kAMPLPlaylistChangeDataValidFields_Var_None"
          ;
          __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
        uVar10 = *(ulong *)(param_1 + 0x1be);
      }
      *(ulong *)(param_1 + 0x1be) = uVar10 | 0x80;
    }
    local_a0 = &cf_coverRecipe;
    FUN_1001a7b90(local_c0);
    FUN_1001b7a44(local_d0);
    FUN_1001b7a44(&local_48);
    cVar6 = FUN_1001a944e(lVar1,local_c0,&local_48);
    ppcVar11 = local_d0;
    if (cVar6 != '\0') {
      ppcVar11 = (cfstringStruct **)&local_48;
    }
    FUN_1001b7a5c(local_58,ppcVar11);
    FUN_1001b7a50(&local_48);
    FUN_1001b80b2(local_68,local_58);
    FUN_1001b7a50(local_58);
    FUN_1001b7a50(local_d0);
    FUN_1001ab240(local_c0);
    cVar6 = FUN_1001b8428(local_68);
    if (cVar6 == '\0') {
      FUN_1001b8172(param_1 + 0x236,local_68);
      uVar10 = *(ulong *)(param_1 + 0x1be);
      if (((uint)uVar10 >> 8 & 1) == 0) {
        uVar9 = FUN_1001cc310();
        cVar6 = _os_log_type_enabled(uVar9,0x10);
        if (cVar6 != '\0') {
          local_48 = 0x8220202;
          uStack_44 = 0x7a0a90;
          uStack_40 = 1;
          local_3c = 0x822;
          local_3a = 
          "(outChangeDataVar->mValidFields & kAMPLPlaylistChangeDataValidField_Var_CoverRecipe) != kAMPLPlaylistChangeDataValidFields_Var_None"
          ;
          __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
        uVar10 = *(ulong *)(param_1 + 0x1be);
      }
      *(ulong *)(param_1 + 0x1be) = uVar10 | 0x100;
    }
    FUN_1001a7b90(&local_a0);
    FUN_1001b7a44(local_c0);
    FUN_1001b7a44(&local_48);
    cVar6 = FUN_1001a944e(lVar1,&local_a0,&local_48);
    ppcVar11 = local_c0;
    if (cVar6 != '\0') {
      ppcVar11 = (cfstringStruct **)&local_48;
    }
    FUN_1001b7a5c(local_58,ppcVar11);
    FUN_1001b7a50(&local_48);
    FUN_1001b80b2(local_68,local_58);
    FUN_1001b7a50(local_58);
    FUN_1001b7a50(local_c0);
    FUN_1001ab240(&local_a0);
    cVar6 = FUN_1001b8428(local_68);
    if (cVar6 == '\0') {
      FUN_1001b8172(param_1 + 0x256,local_68);
      uVar10 = *(ulong *)(param_1 + 0x1be);
      if (((uint)uVar10 >> 9 & 1) == 0) {
        uVar9 = FUN_1001cc310();
        cVar6 = _os_log_type_enabled(uVar9,0x10);
        if (cVar6 != '\0') {
          local_48 = 0x8220202;
          uStack_44 = 0x7a0a90;
          uStack_40 = 1;
          local_3c = 0x822;
          local_3a = 
          "(outChangeDataVar->mValidFields & kAMPLPlaylistChangeDataValidField_Var_InviteURL) != kAMPLPlaylistChangeDataValidFields_Var_None"
          ;
          __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
        uVar10 = *(ulong *)(param_1 + 0x1be);
      }
      *(ulong *)(param_1 + 0x1be) = uVar10 | 0x200;
    }
    local_58[0] = &cf_collaborators;
    FUN_1001a7b90(&local_48);
    cVar6 = FUN_10026326c(lVar1,&local_48,local_98);
    FUN_1001ab240(&local_48);
    if (cVar6 != '\0') {
      FUN_1001a7ad8(param_1 + 0x266,local_98);
      uVar10 = *(ulong *)(param_1 + 0x1be);
      if (((uint)uVar10 >> 10 & 1) == 0) {
        uVar9 = FUN_1001cc310();
        cVar6 = _os_log_type_enabled(uVar9,0x10);
        if (cVar6 != '\0') {
          local_48 = 0x8220202;
          uStack_44 = 0x7a0a90;
          uStack_40 = 1;
          local_3c = 0x822;
          local_3a = 
          "(outChangeDataVar->mValidFields & kAMPLPlaylistChangeDataValidField_Var_Collaborators) != kAMPLPlaylistChangeDataValidFields_Var_None"
          ;
          __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
        uVar10 = *(ulong *)(param_1 + 0x1be);
      }
      *(ulong *)(param_1 + 0x1be) = uVar10 | 0x400;
    }
    local_58[0] = &cf_pendingCollaborators;
    FUN_1001a7b90(&local_48);
    cVar6 = FUN_100329434(lVar1,&local_48,local_140);
    FUN_1001ab240(&local_48);
    if (cVar6 != '\0') {
      FUN_1001a7ad8(param_1 + 0x276,local_140);
      uVar10 = *(ulong *)(param_1 + 0x1be);
      if (((uint)uVar10 >> 0xb & 1) == 0) {
        uVar9 = FUN_1001cc310();
        cVar6 = _os_log_type_enabled(uVar9,0x10);
        if (cVar6 != '\0') {
          local_48 = 0x8220202;
          uStack_44 = 0x7a0a90;
          uStack_40 = 1;
          local_3c = 0x822;
          local_3a = 
          "(outChangeDataVar->mValidFields & kAMPLPlaylistChangeDataValidField_Var_PendingCollaborators) != kAMPLPlaylistChangeDataValidFields_Var_None"
          ;
          __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
        uVar10 = *(ulong *)(param_1 + 0x1be);
      }
      *(ulong *)(param_1 + 0x1be) = uVar10 | 0x800;
    }
    local_58[0] = &cf_reactions;
    FUN_1001a7b90(&local_48);
    cVar6 = FUN_10026326c(lVar1,&local_48,local_98);
    FUN_1001ab240(&local_48);
    if (cVar6 != '\0') {
      FUN_1001a7ad8(param_1 + 0x286,local_98);
      uVar10 = *(ulong *)(param_1 + 0x1be);
      if (((uint)uVar10 >> 0xc & 1) == 0) {
        uVar9 = FUN_1001cc310();
        cVar6 = _os_log_type_enabled(uVar9,0x10);
        if (cVar6 != '\0') {
          local_48 = 0x8220202;
          uStack_44 = 0x7a0a90;
          uStack_40 = 1;
          local_3c = 0x822;
          local_3a = 
          "(outChangeDataVar->mValidFields & kAMPLPlaylistChangeDataValidField_Var_SocialReactions) != kAMPLPlaylistChangeDataValidFields_Var_None"
          ;
          __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
        uVar10 = *(ulong *)(param_1 + 0x1be);
      }
      *(ulong *)(param_1 + 0x1be) = uVar10 | 0x1000;
    }
    local_58[0] = &cf_collaborativeItemData;
    FUN_1001a7b90(&local_48);
    cVar6 = FUN_10026326c(lVar1,&local_48,local_98);
    FUN_1001ab240(&local_48);
    if (cVar6 != '\0') {
      FUN_1001a7ad8(param_1 + 0x296,local_98);
      uVar10 = *(ulong *)(param_1 + 0x1be);
      if (((uint)uVar10 >> 0xd & 1) == 0) {
        uVar9 = FUN_1001cc310();
        cVar6 = _os_log_type_enabled(uVar9,0x10);
        if (cVar6 != '\0') {
          local_48 = 0x8220202;
          uStack_44 = 0x7a0a90;
          uStack_40 = 1;
          local_3c = 0x822;
          local_3a = 
          "(outChangeDataVar->mValidFields & kAMPLPlaylistChangeDataValidField_Var_CollaborativeItemData) != kAMPLPlaylistChangeDataValidFields_Var_None"
          ;
          __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
        uVar10 = *(ulong *)(param_1 + 0x1be);
      }
      *(ulong *)(param_1 + 0x1be) = uVar10 | 0x2000;
    }
    local_58[0] = &cf_collaborativePlaylistEdits;
    FUN_1001a7b90(&local_48);
    cVar6 = FUN_10026326c(lVar1,&local_48,local_98);
    FUN_1001ab240(&local_48);
    if (cVar6 != '\0') {
      FUN_1001a7ad8(param_1 + 0x2a6,local_98);
      uVar10 = *(ulong *)(param_1 + 0x1be);
      if (((uint)uVar10 >> 0xe & 1) == 0) {
        uVar9 = FUN_1001cc310();
        cVar6 = _os_log_type_enabled(uVar9,0x10);
        if (cVar6 != '\0') {
          local_48 = 0x8220202;
          uStack_44 = 0x7a0a90;
          uStack_40 = 1;
          local_3c = 0x822;
          local_3a = 
          "(outChangeDataVar->mValidFields & kAMPLPlaylistChangeDataValidField_Var_CollaborativeEdits) != kAMPLPlaylistChangeDataValidFields_Var_None"
          ;
          __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
        uVar10 = *(ulong *)(param_1 + 0x1be);
      }
      *(ulong *)(param_1 + 0x1be) = uVar10 | 0x4000;
    }
    FUN_1001a7a94(local_140);
    FUN_1001a7a94(local_98);
    FUN_1001a7a94(local_b0);
    FUN_1001a8fac(local_78);
    FUN_1001a85d4(local_88);
    FUN_1001b7a50(local_68);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

