// rea decompile_all
// name: _unzOpen
// address: 0x171c20
// body: available
// range: 0x171c20-0x172479 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void * _unzOpen(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  void *pvVar11;
  ulong uVar12;
  code *pcVar13;
  code *pcVar14;
  code **ppcVar15;
  ulong uVar16;
  int iVar17;
  ulong uVar18;
  bool bVar19;
  undefined1 local_1f8 [8];
  undefined1 local_1f0 [8];
  code *local_1e8;
  code *local_1e0;
  code *local_1d8;
  code *local_1d0;
  code *local_1c8;
  code *local_1c0;
  code *local_1b8;
  undefined8 local_1b0;
  code *local_1a0;
  code *pcStack_198;
  undefined4 local_190;
  ulong local_188;
  long local_180 [6];
  ulong local_150;
  long local_148;
  long local_140;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  long local_98;
  long local_90;
  code *local_88;
  ulong local_80;
  ulong local_78;
  code *local_70;
  long local_68;
  code *local_60;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  long local_38;
  
  local_1a0 = (code *)0x0;
  pcStack_198 = (code *)0x0;
  local_1e8 = _fopen64_file_func;
  local_1e0 = _fread_file_func;
  local_1d8 = _fwrite_file_func;
  local_1d0 = _ftell64_file_func;
  local_1c8 = _fseek64_file_func;
  local_1c0 = _fclose_file_func;
  local_1b8 = _ferror_file_func;
  local_1b0 = 0;
  local_190 = 0;
  uVar8 = _fopen64_file_func(0,param_1,5);
  if (uVar8 != 0) {
    local_188 = uVar8;
    lVar9 = _fseek64_file_func(0,uVar8,0,2);
    if (lVar9 == 0) {
      uVar10 = _ftell64_file_func(0,uVar8);
      local_50 = 0xffff;
      if (uVar10 < 0xffff) {
        local_50 = uVar10;
      }
      pvVar11 = _malloc(0x404);
      if (pvVar11 != (void *)0x0) {
        local_48 = uVar8;
        if (4 < uVar10) {
          uVar8 = 4;
          do {
            uVar16 = uVar8 + 0x400;
            uVar8 = local_50;
            if (uVar16 < local_50) {
              uVar8 = uVar16;
            }
            local_40 = uVar10 - uVar8;
            uVar18 = 0x404;
            if (uVar8 < 0x404) {
              uVar18 = uVar8;
            }
            lVar9 = _fseek64_file_func(0,local_48,local_40,0);
            if ((lVar9 != 0) ||
               (uVar12 = _fread_file_func(0,local_48,pvVar11,uVar18), uVar12 != uVar18)) break;
            uVar12 = (ulong)((int)uVar18 - 4);
            iVar4 = (int)uVar18 + -3;
            do {
              if ((((*(char *)((long)pvVar11 + uVar12) == 'P') &&
                   (*(char *)((long)pvVar11 + uVar12 + 1) == 'K')) &&
                  (*(char *)((long)pvVar11 + uVar12 + 2) == '\x06')) &&
                 (*(char *)((long)pvVar11 + uVar12 + 3) == '\a')) {
                lVar9 = uVar12 + local_40;
                if (lVar9 != 0) {
                  _free(pvVar11);
                  uVar8 = local_48;
                  lVar9 = _fseek64_file_func(0,local_48,lVar9,0);
                  if ((((lVar9 != 0) ||
                       (iVar4 = _unz64local_getLong(&local_1e8,uVar8,&local_38), iVar4 != 0)) ||
                      ((iVar4 = _unz64local_getLong(&local_1e8,uVar8,&local_38), iVar4 != 0 ||
                       ((local_38 != 0 ||
                        (iVar4 = _unz64local_getLong64(&local_1e8,uVar8,&local_58), iVar4 != 0))))))
                     || ((iVar4 = _unz64local_getLong(&local_1e8,uVar8,&local_38), uVar10 = local_48
                         , uVar8 = local_58, iVar4 != 0 || (local_38 != 1)))) goto LAB_0017208e;
                  pcVar13 = local_1c8;
                  if (local_1c8 == (code *)0x0) {
                    pcVar13 = pcStack_198;
                  }
                  lVar9 = (*pcVar13)(local_1b0,local_48,local_58,0);
                  if ((((lVar9 != 0) ||
                       (iVar4 = _unz64local_getLong(&local_1e8,uVar10,&local_38), uVar10 = local_188
                       , iVar4 != 0)) || (local_38 != 0x6064b50)) || (uVar8 == 0))
                  goto LAB_0017208e;
                  local_9c = 1;
                  pcVar13 = local_1c8;
                  if (local_1c8 == (code *)0x0) {
                    pcVar13 = pcStack_198;
                  }
                  lVar9 = (*pcVar13)(local_1b0,local_188,uVar8,0);
                  local_50 = CONCAT71(local_50._1_7_,lVar9 != 0);
                  uVar1 = _unz64local_getLong(&local_1e8,uVar10,&local_38);
                  uVar2 = _unz64local_getLong64(&local_1e8,local_188,local_1f0);
                  local_48 = CONCAT44(local_48._4_4_,uVar2 | uVar1);
                  uVar3 = _unz64local_getShort(&local_1e8,local_188,local_1f8);
                  local_40 = CONCAT44(local_40._4_4_,uVar3);
                  iVar4 = _unz64local_getShort(&local_1e8,local_188,local_1f8);
                  iVar17 = _unz64local_getLong(&local_1e8,local_188,&local_58);
                  iVar5 = _unz64local_getLong(&local_1e8,local_188,&local_68);
                  iVar6 = _unz64local_getLong64(&local_1e8,local_188,local_180);
                  iVar7 = _unz64local_getLong64(&local_1e8,local_188,&local_98);
                  uVar1 = 0xffffff99;
                  if ((local_98 == local_180[0] && local_68 == 0) && local_58 == 0) {
                    uVar1 = -(uint)((((iVar4 != 0 || (int)local_40 != 0) ||
                                     ((iVar7 != 0 || iVar6 != 0) || (iVar5 != 0 || iVar17 != 0))) ||
                                    (uint)local_48 != 0) | (byte)local_50);
                  }
                  iVar4 = _unz64local_getLong64(&local_1e8,local_188,&local_148);
                  iVar17 = _unz64local_getLong64(&local_1e8,local_188);
                  uVar2 = 0xffffffff;
                  if (iVar17 == 0 && iVar4 == 0) {
                    uVar2 = uVar1;
                  }
                  local_180[1] = 0;
                  goto LAB_0017239c;
                }
                break;
              }
              uVar12 = uVar12 - 1;
              iVar17 = iVar4 + -1;
              bVar19 = 0 < iVar4;
              iVar4 = iVar17;
            } while (iVar17 != 0 && bVar19);
          } while (uVar16 < local_50);
        }
        _free(pvVar11);
      }
    }
LAB_0017208e:
    uVar16 = local_188;
    uVar10 = local_1b0;
    pcVar13 = local_1c8;
    pcVar14 = local_1c8;
    if (local_1c8 == (code *)0x0) {
      pcVar14 = pcStack_198;
    }
    uVar8 = 0;
    lVar9 = (*pcVar14)(local_1b0,local_188,0,2);
    uVar3 = 0xffffffff;
    local_50 = uVar10;
    if (lVar9 == 0) {
      ppcVar15 = &local_1d0;
      if (pcVar13 == (code *)0x0) {
        ppcVar15 = &local_1a0;
      }
      local_40 = uVar16;
      uVar8 = (**ppcVar15)(uVar10,uVar16);
      local_78 = 0xffff;
      if (uVar8 < 0xffff) {
        local_78 = uVar8;
      }
      pvVar11 = _malloc(0x404);
      uVar16 = local_40;
      if (pvVar11 == (void *)0x0) {
        uVar8 = 0;
        uVar3 = 0xffffffff;
      }
      else {
        if (uVar8 < 5) {
          uVar3 = 0xffffffff;
          uVar8 = 0;
        }
        else {
          local_70 = pcVar13;
          if (pcVar13 == (code *)0x0) {
            local_70 = pcStack_198;
          }
          local_88 = local_1e0;
          uVar18 = 4;
          local_60 = pcVar13;
          local_80 = uVar8;
          do {
            uVar16 = local_40;
            local_48 = uVar18 + 0x400;
            uVar18 = local_78;
            if (local_48 < local_78) {
              uVar18 = local_48;
            }
            local_90 = local_80 - uVar18;
            uVar12 = 0x404;
            if (uVar18 < 0x404) {
              uVar12 = uVar18;
            }
            lVar9 = (*local_70)(uVar10,local_40,local_90,0);
            if ((lVar9 != 0) ||
               (uVar8 = (*local_88)(uVar10,uVar16,pvVar11,uVar12), uVar16 = local_40,
               uVar8 != uVar12)) {
              uVar8 = 0;
              uVar3 = 0xffffffff;
              pcVar13 = local_60;
              goto LAB_00172257;
            }
            uVar8 = (ulong)((int)uVar12 - 4);
            iVar4 = (int)uVar12 + -3;
            do {
              pcVar13 = local_60;
              if (((*(char *)((long)pvVar11 + uVar8) == 'P') &&
                  (*(char *)((long)pvVar11 + uVar8 + 1) == 'K')) &&
                 ((*(char *)((long)pvVar11 + uVar8 + 2) == '\x05' &&
                  (*(char *)((long)pvVar11 + uVar8 + 3) == '\x06')))) {
                uVar8 = uVar8 + local_90;
                if (uVar8 != 0) {
                  uVar3 = 0;
                  goto LAB_00172257;
                }
                break;
              }
              uVar8 = uVar8 - 1;
              iVar17 = iVar4 + -1;
              bVar19 = 0 < iVar4;
              iVar4 = iVar17;
            } while (iVar17 != 0 && bVar19);
            uVar10 = local_50;
          } while (local_48 < local_78);
          uVar8 = 0;
          uVar3 = 0xffffffff;
        }
LAB_00172257:
        _free(pvVar11);
      }
    }
    local_48 = CONCAT44(local_48._4_4_,uVar3);
    local_9c = 0;
    if (pcVar13 == (code *)0x0) {
      pcVar13 = pcStack_198;
    }
    local_50 = (*pcVar13)(local_50,uVar16,uVar8,0);
    iVar4 = _unz64local_getLong(&local_1e8,uVar16,&local_38);
    iVar17 = _unz64local_getShort(&local_1e8,local_188,&local_58);
    iVar5 = _unz64local_getShort(&local_1e8,local_188,&local_68);
    iVar6 = _unz64local_getShort(&local_1e8,local_188,&local_38);
    local_180[0] = local_38;
    iVar7 = _unz64local_getShort(&local_1e8,local_188);
    bVar19 = local_50 != 0;
    local_50 = -local_50;
    uVar1 = -(uint)bVar19 | (uint)local_48;
    if ((iVar7 != 0 || iVar6 != 0) || (iVar5 != 0 || (iVar17 != 0 || iVar4 != 0))) {
      uVar1 = 0xffffffff;
    }
    uVar2 = 0xffffff99;
    if ((local_38 == local_180[0] && local_68 == 0) && local_58 == 0) {
      uVar2 = uVar1;
    }
    iVar4 = _unz64local_getLong(&local_1e8,local_188);
    local_148 = local_38;
    iVar17 = _unz64local_getLong(&local_1e8,local_188,&local_38);
    local_140 = local_38;
    iVar5 = _unz64local_getShort(&local_1e8,local_188,local_180 + 1);
    if (iVar5 != 0 || (iVar17 != 0 || iVar4 != 0)) {
      uVar2 = 0xffffffff;
    }
LAB_0017239c:
    local_180[2] = uVar8 - (local_148 + local_140);
    if ((uVar8 < (ulong)(local_148 + local_140)) || (uVar2 != 0)) {
      (*local_1c0)(local_1b0,local_188);
    }
    else {
      local_a8 = 0;
      local_a0 = 0;
      local_150 = uVar8;
      pvVar11 = _malloc(0x150);
      if (pvVar11 != (void *)0x0) {
        _memcpy(pvVar11,&local_1e8,0x150);
        *(undefined8 *)((long)pvVar11 + 0x88) = *(undefined8 *)((long)pvVar11 + 0xa8);
        *(undefined8 *)((long)pvVar11 + 0x80) = 0;
        iVar4 = _unz64local_GetCurrentFileInfoInternal
                          (pvVar11,(long)pvVar11 + 0xb0,(long)pvVar11 + 0x138,0,0);
        *(ulong *)((long)pvVar11 + 0x90) = (ulong)(iVar4 == 0);
        return pvVar11;
      }
    }
  }
  return (void *)0x0;
}

