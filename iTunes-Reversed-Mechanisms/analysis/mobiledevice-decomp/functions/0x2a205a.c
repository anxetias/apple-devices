// rea decompile_all
// name: __AMAuthInstallVinylCreateIm4p
// address: 0x2a205a
// body: available
// range: 0x2a205a-0x2a263a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2a2636 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __AMAuthInstallVinylCreateIm4p(long param_1,long param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  void *pvVar10;
  void *pvVar11;
  undefined8 uVar12;
  char *pcVar13;
  undefined8 uVar14;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  undefined1 local_8e [5];
  undefined1 local_89 [5];
  undefined4 local_84;
  undefined8 *local_80;
  long local_78;
  long local_70;
  undefined8 local_68;
  undefined8 local_60;
  void *local_58;
  void *local_50;
  long local_48;
  long local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_b8 = 0;
  local_a0 = param_4;
  local_b0 = _AMAuthInstallSupportCopyAllocator();
  iVar3 = 1;
  local_80 = param_3;
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == (undefined8 *)0x0)) {
    uVar14 = 0;
    uVar12 = 0;
    uVar5 = 0;
    pvVar10 = (void *)0x0;
    pvVar11 = (void *)0x0;
    goto LAB_002a23fd;
  }
  uVar14 = 0;
  uVar12 = 0;
  uVar5 = 0;
  pvVar10 = (void *)0x0;
  pvVar11 = (void *)0x0;
  local_a8 = param_1;
  if (local_a0 == 0) goto LAB_002a23fd;
  uVar5 = _CFGetAllocator(param_1);
  lVar6 = _CFArrayCreateMutable(uVar5,0,PTR__kCFTypeArrayCallBacks_004411a8);
  iVar3 = 2;
  if (lVar6 == 0) {
    local_98 = 0;
  }
  else {
    uVar5 = _CFGetAllocator(param_1);
    local_78 = _CFArrayCreateMutable(uVar5,0,PTR__kCFTypeArrayCallBacks_004411a8);
    local_98 = lVar6;
    if (local_78 != 0) {
      local_48 = lVar6;
      local_40 = local_78;
      uVar5 = _CFGetAllocator(param_1);
      lVar7 = _CFArrayCreate(uVar5,&local_48,2,PTR__kCFTypeArrayCallBacks_004411a8);
      puVar1 = local_80;
      local_80[6] = lVar7;
      if (lVar7 == 0) {
        uVar14 = 0;
        iVar3 = 2;
        uVar12 = 0;
        uVar5 = 0;
        pvVar10 = (void *)0x0;
        pvVar11 = (void *)0x0;
        goto LAB_002a23fd;
      }
      iVar3 = _BbfwReaderStart(param_2,___AMAuthInstallVinylFwReaderInfoPlistCallback,local_80);
      if (iVar3 != 0) {
LAB_002a24d3:
        _AMAuthInstallLog(3,"_AMAuthInstallVinylCreateIm4p","failed to read zip file");
        goto LAB_002a2597;
      }
      if (puVar1[7] == 0) {
        pcVar13 = "Failed to build vinyl info.plist dictionary";
        uStack_c0 = 3;
LAB_002a2582:
        _AMAuthInstallLog(uStack_c0,"_AMAuthInstallVinylCreateIm4p",pcVar13);
LAB_002a258a:
        iVar3 = 0;
        goto LAB_002a2597;
      }
      iVar3 = _BbfwReaderStart(param_2,___AMAuthInstallVinylFwReaderCallback,puVar1);
      if (iVar3 != 0) goto LAB_002a24d3;
      lVar8 = _CFArrayGetCount(lVar6);
      lVar7 = local_78;
      if (lVar8 < 1) {
        _AMAuthInstallLog(4,"_AMAuthInstallVinylCreateIm4p","No sources found for %@",*puVar1);
        goto LAB_002a258a;
      }
      lVar9 = _CFArrayGetCount(local_78);
      if (lVar8 != lVar9) {
        pcVar13 = "Count of certID != hashVad";
        uStack_c0 = 4;
        goto LAB_002a2582;
      }
      pvVar10 = _malloc(lVar8 * 8);
      pvVar11 = _malloc(lVar8 * 8);
      lVar9 = 0;
      local_58 = pvVar10;
      _CFArrayGetValues(lVar6,0,lVar8,pvVar10);
      local_70 = lVar8;
      local_50 = pvVar11;
      _CFArrayGetValues(lVar7,0,lVar8,pvVar11);
      local_60 = _DEREncoderCreate(1);
      local_68 = _DEREncoderCreate(1);
      do {
        uVar14 = _DEREncoderCreate(0);
        pvVar10 = local_58;
        uVar5 = _CFDataGetBytePtr(*(undefined8 *)((long)local_58 + lVar9 * 8));
        uVar4 = _CFDataGetLength(*(undefined8 *)((long)pvVar10 + lVar9 * 8));
        iVar3 = _DEREncoderAddData(uVar14,0,4,uVar5,uVar4,0);
        pvVar10 = local_50;
        if (iVar3 != 0) {
          pcVar13 = "failed to add certId";
LAB_002a24bc:
          iVar3 = 3;
          _AMAuthInstallLog(3,"_AMAuthInstallVinylCreateIm4p",pcVar13);
          uVar12 = local_60;
          uVar5 = local_68;
          pvVar10 = local_58;
          pvVar11 = local_50;
          goto LAB_002a23fd;
        }
        uVar5 = _CFDataGetBytePtr(*(undefined8 *)((long)local_50 + lVar9 * 8));
        uVar4 = _CFDataGetLength(*(undefined8 *)((long)pvVar10 + lVar9 * 8));
        iVar3 = _DEREncoderAddData(uVar14,0,4,uVar5,uVar4,0);
        if (iVar3 != 0) {
          pcVar13 = "failed to add VAD";
          goto LAB_002a24bc;
        }
        iVar3 = _DEREncoderAddSequenceFromEncoder(uVar14);
        if (iVar3 != 0) {
          pcVar13 = "failed to add certId-VAD sequence";
          goto LAB_002a24bc;
        }
        _DEREncoderDestroy();
        uVar12 = local_60;
        uVar5 = local_68;
        lVar9 = lVar9 + 1;
      } while (local_70 != lVar9);
      iVar3 = _DEREncoderAddSequenceFromEncoder(local_68,local_60);
      uVar14 = local_b0;
      if (iVar3 == 0) {
        _DEREncoderDestroy(uVar5);
        iVar3 = _DEREncoderCreateEncodedBuffer(uVar12,&local_b8,&local_84);
        if (iVar3 != 0) {
          uVar5 = 0;
          _AMAuthInstallLog(3,"_AMAuthInstallVinylCreateIm4p","failed to encode DER buffer");
          goto LAB_002a25de;
        }
        uVar5 = _CFGetAllocator(local_a8);
        lVar6 = _CFDataCreateWithBytesNoCopy(uVar5,local_b8,local_84,uVar14);
        if (lVar6 == 0) {
          uVar5 = 0;
          local_70 = 0;
          iVar3 = 2;
        }
        else {
          cVar2 = _CFStringGetCString(*local_80,local_8e,5,0x8000100);
          iVar3 = 3;
          local_70 = lVar6;
          if (cVar2 != '\0') {
            cVar2 = _CFStringGetCString(&cf_1_0,local_89,5,0x8000100);
            if (cVar2 != '\0') {
              iVar3 = _AMAuthInstallApImg4CreatePayload(local_8e,local_89,lVar6,0,0,local_a0);
              if (iVar3 == 0) {
                uVar14 = 0;
                iVar3 = 0;
                uVar12 = local_60;
                uVar5 = 0;
                pvVar10 = local_58;
                pvVar11 = local_50;
              }
              else {
                _AMAuthInstallLog(3,"_AMAuthInstallVinylCreateIm4p","failed to create im4p");
                uVar14 = 0;
                uVar12 = local_60;
                uVar5 = 0;
                pvVar10 = local_58;
                pvVar11 = local_50;
              }
              goto LAB_002a23fd;
            }
          }
          uVar5 = 0;
        }
      }
      else {
        _AMAuthInstallLog(3,"_AMAuthInstallVinylCreateIm4p","failed to add top-level sequence");
LAB_002a25de:
        iVar3 = 3;
      }
      uVar14 = 0;
      pvVar10 = local_58;
      pvVar11 = local_50;
      goto LAB_002a23fd;
    }
    local_78 = 0;
  }
LAB_002a2597:
  uVar14 = 0;
  uVar12 = 0;
  uVar5 = 0;
  pvVar10 = (void *)0x0;
  pvVar11 = (void *)0x0;
LAB_002a23fd:
  _SafeFree(pvVar10);
  _SafeFree(pvVar11);
  _DEREncoderDestroy(uVar14);
  _DEREncoderDestroy(uVar5);
  _DEREncoderDestroy(uVar12);
  _SafeRelease(local_98);
  _SafeRelease(local_78);
  puVar1 = local_80;
  _SafeRelease(local_80[6]);
  _SafeRelease(puVar1[7]);
  _SafeRelease(local_70);
  _SafeRelease(local_b0);
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

