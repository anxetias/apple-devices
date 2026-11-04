// name: FUN_1005e15ac
// address: 1005e15ac

void FUN_1005e15ac(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  uint *puVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  uint local_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  long local_68;
  long local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_68 = 0;
  local_60 = 0;
  local_70 = param_3;
  FUN_1001c62d9(&local_90,0x20);
  iVar4 = FUN_1005da92d(param_1,param_2,&uStack_88,&local_80);
  if (iVar4 == -0x80) goto LAB_1005e1937;
  if (iVar4 == 0) {
    uStack_78 = param_5;
    uStack_74 = param_4;
    iVar4 = FUN_1005e1b1f(param_1,param_2,&local_68);
    uVar10 = local_70;
    if (iVar4 == -0x80) goto LAB_1005e1937;
    if (iVar4 == 0) {
      if (local_68 == 0) {
        uVar10 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar10,0x10);
        if (cVar3 != '\0') {
          local_4a = "sampleDesc != nullptr";
LAB_1005e1a54:
          local_4c = 0x822;
          local_54 = "Assertion failure";
          local_58 = 0x8220202;
          __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
      }
      else {
        uVar2 = *(uint *)(local_68 + 4);
        uStack_7c = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
        FUN_10017610a(local_70,0,0x736d7044,0,8,&local_60);
        if (local_60 == 0) {
          lVar8 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                                PTR__kCFTypeDictionaryValueCallBacks_10082e140);
          if (lVar8 == 0) {
            uVar10 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar10,0x10);
            if (cVar3 != '\0') {
              local_4a = "sampleInfoDict != nullptr";
LAB_1005e1af0:
              local_4c = 0x822;
              local_54 = "Assertion failure";
              local_58 = 0x8220202;
              __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_58,0x16)
              ;
            }
          }
          else {
            lVar6 = FUN_100170ea9(DAT_1008c4d90,0);
            if (lVar6 != 0) {
              FUN_10017103d(lVar6,0x2a8);
              puVar9 = (undefined4 *)FUN_100170f3b(lVar6);
              *puVar9 = 0x14;
              FUN_1001714de(lVar8,&cf_table,lVar6);
              FUN_10017060f(lVar6);
              local_60 = lVar8;
              FUN_100175c68(uVar10,0,0x736d7044,0,8,lVar8);
              goto LAB_1005e1689;
            }
            uVar10 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar10,0x10);
            if (cVar3 != '\0') {
              local_4a = "sampleInfoTableData != nullptr";
              goto LAB_1005e1af0;
            }
          }
          FUN_1001782e9(0,0);
          FUN_10017060f(lVar8);
          local_60 = 0;
          uVar10 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar10,0x10);
          if (cVar3 == '\0') goto LAB_1005e1937;
          local_4a = (char *)CONCAT44(local_4a._4_4_,0xffffff94);
          goto LAB_1005e1777;
        }
LAB_1005e1689:
        lVar8 = local_60;
        puVar5 = (uint *)FUN_1005e203d(local_60);
        if (puVar5 != (uint *)0x0) {
          uVar2 = puVar5[1];
          if (*puVar5 <= uVar2) {
            lVar6 = FUN_10016696d(lVar8,&cf_table);
            if (lVar6 == 0) {
              uVar10 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar10,0x10);
              if (cVar3 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x822;
                local_4a = "sampleInfoTableData != nullptr";
                __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_58,
                                    0x16);
              }
              FUN_1001782e9(0,0);
            }
            else {
              FUN_10017107f(lVar6,0x280);
              piVar7 = (int *)FUN_1005e203d(lVar8);
              *piVar7 = *piVar7 + 0x14;
            }
            puVar5 = (uint *)FUN_1005e203d(lVar8);
            if (puVar5 == (uint *)0x0) goto LAB_1005e1911;
            uVar2 = puVar5[1];
            if (*puVar5 <= uVar2) {
              uVar10 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar10,0x10);
              if (cVar3 != '\0') {
                local_4a = "table->maxEntries > table->numEntries";
                goto LAB_1005e1a54;
              }
              goto LAB_1005e192e;
            }
          }
          *(ulong *)(puVar5 + (ulong)uVar2 * 8 + 6) = CONCAT44(uStack_7c,local_80);
          *(ulong *)(puVar5 + (ulong)uVar2 * 8 + 6 + 2) = CONCAT44(uStack_74,uStack_78);
          puVar1 = puVar5 + (ulong)uVar2 * 8 + 2;
          *puVar1 = local_90;
          puVar1[1] = uStack_8c;
          puVar1[2] = uStack_88;
          puVar1[3] = uStack_84;
          puVar5[1] = uVar2 + 1;
          goto LAB_1005e1937;
        }
LAB_1005e1911:
        uVar10 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar10,0x10);
        if (cVar3 != '\0') {
          local_4a = "table != nullptr";
          goto LAB_1005e1a54;
        }
      }
LAB_1005e192e:
      FUN_1001782e9(0,0);
      goto LAB_1005e1937;
    }
    uVar10 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar10,0x10);
    if (cVar3 == '\0') goto LAB_1005e1937;
    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
  }
  else {
    uVar10 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar10,0x10);
    if (cVar3 == '\0') goto LAB_1005e1937;
    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
  }
LAB_1005e1777:
  local_4c = 0x400;
  local_54 = "Assertion failure";
  local_58 = 0x8220202;
  __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_58,0x12);
LAB_1005e1937:
  FUN_10017060f(local_60);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

