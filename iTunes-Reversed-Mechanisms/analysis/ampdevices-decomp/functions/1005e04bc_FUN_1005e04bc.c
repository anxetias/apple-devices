// name: FUN_1005e04bc
// address: 1005e04bc

int FUN_1005e04bc(long param_1,undefined8 *param_2)

{
  uint uVar1;
  uint *puVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  long local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (undefined8 *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "cache != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    iVar4 = -0x32;
    goto LAB_1005e0dcd;
  }
  FUN_1001c62d9(param_2,0x48);
  *param_2 = *(undefined8 *)(param_1 + 0x20);
  iVar4 = FUN_10015d28d(param_1,0x73747364,&local_60);
  if (iVar4 == -0x80) goto LAB_1005e0dcd;
  if (iVar4 != 0) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 == '\0') goto LAB_1005e05f5;
    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
    goto LAB_1005e076f;
  }
  if (local_60 == 0) {
LAB_1005e0da5:
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 == '\0') goto LAB_1005e0dbe;
    local_4a = "element != nullptr";
LAB_1005e0e17:
    local_4c = 0x822;
    local_54 = "Assertion failure";
    local_58 = 0x8220202;
    __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
LAB_1005e0dbe:
    FUN_1001782e9(0,0);
  }
  else {
    puVar2 = *(uint **)(local_60 + 0x20);
    param_2[1] = puVar2;
    uVar7 = *puVar2;
    uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
    if (uVar7 < 0x10) {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_4a = "atomSize >= __builtin_offsetof(SampleDescriptionAtom, sampleDescTable)";
        goto LAB_1005e0e17;
      }
      goto LAB_1005e0dbe;
    }
    uVar1 = puVar2[3];
    if ((long)(int)uVar7 - 0x10U <
        (ulong)((long)(int)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                           uVar1 << 0x18) * 0x10)) {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_4a = 
        "(numEntriesFromAtom * sizeof(SampleDescription)) <= (atomSize - __builtin_offsetof(SampleDescriptionAtom, sampleDescTable))"
        ;
        goto LAB_1005e0e17;
      }
      goto LAB_1005e0dbe;
    }
    iVar4 = FUN_10015d28d(param_1,0x73747473,&local_60);
    if (iVar4 == -0x80) goto LAB_1005e0dcd;
    if (iVar4 != 0) {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
        goto LAB_1005e076f;
      }
      goto LAB_1005e05f5;
    }
    if (local_60 == 0) goto LAB_1005e0da5;
    puVar2 = *(uint **)(local_60 + 0x20);
    param_2[2] = puVar2;
    uVar7 = *puVar2;
    uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
    if (uVar7 < 0x10) {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_4a = "atomSize >= __builtin_offsetof(TimeToSampleNumAtom, timeToSampleNumTable)";
        goto LAB_1005e0e17;
      }
      goto LAB_1005e0dbe;
    }
    uVar1 = puVar2[3];
    if ((long)(int)uVar7 - 0x10U <
        (ulong)((long)(int)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                           uVar1 << 0x18) * 8)) {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_4a = 
        "(numEntriesFromAtom * sizeof(TimeToSampleNum)) <= (atomSize - __builtin_offsetof(TimeToSampleNumAtom, timeToSampleNumTable))"
        ;
        goto LAB_1005e0e17;
      }
      goto LAB_1005e0dbe;
    }
    iVar4 = FUN_10015d28d(param_1,0x73747363,&local_60);
    if (iVar4 == -0x80) goto LAB_1005e0dcd;
    if (iVar4 != 0) {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
        goto LAB_1005e076f;
      }
      goto LAB_1005e05f5;
    }
    if (local_60 == 0) goto LAB_1005e0da5;
    puVar2 = *(uint **)(local_60 + 0x20);
    param_2[3] = puVar2;
    uVar7 = *puVar2;
    uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
    if (uVar7 < 0x10) {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_4a = "atomSize >= __builtin_offsetof(SampleToChunkAtom, sampleToChunkTable)";
        goto LAB_1005e0e17;
      }
      goto LAB_1005e0dbe;
    }
    uVar1 = puVar2[3];
    if ((long)(int)uVar7 - 0x10U <
        (ulong)((long)(int)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                           uVar1 << 0x18) * 0xc)) {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_4a = 
        "(numEntriesFromAtom * sizeof(SampleToChunk)) <= (atomSize - __builtin_offsetof(SampleToChunkAtom, sampleToChunkTable))"
        ;
        goto LAB_1005e0e17;
      }
      goto LAB_1005e0dbe;
    }
    iVar4 = FUN_10015d28d(param_1,0x7374737a,&local_60);
    if (local_60 == 0 || iVar4 != 0) {
      iVar4 = FUN_10015d28d(param_1,0x73747a32,&local_60);
      if (iVar4 == -0x80) goto LAB_1005e0dcd;
      if (iVar4 != 0) {
        uVar5 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar5,0x10);
        if (cVar3 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
        goto LAB_1005e0dcd;
      }
      if (local_60 == 0) goto LAB_1005e0da5;
      puVar2 = *(uint **)(local_60 + 0x20);
      param_2[4] = puVar2;
      uVar7 = *puVar2;
      uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
      if (0x13 < uVar7) {
        uVar1 = puVar2[3];
        uVar10 = puVar2[4];
        iVar8 = (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18) *
                (uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 << 0x18
                );
        iVar4 = iVar8 + 7;
        if (-1 < iVar8) {
          iVar4 = iVar8;
        }
        if ((ulong)(long)(iVar4 >> 3) <= (long)(int)uVar7 - 0x14U) goto LAB_1005e0a30;
        uVar5 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar5,0x10);
        if (cVar3 != '\0') {
          local_4a = 
          "((numEntriesFromAtom * sampleSize) / 8) <= (atomSize - __builtin_offsetof(SampleSizeAtom, sampleSizeTable))"
          ;
          goto LAB_1005e0e17;
        }
        goto LAB_1005e0dbe;
      }
LAB_1005e0b8d:
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_4a = "atomSize >= __builtin_offsetof(SampleSizeAtom, sampleSizeTable)";
        goto LAB_1005e0e17;
      }
      goto LAB_1005e0dbe;
    }
    puVar2 = *(uint **)(local_60 + 0x20);
    param_2[4] = puVar2;
    uVar1 = *puVar2;
    uVar7 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    if (uVar7 < 0x14) goto LAB_1005e0b8d;
    uVar7 = uVar7 - 0x14;
    uVar11 = uVar7 >> 2;
    uVar10 = puVar2[4];
    uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 << 0x18;
    if ((puVar2[3] == 0) == uVar7 < 4) {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = 
        "((numEntriesFromTableSize != 0) && (cache->sampleSizeAtom->sampleSize == 0)) || ((numEntriesFromTableSize == 0) && (cache->sampleSizeAtom->sampleSize != 0))"
        ;
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0);
    }
    if (((int)uVar11 < (int)uVar10) && (*(int *)(param_2[4] + 0xc) == 0)) {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = 
        "(numEntriesFromTableSize >= numEntriesFromAtom) || (cache->sampleSizeAtom->sampleSize != 0)"
        ;
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0);
    }
    if (uVar10 != uVar11) {
      if ((uVar1 >> 0x18 & 3) != 0 && uVar7 != 0) {
        uVar5 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar5,0x10);
        if (cVar3 != '\0') {
          local_4a = "(tableSizeInBytes == 0) || ((tableSizeInBytes & (sizeof(UInt32) - 1)) == 0)";
          goto LAB_1005e0e17;
        }
        goto LAB_1005e0dbe;
      }
      if (uVar7 == 0) {
        if (*(int *)(param_2[4] + 0xc) == 0) {
          uVar5 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar5,0x10);
          if (cVar3 != '\0') {
            local_4a = "cache->sampleSizeAtom->sampleSize != 0";
            goto LAB_1005e0e17;
          }
          goto LAB_1005e0dbe;
        }
      }
      else {
        if ((int)uVar11 < (int)uVar10) {
          lVar6 = param_2[4];
          *(uint *)(lVar6 + 0x10) =
               uVar7 >> 0x1a | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
          uVar10 = uVar11;
        }
        else {
          lVar6 = param_2[4];
        }
        if ((*(int *)(lVar6 + 0xc) != 0) && (0 < (int)uVar10)) {
          uVar9 = 0;
          do {
            if (*(int *)(lVar6 + 0xc) != *(int *)(lVar6 + 0x14 + uVar9 * 4)) {
              uVar5 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar5,0x10);
              if (cVar3 == '\0') goto LAB_1005e0dbe;
              local_4a = "sampleSizeFromAtom == sampleSizeFromTable";
              goto LAB_1005e0e17;
            }
            uVar9 = uVar9 + 1;
          } while (uVar10 != uVar9);
        }
      }
    }
LAB_1005e0a30:
    iVar4 = FUN_10015d28d(param_1,0x7374636f,&local_60);
    if (iVar4 == -0x80) goto LAB_1005e0dcd;
    if (iVar4 == 0) {
      if (local_60 != 0) {
        puVar2 = *(uint **)(local_60 + 0x20);
        param_2[5] = puVar2;
        uVar7 = *puVar2;
        uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
        if (uVar7 < 0x10) {
          uVar5 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar5,0x10);
          if (cVar3 != '\0') {
            local_4a = "atomSize >= __builtin_offsetof(ChunkOffsetAtom, chunkOffsetTable)";
            goto LAB_1005e0e17;
          }
        }
        else {
          uVar1 = puVar2[3];
          if ((ulong)((long)(int)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                                 uVar1 << 0x18) * 4) <= (long)(int)uVar7 - 0x10U) {
LAB_1005e0f09:
            iVar4 = FUN_10015d28d(param_1,0x73747373,&local_60);
            if (iVar4 == -0x80) goto LAB_1005e0dcd;
            if (iVar4 == 0) {
              iVar4 = FUN_10015d28d(param_1,0x73747368,&local_60);
              if ((iVar4 == -0x80) || (iVar4 == 0)) goto LAB_1005e0dcd;
              uVar5 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar5,0x10);
              if (cVar3 != '\0') {
                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
                goto LAB_1005e076f;
              }
            }
            else {
              uVar5 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar5,0x10);
              if (cVar3 != '\0') {
                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
LAB_1005e076f:
                local_4c = 0x400;
                local_54 = "Assertion failure";
                local_58 = 0x8220202;
                __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12)
                ;
              }
            }
            goto LAB_1005e05f5;
          }
          uVar5 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar5,0x10);
          if (cVar3 != '\0') {
            local_4a = 
            "(numEntriesFromAtom * sizeof(UInt32)) <= (atomSize - __builtin_offsetof(ChunkOffsetAtom, chunkOffsetTable))"
            ;
            goto LAB_1005e0e17;
          }
        }
        goto LAB_1005e0dbe;
      }
      iVar4 = FUN_10015d28d(param_1,0x636f3634,&local_60);
      if (iVar4 == -0x80) goto LAB_1005e0dcd;
      if (iVar4 == 0) {
        if (local_60 == 0) goto LAB_1005e0da5;
        puVar2 = *(uint **)(local_60 + 0x20);
        param_2[6] = puVar2;
        uVar7 = *puVar2;
        uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
        if (uVar7 < 0x10) {
          uVar5 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar5,0x10);
          if (cVar3 != '\0') {
            local_4a = "atomSize >= __builtin_offsetof(ChunkOffset64Atom, chunkOffsetTable)";
            goto LAB_1005e0e17;
          }
        }
        else {
          uVar1 = puVar2[3];
          if ((ulong)((long)(int)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                                 uVar1 << 0x18) * 8) <= (long)(int)uVar7 - 0x10U)
          goto LAB_1005e0f09;
          uVar5 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar5,0x10);
          if (cVar3 != '\0') {
            local_4a = 
            "(numEntriesFromAtom * sizeof(SInt64)) <= (atomSize - __builtin_offsetof(ChunkOffset64Atom, chunkOffsetTable))"
            ;
            goto LAB_1005e0e17;
          }
        }
        goto LAB_1005e0dbe;
      }
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
        goto LAB_1005e076f;
      }
    }
    else {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
        goto LAB_1005e076f;
      }
    }
LAB_1005e05f5:
    if (iVar4 != 0) goto LAB_1005e0dcd;
  }
  iVar4 = -0xd0;
LAB_1005e0dcd:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

