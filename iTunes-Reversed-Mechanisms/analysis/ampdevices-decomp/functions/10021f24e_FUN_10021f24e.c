// name: FUN_10021f24e
// address: 10021f24e

void FUN_10021f24e(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  cfstringStruct **ppcVar9;
  cfstringStruct *local_d0 [2];
  cfstringStruct *local_c0 [2];
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
    uVar8 = FUN_1001cc310();
    cVar6 = _os_log_type_enabled(uVar8,0x10);
    if (cVar6 != '\0') {
      local_48 = 0x8220202;
      uStack_44 = 0x7a0a90;
      uStack_40 = 1;
      local_3c = 0x822;
      local_3a = "mDataDict != nullptr";
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    *(undefined1 *)(param_1 + 0xb0) = 1;
    local_c0[0] = &cf_fixed;
    FUN_1001a7b90(local_d0);
    FUN_10032f0f2(local_58);
    FUN_10032f0f2(&local_48);
    lVar1 = param_1 + 0x18;
    cVar6 = FUN_1001a92ae(lVar1,local_d0,&local_48);
    ppcVar9 = local_58;
    if (cVar6 != '\0') {
      ppcVar9 = (cfstringStruct **)&local_48;
    }
    FUN_1001a7a9e(local_68,ppcVar9);
    FUN_1001a85d4(&local_48);
    FUN_1001a85d4(local_58);
    FUN_1001ab240(local_d0);
    if (local_68[0] != 0) {
      puVar7 = (undefined4 *)FUN_1001a8626(local_68);
      uVar2 = *puVar7;
      uVar3 = puVar7[1];
      uVar4 = puVar7[2];
      uVar5 = puVar7[3];
      uVar8 = *(undefined8 *)((long)puVar7 + 0x16);
      *(undefined8 *)(param_1 + 0x36) = *(undefined8 *)((long)puVar7 + 0xe);
      *(undefined8 *)(param_1 + 0x3e) = uVar8;
      *(undefined4 *)(param_1 + 0x28) = uVar2;
      *(undefined4 *)(param_1 + 0x2c) = uVar3;
      *(undefined4 *)(param_1 + 0x30) = uVar4;
      *(undefined4 *)(param_1 + 0x34) = uVar5;
    }
    FUN_1001a85d4(local_68);
    FUN_1001b7a44(local_68);
    local_d0[0] = &cf_validFields;
    FUN_1001a7b90(local_58);
    cVar6 = FUN_1001a9810(lVar1,local_58,&local_48);
    if (cVar6 == '\0') {
      uVar8 = 0;
    }
    else {
      uVar8 = CONCAT44(uStack_44,local_48);
    }
    *(undefined8 *)(param_1 + 0x48) = uVar8;
    FUN_1001ab240(local_58);
    local_b0[0] = &cf_profileID;
    FUN_1001a7b90(local_c0);
    FUN_1001b7a44(local_d0);
    FUN_1001b7a44(&local_48);
    cVar6 = FUN_1001a944e(lVar1,local_c0,&local_48);
    ppcVar9 = local_d0;
    if (cVar6 != '\0') {
      ppcVar9 = (cfstringStruct **)&local_48;
    }
    FUN_1001b7a5c(local_58,ppcVar9);
    FUN_1001b7a50(&local_48);
    FUN_1001b80b2(local_68,local_58);
    FUN_1001b7a50(local_58);
    FUN_1001b7a50(local_d0);
    FUN_1001ab240(local_c0);
    cVar6 = FUN_1001b8428(local_68);
    if (cVar6 == '\0') {
      FUN_1001b8172(param_1 + 0x50,local_68);
      *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) | 1;
    }
    local_a0[0] = &cf_name;
    FUN_1001a7b90(local_b0);
    FUN_1001b7a44(local_c0);
    FUN_1001b7a44(&local_48);
    cVar6 = FUN_1001a944e(lVar1,local_b0,&local_48);
    ppcVar9 = local_c0;
    if (cVar6 != '\0') {
      ppcVar9 = (cfstringStruct **)&local_48;
    }
    FUN_1001b7a5c(local_58,ppcVar9);
    FUN_1001b7a50(&local_48);
    FUN_1001b80b2(local_68,local_58);
    FUN_1001b7a50(local_58);
    FUN_1001b7a50(local_c0);
    FUN_1001ab240(local_b0);
    cVar6 = FUN_1001b8428(local_68);
    if (cVar6 == '\0') {
      FUN_1001b8172(param_1 + 0x60,local_68);
      *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) | 2;
    }
    local_90[0] = &cf_userName;
    FUN_1001a7b90(local_a0);
    FUN_1001b7a44(local_b0);
    FUN_1001b7a44(&local_48);
    cVar6 = FUN_1001a944e(lVar1,local_a0,&local_48);
    ppcVar9 = local_b0;
    if (cVar6 != '\0') {
      ppcVar9 = (cfstringStruct **)&local_48;
    }
    FUN_1001b7a5c(local_58,ppcVar9);
    FUN_1001b7a50(&local_48);
    FUN_1001b80b2(local_68,local_58);
    FUN_1001b7a50(local_58);
    FUN_1001b7a50(local_b0);
    FUN_1001ab240(local_a0);
    cVar6 = FUN_1001b8428(local_68);
    if (cVar6 == '\0') {
      FUN_1001b8172(param_1 + 0x70,local_68);
      *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) | 4;
    }
    local_80[0] = &cf_pictureURL;
    FUN_1001a7b90(local_90);
    FUN_1001b7a44(local_a0);
    FUN_1001b7a44(&local_48);
    cVar6 = FUN_1001a944e(lVar1,local_90,&local_48);
    ppcVar9 = local_a0;
    if (cVar6 != '\0') {
      ppcVar9 = (cfstringStruct **)&local_48;
    }
    FUN_1001b7a5c(local_58,ppcVar9);
    FUN_1001b7a50(&local_48);
    FUN_1001b80b2(local_68,local_58);
    FUN_1001b7a50(local_58);
    FUN_1001b7a50(local_a0);
    FUN_1001ab240(local_90);
    cVar6 = FUN_1001b8428(local_68);
    if (cVar6 == '\0') {
      FUN_1001b8172(param_1 + 0x90,local_68);
      *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) | 0x10;
    }
    local_70 = &cf_pictureToken;
    FUN_1001a7b90(local_80);
    FUN_1001b7a44(local_90);
    FUN_1001b7a44(&local_48);
    cVar6 = FUN_1001a944e(lVar1,local_80,&local_48);
    ppcVar9 = local_90;
    if (cVar6 != '\0') {
      ppcVar9 = (cfstringStruct **)&local_48;
    }
    FUN_1001b7a5c(local_58,ppcVar9);
    FUN_1001b7a50(&local_48);
    FUN_1001b80b2(local_68,local_58);
    FUN_1001b7a50(local_58);
    FUN_1001b7a50(local_90);
    FUN_1001ab240(local_80);
    cVar6 = FUN_1001b8428(local_68);
    if (cVar6 == '\0') {
      FUN_1001b8172(param_1 + 0x80,local_68);
      *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) | 8;
    }
    FUN_1001a7b90(&local_70);
    FUN_1001b7a44(local_80);
    FUN_1001b7a44(&local_48);
    cVar6 = FUN_1001a944e(lVar1,&local_70,&local_48);
    ppcVar9 = local_80;
    if (cVar6 != '\0') {
      ppcVar9 = (cfstringStruct **)&local_48;
    }
    FUN_1001b7a5c(local_58,ppcVar9);
    FUN_1001b7a50(&local_48);
    FUN_1001b80b2(local_68,local_58);
    FUN_1001b7a50(local_58);
    FUN_1001b7a50(local_80);
    FUN_1001ab240(&local_70);
    cVar6 = FUN_1001b8428(local_68);
    if (cVar6 == '\0') {
      FUN_1001b8172(param_1 + 0xa0,local_68);
      *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) | 0x20;
    }
    FUN_1001b7a50(local_68);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

