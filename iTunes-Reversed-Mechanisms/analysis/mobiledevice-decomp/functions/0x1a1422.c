// rea decompile_all
// name: _AMAuthInstallApImg4EncodeRestoreInfo
// address: 0x1a1422
// body: available
// range: 0x1a1422-0x1a1792 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallApImg4EncodeRestoreInfo(long param_1,long param_2,long *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  char *pcVar10;
  undefined1 local_98 [12];
  uint local_8c;
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined8 local_70;
  long *local_68;
  int local_5c;
  undefined8 local_58;
  ulong local_50;
  undefined4 local_48;
  int local_44;
  undefined8 local_40;
  int local_38;
  undefined4 local_34;
  
  local_48 = 0;
  local_78 = 0;
  local_40 = 0;
  local_58 = 0;
  if ((((param_1 == 0) || (param_2 == 0)) ||
      (lVar5 = _CFDictionaryGetCount(param_2), param_3 == (long *)0x0)) || (lVar5 < 1)) {
    uVar6 = 0;
    if (param_3 == (long *)0x0) {
      iVar2 = 3;
LAB_001a178b:
      lVar7 = 0;
      lVar5 = 0;
      goto LAB_001a16a2;
    }
LAB_001a174c:
    uVar6 = 0;
    lVar5 = 0;
    lVar7 = 0;
  }
  else {
    uVar1 = _CFDataGetLength(param_1);
    local_8c = uVar1;
    uVar6 = _CFDataGetBytePtr(param_1);
    iVar2 = _DERDecoderInitialize(local_88,uVar6,&local_8c,uVar1);
    if (iVar2 != 0) {
      pcVar10 = "DERDecoderInitialize top level failed";
LAB_001a1744:
      _AMAuthInstallApImg4EncodeRestoreInfo_cold_1(pcVar10);
      goto LAB_001a174c;
    }
    iVar2 = _DERDecoderGetDataWithTag(local_88,0,0x10,1,&local_70,&local_38,&local_48);
    if (iVar2 != 0) {
      pcVar10 = "could not find im4p top level sequence";
      goto LAB_001a1744;
    }
    iVar2 = _DERDecoderInitialize(local_88,local_70,&local_38,local_38);
    if (iVar2 != 0) {
      pcVar10 = "DERDecoderInitialize sequence failed";
      goto LAB_001a1744;
    }
    local_48 = 3;
    iVar3 = _DERDecoderGetEncodingWithTag(local_88,2,1,1,local_98,&local_5c,&local_48);
    if (iVar3 == 0) {
      local_38 = local_38 - local_5c;
      uVar8 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
      iVar2 = 0;
      local_68 = param_3;
      local_44 = iVar3;
      uVar6 = _CFDictionaryCreateMutable
                        (uVar8,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                         PTR__kCFTypeDictionaryValueCallBacks_004411b8);
      local_78 = uVar6;
      iVar3 = _AMAuthInstallApImg4DecodeRestoreInfo(param_1);
      if (iVar3 == 0) {
        local_50 = 0;
        _AMSupportCreateMergedDictionary(uVar8,uVar6,param_2,&local_50);
        if (local_50 == 0) {
          pcVar10 = "failed to create merged restore Info dictionary";
        }
        else {
          iVar2 = _AMAuthInstallApImg4EncodeRestoreDict(local_50,&local_40,&local_34);
          _SafeRelease(local_50);
          param_3 = local_68;
          iVar3 = local_44;
          if (iVar2 == 0) goto LAB_001a15ef;
          pcVar10 = "AMAuthInstallApImg4EncodeRestoreDict merged restoreInfo failed";
        }
        _AMAuthInstallLog(3,"AMAuthInstallApImg4EncodeRestoreInfo",pcVar10);
        goto LAB_001a178b;
      }
      iVar2 = _AMAuthInstallApImg4EncodeRestoreDict(param_2,&local_40,&local_34);
      param_3 = local_68;
      iVar3 = local_44;
      if (iVar2 != 0) {
        _AMAuthInstallApImg4EncodeRestoreInfo_cold_2();
        goto LAB_001a178b;
      }
    }
    else {
      iVar2 = _AMAuthInstallApImg4EncodeRestoreDict(param_2,&local_40,&local_34);
      if (iVar2 != 0) {
        pcVar10 = "AMAuthInstallApImg4EncodeRestoreDict failed";
        goto LAB_001a1744;
      }
      uVar6 = 0;
    }
LAB_001a15ef:
    lVar5 = _CFDataCreateMutable(0,0);
    if (lVar5 == 0) {
LAB_001a1713:
      lVar7 = 0;
      if (iVar3 == 0) {
        iVar2 = 2;
        goto LAB_001a16a2;
      }
    }
    else {
      _CFDataAppendBytes(lVar5,local_70,local_38);
      _CFDataAppendBytes(lVar5,local_40,local_34);
      lVar7 = _DEREncoderCreate(0);
      if (lVar7 == 0) goto LAB_001a1713;
      uVar8 = _CFDataGetBytePtr(lVar5);
      uVar4 = _CFDataGetLength(lVar5);
      iVar2 = _DEREncoderAddData(lVar7,0,0x10,uVar8,uVar4,1);
      if ((iVar2 == 0) &&
         (iVar2 = _DEREncoderCreateEncodedBuffer(lVar7,&local_58,&local_50), iVar2 == 0)) {
        lVar9 = _CFDataCreate(0,local_58,local_50 & 0xffffffff);
        *param_3 = lVar9;
        iVar2 = (uint)(lVar9 == 0) * 2;
        goto LAB_001a16a2;
      }
    }
  }
  *param_3 = 0;
  iVar2 = 3;
LAB_001a16a2:
  _SafeRelease(uVar6);
  _SafeFree(local_40);
  _SafeFree(local_58);
  _SafeRelease(lVar5);
  _DEREncoderDestroy(lVar7);
  return iVar2;
}

