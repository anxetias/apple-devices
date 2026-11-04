// name: FUN_100455838
// address: 100455838

void FUN_100455838(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  cfstringStruct **ppcVar11;
  cfstringStruct *local_b0 [2];
  cfstringStruct *local_a0 [2];
  cfstringStruct *local_90 [2];
  cfstringStruct *local_80 [2];
  cfstringStruct *local_70;
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
    uVar10 = FUN_1001cc310();
    cVar8 = _os_log_type_enabled(uVar10,0x10);
    if (cVar8 != '\0') {
      local_48 = 0x8220202;
      uStack_44 = 0x7a0a90;
      uStack_40 = 1;
      local_3c = 0x822;
      local_3a = "mDataDict != nullptr";
      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    *(undefined1 *)(param_1 + 0xa8) = 1;
    local_a0[0] = &cf_fixed;
    FUN_1001a7b90(local_b0);
    FUN_10032f0f2(local_58);
    FUN_10032f0f2(&local_48);
    lVar1 = param_1 + 0x18;
    cVar8 = FUN_1001a92ae(lVar1,local_b0,&local_48);
    ppcVar11 = local_58;
    if (cVar8 != '\0') {
      ppcVar11 = (cfstringStruct **)&local_48;
    }
    FUN_1001a7a9e(local_68,ppcVar11);
    FUN_1001a85d4(&local_48);
    FUN_1001a85d4(local_58);
    FUN_1001ab240(local_b0);
    if (local_68[0] != 0) {
      puVar9 = (undefined4 *)FUN_1001a8626(local_68);
      *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(puVar9 + 0xc);
      uVar2 = *puVar9;
      uVar3 = puVar9[1];
      uVar4 = puVar9[2];
      uVar5 = puVar9[3];
      uVar10 = *(undefined8 *)(puVar9 + 4);
      uVar6 = *(undefined8 *)(puVar9 + 6);
      uVar7 = *(undefined8 *)(puVar9 + 10);
      *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(puVar9 + 8);
      *(undefined8 *)(param_1 + 0x50) = uVar7;
      *(undefined8 *)(param_1 + 0x38) = uVar10;
      *(undefined8 *)(param_1 + 0x40) = uVar6;
      *(undefined4 *)(param_1 + 0x28) = uVar2;
      *(undefined4 *)(param_1 + 0x2c) = uVar3;
      *(undefined4 *)(param_1 + 0x30) = uVar4;
      *(undefined4 *)(param_1 + 0x34) = uVar5;
    }
    FUN_1001a85d4(local_68);
    FUN_1001b7a44(local_68);
    local_b0[0] = &cf_validFields;
    FUN_1001a7b90(local_58);
    cVar8 = FUN_1001a9810(lVar1,local_58,&local_48);
    if (cVar8 == '\0') {
      uVar10 = 0;
    }
    else {
      uVar10 = CONCAT44(uStack_44,local_48);
    }
    *(undefined8 *)(param_1 + 0x60) = uVar10;
    FUN_1001ab240(local_58);
    local_90[0] = &cf_name;
    FUN_1001a7b90(local_a0);
    FUN_1001b7a44(local_b0);
    FUN_1001b7a44(&local_48);
    cVar8 = FUN_1001a944e(lVar1,local_a0,&local_48);
    ppcVar11 = local_b0;
    if (cVar8 != '\0') {
      ppcVar11 = (cfstringStruct **)&local_48;
    }
    FUN_1001b7a5c(local_58,ppcVar11);
    FUN_1001b7a50(&local_48);
    FUN_1001b80b2(local_68,local_58);
    FUN_1001b7a50(local_58);
    FUN_1001b7a50(local_b0);
    FUN_1001ab240(local_a0);
    cVar8 = FUN_1001b8428(local_68);
    if (cVar8 == '\0') {
      FUN_1001b8172(param_1 + 0x68,local_68);
      *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) | 1;
    }
    local_80[0] = &cf_trackArtist;
    FUN_1001a7b90(local_90);
    FUN_1001b7a44(local_a0);
    FUN_1001b7a44(&local_48);
    cVar8 = FUN_1001a944e(lVar1,local_90,&local_48);
    ppcVar11 = local_a0;
    if (cVar8 != '\0') {
      ppcVar11 = (cfstringStruct **)&local_48;
    }
    FUN_1001b7a5c(local_58,ppcVar11);
    FUN_1001b7a50(&local_48);
    FUN_1001b80b2(local_68,local_58);
    FUN_1001b7a50(local_58);
    FUN_1001b7a50(local_a0);
    FUN_1001ab240(local_90);
    cVar8 = FUN_1001b8428(local_68);
    if (cVar8 == '\0') {
      FUN_1001b8172(param_1 + 0x78,local_68);
      *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) | 1;
    }
    local_70 = &cf_albumArtist;
    FUN_1001a7b90(local_80);
    FUN_1001b7a44(local_90);
    FUN_1001b7a44(&local_48);
    cVar8 = FUN_1001a944e(lVar1,local_80,&local_48);
    ppcVar11 = local_90;
    if (cVar8 != '\0') {
      ppcVar11 = (cfstringStruct **)&local_48;
    }
    FUN_1001b7a5c(local_58,ppcVar11);
    FUN_1001b7a50(&local_48);
    FUN_1001b80b2(local_68,local_58);
    FUN_1001b7a50(local_58);
    FUN_1001b7a50(local_90);
    FUN_1001ab240(local_80);
    cVar8 = FUN_1001b8428(local_68);
    if (cVar8 == '\0') {
      FUN_1001b8172(param_1 + 0x88,local_68);
      *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) | 1;
    }
    FUN_1001a7b90(&local_70);
    FUN_1001b7a44(local_80);
    FUN_1001b7a44(&local_48);
    cVar8 = FUN_1001a944e(lVar1,&local_70,&local_48);
    ppcVar11 = local_80;
    if (cVar8 != '\0') {
      ppcVar11 = (cfstringStruct **)&local_48;
    }
    FUN_1001b7a5c(local_58,ppcVar11);
    FUN_1001b7a50(&local_48);
    FUN_1001b80b2(local_68,local_58);
    FUN_1001b7a50(local_58);
    FUN_1001b7a50(local_80);
    FUN_1001ab240(&local_70);
    cVar8 = FUN_1001b8428(local_68);
    if (cVar8 == '\0') {
      FUN_1001b8172(param_1 + 0x98,local_68);
      *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) | 2;
    }
    FUN_1001b7a50(local_68);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

