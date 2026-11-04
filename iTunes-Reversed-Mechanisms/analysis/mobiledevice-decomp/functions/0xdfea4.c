// rea decompile_all
// name: __getDeviceMapEntryForHardwareFromDeviceMapTxt
// address: 0xdfea4
// body: available
// range: 0xdfea4-0xe02c0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xe02bc to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 __getDeviceMapEntryForHardwareFromDeviceMapTxt(long param_1,int *param_2,int *param_3)

{
  byte bVar1;
  size_t sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  byte *pbVar7;
  size_t sVar8;
  int *piVar9;
  char *pcVar10;
  long lVar11;
  byte *pbVar12;
  undefined1 uVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong local_4f8 [12];
  size_t local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 uStack_470;
  int *local_460;
  int *local_458;
  int *local_450;
  byte *local_448;
  ushort local_43a;
  char local_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  if (param_1 == 0) {
    uVar13 = 0;
    goto LAB_000e0293;
  }
  local_450 = param_2;
  uVar6 = _CFStringCreateWithFormat
                    (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,&cf____cdevice_map_txt,
                     param_1,0x2f);
  ___bzero(local_438,0x400);
  _CFStringGetFileSystemRepresentation(uVar6,local_438,0x400);
  iVar3 = _open(local_438,0,0);
  if (iVar3 == -1) {
    piVar9 = ___error();
    pcVar10 = _strerror(*piVar9);
    _AMRLogWithFilePath(3,uVar6,&cf_unabletoopendevice_map_txt__s,pcVar10);
    _CFRelease(uVar6);
LAB_000e0289:
    uVar13 = 0;
    pbVar7 = (byte *)0x0;
  }
  else {
    local_478 = 0;
    uStack_470 = 0;
    local_488 = 0;
    uStack_480 = 0;
    local_498 = 0;
    uStack_490 = 0;
    local_4f8[10] = 0;
    local_4f8[0xb] = 0;
    local_4f8[8] = 0;
    local_4f8[9] = 0;
    local_4f8[6] = 0;
    local_4f8[7] = 0;
    local_4f8[4] = 0;
    local_4f8[5] = 0;
    local_4f8[2] = 0;
    local_4f8[3] = 0;
    local_4f8[0] = 0;
    local_4f8[1] = 0;
    iVar4 = _fstat_INODE64(iVar3);
    sVar2 = local_498;
    if ((iVar4 == -1) || (pbVar7 = _malloc(local_498 + 1), pbVar7 == (byte *)0x0)) {
LAB_000e001c:
      pbVar7 = (byte *)0x0;
    }
    else {
      sVar8 = _read(iVar3,pbVar7,sVar2);
      if (sVar8 != sVar2) {
        piVar9 = ___error();
        pcVar10 = _strerror(*piVar9);
        _AMRLogWithFilePath(3,uVar6,&cf_unabletoreaddevice_map_txt__s,pcVar10);
        _free(pbVar7);
        goto LAB_000e001c;
      }
      pbVar7[sVar2] = 0;
    }
    _close(iVar3);
    _CFRelease(uVar6);
    if (pbVar7 == (byte *)0x0) goto LAB_000e0289;
    local_458 = param_3 + 0x1a;
    local_460 = param_3 + 0x22;
    piVar9 = local_450;
    local_448 = pbVar7;
    do {
      if (*pbVar7 == 0) break;
      param_3[0x14] = 0;
      param_3[0x15] = 0;
      param_3[0x16] = 0;
      param_3[0x17] = 0;
      param_3[0x24] = 0;
      param_3[0x25] = 0;
      param_3[0x26] = 0;
      param_3[0x27] = 0;
      param_3[0x20] = 0;
      param_3[0x21] = 0;
      param_3[0x22] = 0;
      param_3[0x23] = 0;
      param_3[0x1c] = 0;
      param_3[0x1d] = 0;
      param_3[0x1e] = 0;
      param_3[0x1f] = 0;
      param_3[0x18] = 0;
      param_3[0x19] = 0;
      param_3[0x1a] = 0;
      param_3[0x1b] = 0;
      param_3[0x10] = 0;
      param_3[0x11] = 0;
      param_3[0x12] = 0;
      param_3[0x13] = 0;
      param_3[0xc] = 0;
      param_3[0xd] = 0;
      param_3[0xe] = 0;
      param_3[0xf] = 0;
      param_3[8] = 0;
      param_3[9] = 0;
      param_3[10] = 0;
      param_3[0xb] = 0;
      param_3[4] = 0;
      param_3[5] = 0;
      param_3[6] = 0;
      param_3[7] = 0;
      param_3[0] = 0;
      param_3[1] = 0;
      param_3[2] = 0;
      param_3[3] = 0;
      param_3[0x28] = 0;
      param_3[0x29] = 0;
      param_3[0x15] = 1;
      if (*pbVar7 == 0x30) {
        local_438[0] = '\0';
        local_438[1] = '\0';
        local_4f8[0] = local_4f8[0] & 0xffffffffffff0000;
        local_43a = 0;
        iVar3 = _sscanf((char *)pbVar7,"%hx %hx %hx %15s",local_438,local_4f8,&local_43a,local_458);
        if (iVar3 == 4) {
          uVar5 = (uint)local_43a;
        }
        else {
          uVar5 = 0;
          local_438[0] = '\0';
          local_438[1] = '\0';
          local_4f8[0] = local_4f8[0] & 0xffffffffffff0000;
          local_43a = 0;
        }
        *param_3 = 0x8900;
        param_3[2] = uVar5 & 0xff;
        lVar11 = 0;
        do {
          if ((&_BoardIDMap)[lVar11 * 2] == (short)(uVar5 >> 8)) {
            uVar5 = (uint)(ushort)(&DAT_0032c5d2)[lVar11 * 2];
            goto LAB_000e0238;
          }
          lVar11 = lVar11 + 1;
        } while (lVar11 != 6);
        uVar5 = 0xffff;
LAB_000e0238:
        param_3[1] = uVar5;
        pcVar10 = _strchr((char *)pbVar7,10);
        pbVar7 = (byte *)(pcVar10 + 1);
        if (pcVar10 == (char *)0x0) {
          pbVar7 = (byte *)0x0;
        }
        iVar3 = 0x8900;
      }
      else {
        do {
          do {
            pbVar15 = pbVar7;
            bVar1 = *pbVar15;
            pbVar7 = pbVar15 + 1;
          } while (bVar1 == 0x20);
          lVar11 = 0x88;
          pbVar14 = (byte *)0x0;
          pbVar7 = pbVar15;
          while ((0x20 < bVar1 || ((0x100000401U >> ((ulong)bVar1 & 0x3f) & 1) == 0))) {
            pbVar12 = pbVar14;
            if (pbVar14 == (byte *)0x0) {
              pbVar12 = pbVar7;
            }
            if (bVar1 == 0x3a) {
              pbVar14 = pbVar12;
            }
            bVar1 = pbVar7[1];
            pbVar7 = pbVar7 + 1;
            lVar11 = lVar11 + 1;
          }
          if (pbVar14 == (byte *)0x0) {
            if (lVar11 != 0x88) {
              if ((bVar1 == 10) || ((ulong)bVar1 == 0)) {
                ___strlcpy_chk(local_458,pbVar15,0x20,0x20);
                *(undefined1 *)((long)param_3 + lVar11 + -0x20) = 0;
              }
              else {
                _strlcpy((char *)local_460,(char *)pbVar15,0x20);
                *(undefined1 *)((long)param_3 + lVar11) = 0;
              }
            }
          }
          else {
            bVar1 = *pbVar14;
            *pbVar14 = 0;
            _parseKeyValueIntoDeviceInfo(pbVar15,pbVar14 + 1,param_3);
            *pbVar14 = bVar1;
          }
          bVar1 = *pbVar7;
        } while ((bVar1 != 10) && (bVar1 != 0));
        pbVar7 = pbVar7 + (bVar1 != 0);
        iVar3 = *param_3;
        piVar9 = local_450;
      }
      if (((iVar3 == *piVar9) && (param_3[1] == piVar9[1])) && (param_3[0x15] == piVar9[0x15])) {
        uVar13 = 1;
        pbVar7 = local_448;
        goto LAB_000e028b;
      }
    } while (pbVar7 != (byte *)0x0);
    uVar13 = 0;
    pbVar7 = local_448;
  }
LAB_000e028b:
  _free(pbVar7);
LAB_000e0293:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar13;
}

