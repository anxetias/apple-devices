// rea decompile_all
// name: __writeCombinedBootImage
// address: 0xfbf20
// body: available
// range: 0xfbf20-0xfc777 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xfc773 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __writeCombinedBootImage
              (ulong param_1,ulong param_2,long param_3,long param_4,size_t param_5,code *param_6,
              long param_7,byte param_8,undefined8 param_9)

{
  ulong uVar1;
  size_t sVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  FILE *pFVar7;
  char *pcVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  size_t sVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  cfstringStruct *pcVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  undefined8 local_918;
  undefined8 uStack_910;
  undefined8 local_908;
  undefined8 uStack_900;
  undefined8 local_8f8;
  undefined8 uStack_8f0;
  undefined8 local_8e8;
  undefined8 uStack_8e0;
  undefined8 local_8d8;
  undefined8 uStack_8d0;
  undefined8 local_8c8;
  undefined8 uStack_8c0;
  long local_8b8;
  undefined8 uStack_8b0;
  undefined8 local_8a8;
  undefined8 uStack_8a0;
  undefined8 local_898;
  undefined8 uStack_890;
  ulong local_888;
  long local_880;
  size_t local_878;
  ulong local_870;
  size_t local_868;
  long local_860;
  code *local_858;
  ulong local_850;
  FILE *local_848;
  ulong local_840;
  char local_838 [1024];
  undefined1 local_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_860 = param_3;
  local_850 = param_1;
  ___bzero(local_438,0x400);
  ___bzero(local_838,0x400);
  local_898 = 0;
  uStack_890 = 0;
  local_8a8 = 0;
  uStack_8a0 = 0;
  local_8b8 = 0;
  uStack_8b0 = 0;
  local_8c8 = 0;
  uStack_8c0 = 0;
  local_8d8 = 0;
  uStack_8d0 = 0;
  local_8e8 = 0;
  uStack_8e0 = 0;
  local_8f8 = 0;
  uStack_8f0 = 0;
  local_908 = 0;
  uStack_900 = 0;
  local_918 = 0;
  uStack_910 = 0;
  local_880 = param_4;
  local_878 = param_5;
  if ((param_7 == 0) ||
     (cVar4 = _CFStringGetCString(param_7,local_838,0x400,0x8000100), cVar4 == '\0')) {
    local_848 = (FILE *)0x0;
    uVar21 = 0;
  }
  else {
    _remove(local_838);
    pFVar7 = _fopen(local_838,"ab");
    if (pFVar7 == (FILE *)0x0) {
      piVar9 = ___error();
      iVar5 = __AMRestoreErrorForErrno(*piVar9,0xb);
      goto LAB_000fc5a2;
    }
    uVar21 = CONCAT71((int7)(param_5 >> 8),1);
    local_848 = pFVar7;
  }
  uVar19 = local_850;
  _CFStringGetFileSystemRepresentation(local_850,local_438,0x400);
  iVar5 = _stat_INODE64(local_438,&local_918);
  if (iVar5 == -1) {
    pcVar16 = &cf_Failedtostatbootimagefile;
LAB_000fc352:
    pcVar8 = (char *)0x0;
    _AMRLogWithFilePath(3,uVar19,pcVar16);
    piVar9 = ___error();
    iVar5 = __AMRestoreErrorForErrno(*piVar9,0xb);
  }
  else {
    lVar15 = local_8b8;
    if (param_8 == 0) {
      lVar15 = 0x40 - local_8b8 % 0x40;
      if (local_8b8 % 0x40 == 0) {
        lVar15 = 0;
      }
      lVar15 = lVar15 + local_8b8;
    }
    local_858 = param_6;
    _AMRLog(7,&cf_ramdisk__lldbytes_paddedto_zu_,local_8b8,lVar15);
    _CFStringGetFileSystemRepresentation(param_2,local_438,0x400);
    iVar5 = _stat_INODE64(local_438,&local_918);
    lVar10 = local_880;
    if (iVar5 == -1) {
      pcVar16 = &cf_Failedtostatdevicetreefile;
      uVar19 = param_2;
      goto LAB_000fc352;
    }
    lVar20 = local_8b8;
    if (param_8 == 0) {
      lVar20 = 0x40 - local_8b8 % 0x40;
      if (local_8b8 % 0x40 == 0) {
        lVar20 = 0;
      }
      lVar20 = lVar20 + local_8b8;
    }
    local_888 = param_2;
    local_840 = uVar21;
    _AMRLog(7,&cf_devicetree__lldbytes_paddedto_zu_,local_8b8,lVar20);
    lVar13 = local_860;
    _CFStringGetFileSystemRepresentation(local_860,local_438,0x400);
    iVar5 = _stat_INODE64(local_438,&local_918);
    if (iVar5 == -1) {
      _AMRLogWithFilePath(3,lVar13,&cf_Failedtostatkernelcachefile);
LAB_000fc3a3:
      pcVar8 = (char *)0x0;
      piVar9 = ___error();
      iVar5 = __AMRestoreErrorForErrno(*piVar9,0xb);
      uVar21 = local_840;
    }
    else {
      lVar13 = local_8b8;
      if (param_8 == 0) {
        lVar13 = 0x40 - local_8b8 % 0x40;
        if (local_8b8 % 0x40 == 0) {
          lVar13 = 0;
        }
        lVar13 = lVar13 + local_8b8;
      }
      uVar21 = lVar20 + lVar15 + lVar13;
      _AMRLog(7,&cf_K___lldbytes_paddedto_zu_);
      if (((lVar10 != 0) && (lVar15 = _CFArrayGetCount(lVar10), 0 < lVar15)) &&
         (local_870 = _CFArrayGetCount(lVar10), 0 < (long)local_870)) {
        uVar19 = 0;
        do {
          lVar15 = _CFArrayGetValueAtIndex(lVar10,uVar19);
          if (lVar15 != 0) {
            lVar20 = _CFGetTypeID(lVar15);
            lVar13 = _CFStringGetTypeID();
            if (lVar20 == lVar13) {
              _CFStringGetFileSystemRepresentation(lVar15,local_438,0x400);
              iVar5 = _stat_INODE64(local_438,&local_918);
              if (iVar5 == -1) {
                _AMRLogWithFilePath(3,local_860,&cf_Failedtostatadditionalimagefile__s_,local_438);
                goto LAB_000fc3a3;
              }
              lVar15 = local_8b8;
              if (param_8 == 0) {
                lVar15 = 0x40 - local_8b8 % 0x40;
                if (local_8b8 % 0x40 == 0) {
                  lVar15 = 0;
                }
                lVar15 = lVar15 + local_8b8;
              }
              uVar21 = uVar21 + lVar15;
              _AMRLog(7,&cf__s__lldbytes_paddedto_zu_,local_438);
            }
          }
          uVar19 = uVar19 + 1;
        } while (local_870 != uVar19);
      }
      _AMRLog(6,&cf_membootcombinedimage__zubytes,uVar21);
      pcVar8 = _malloc(local_878);
      pFVar7 = local_848;
      uVar19 = local_850;
      pcVar3 = local_858;
      sVar2 = local_878;
      if (pcVar8 == (char *)0x0) {
        iVar5 = 0x12;
        pcVar8 = (char *)0x0;
        uVar21 = local_840;
        local_848 = pFVar7;
      }
      else {
        if (param_8 == 0) {
          pcVar8[0x10] = '\0';
          pcVar8[0x11] = '\0';
          pcVar8[0x12] = '\0';
          pcVar8[0x13] = '\0';
          pcVar8[0x14] = '\0';
          pcVar8[0x15] = '\0';
          pcVar8[0x16] = '\0';
          pcVar8[0x17] = '\0';
          pcVar8[0x18] = '\0';
          pcVar8[0x19] = '\0';
          pcVar8[0x1a] = '\0';
          pcVar8[0x1b] = '\0';
          pcVar8[0x1c] = '\0';
          pcVar8[0x1d] = '\0';
          pcVar8[0x1e] = '\0';
          pcVar8[0x1f] = '\0';
          pcVar8[0x30] = '\0';
          pcVar8[0x31] = '\0';
          pcVar8[0x32] = '\0';
          pcVar8[0x33] = '\0';
          pcVar8[0x34] = '\0';
          pcVar8[0x35] = '\0';
          pcVar8[0x36] = '\0';
          pcVar8[0x37] = '\0';
          pcVar8[0x38] = '\0';
          pcVar8[0x39] = '\0';
          pcVar8[0x3a] = '\0';
          pcVar8[0x3b] = '\0';
          pcVar8[0x3c] = '\0';
          pcVar8[0x3d] = '\0';
          pcVar8[0x3e] = '\0';
          pcVar8[0x3f] = '\0';
          pcVar8[0x20] = '\0';
          pcVar8[0x21] = '\0';
          pcVar8[0x22] = '\0';
          pcVar8[0x23] = '\0';
          pcVar8[0x24] = '\0';
          pcVar8[0x25] = '\0';
          pcVar8[0x26] = '\0';
          pcVar8[0x27] = '\0';
          pcVar8[0x28] = '\0';
          pcVar8[0x29] = '\0';
          pcVar8[0x2a] = '\0';
          pcVar8[0x2b] = '\0';
          pcVar8[0x2c] = '\0';
          pcVar8[0x2d] = '\0';
          pcVar8[0x2e] = '\0';
          pcVar8[0x2f] = '\0';
          pcVar8[0] = '2';
          pcVar8[1] = 'G';
          pcVar8[2] = 'M';
          pcVar8[3] = 'I';
          pcVar8[4] = '@';
          pcVar8[5] = '\0';
          pcVar8[6] = '\0';
          pcVar8[7] = '\0';
          pcVar8[8] = '\0';
          pcVar8[9] = '\0';
          pcVar8[10] = '\0';
          pcVar8[0xb] = '\0';
          pcVar8[0xc] = '\x01';
          pcVar8[0xd] = '\0';
          pcVar8[0xe] = '\0';
          pcVar8[0xf] = '\0';
          pcVar8[0x14] = '\0';
          pcVar8[0x15] = '\0';
          pcVar8[0x16] = '\0';
          pcVar8[0x17] = '\0';
          pcVar8[0x18] = '\0';
          pcVar8[0x19] = '\0';
          pcVar8[0x1a] = '\0';
          pcVar8[0x1b] = '\0';
          pcVar8[0x1c] = '\0';
          pcVar8[0x1d] = '\0';
          pcVar8[0x1e] = '\0';
          pcVar8[0x1f] = '\0';
          *(uint *)(pcVar8 + 0x10) = (uint)((uVar21 & 0x3f) != 0) * 0x40 + (int)(uVar21 >> 6);
          if (_crc_table_computed == '\0') {
            uVar21 = 0;
            do {
              iVar5 = 8;
              uVar17 = uVar21;
              do {
                uVar18 = uVar17 >> 1;
                uVar1 = uVar17 & 1;
                uVar17 = uVar18 ^ 0xedb88320;
                if (uVar1 == 0) {
                  uVar17 = uVar18;
                }
                iVar5 = iVar5 + -1;
              } while (iVar5 != 0);
              (&_crc_table)[uVar21] = uVar17;
              uVar21 = uVar21 + 1;
            } while (uVar21 != 0x100);
            _crc_table_computed = '\x01';
          }
          uVar21 = 0xffffffff;
          lVar15 = 0;
          do {
            uVar21 = uVar21 >> 8 ^ (&_crc_table)[(byte)(pcVar8[lVar15] ^ (byte)uVar21)];
            lVar15 = lVar15 + 1;
          } while (lVar15 != 0x30);
          *(uint *)(pcVar8 + 0x30) = ~(uint)uVar21;
          uVar14 = 0x40;
        }
        else {
          uVar14 = 0;
        }
        local_868 = 0;
        local_870 = (ulong)param_8;
        local_850 = local_840 & 0xff;
        iVar5 = __writeSizeAlignedFile
                          (uVar19,local_878,pcVar8,uVar14,pcVar8,&local_868,local_858,local_850,
                           local_848,local_870,param_9);
        uVar19 = local_870;
        uVar21 = local_840;
        local_848 = pFVar7;
        if (((iVar5 == 0) &&
            (iVar5 = __writeSizeAlignedFile
                               (local_860,sVar2,pcVar8,local_868,pcVar8,&local_868,pcVar3,local_850,
                                pFVar7,local_870,param_9), uVar21 = local_840, iVar5 == 0)) &&
           (iVar5 = __writeSizeAlignedFile
                              (local_888,sVar2,pcVar8,local_868,pcVar8,&local_868,local_858,
                               local_850,pFVar7,uVar19,param_9), lVar15 = local_880,
           uVar21 = local_840, iVar5 == 0)) {
          if (((local_880 != 0) && (lVar10 = _CFArrayGetCount(local_880), 0 < lVar10)) &&
             (lVar10 = _CFArrayGetCount(lVar15), 0 < lVar10)) {
            lVar20 = 0;
            do {
              lVar13 = _CFArrayGetValueAtIndex(lVar15,lVar20);
              if (lVar13 != 0) {
                local_860 = _CFGetTypeID(lVar13);
                lVar11 = _CFStringGetTypeID();
                if ((local_860 == lVar11) &&
                   (iVar5 = __writeSizeAlignedFile
                                      (lVar13,local_878,pcVar8,local_868,pcVar8,&local_868,local_858
                                       ,local_850,local_848,local_870,param_9), uVar21 = local_840,
                   iVar5 != 0)) goto LAB_000fc584;
              }
              lVar20 = lVar20 + 1;
            } while (lVar10 != lVar20);
          }
          sVar2 = local_868;
          if (local_868 == 0) {
LAB_000fc71e:
            iVar6 = (*local_858)(0,0,param_9);
            uVar21 = local_840;
            iVar5 = 0;
            if (iVar6 != 0) {
              _AMRLog(3,&cf_Zerobytepacketwritefailed__d,iVar6);
              uVar21 = local_840;
              iVar5 = iVar6;
            }
          }
          else {
            if (((char)local_840 == '\0') ||
               (sVar12 = _fwrite(pcVar8,local_868,1,local_848), sVar12 == 1)) {
              iVar5 = (*local_858)(pcVar8,sVar2,param_9);
              if (iVar5 == 0) {
                uVar21 = local_840;
                iVar5 = 0;
                if ((sVar2 & 0x1ff) != 0) goto LAB_000fc584;
                goto LAB_000fc71e;
              }
              pcVar16 = &cf_remainderwritefailed__d;
            }
            else {
              pcVar16 = &cf_remainderwritetodiskfailed__d;
              iVar5 = 0;
            }
            _AMRLog(3,pcVar16,iVar5);
            uVar21 = local_840;
          }
        }
      }
    }
  }
LAB_000fc584:
  if ((char)uVar21 != '\0') {
    _fclose(local_848);
  }
  if (pcVar8 != (char *)0x0) {
    _free(pcVar8);
  }
LAB_000fc5a2:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

