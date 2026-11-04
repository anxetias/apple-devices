// rea decompile_all
// name: _AMAuthInstallCryptoCreateDigestForDataType
// address: 0x1ab381
// body: available
// range: 0x1ab381-0x1ab3c6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_AMAuthInstallCryptoCreateDigestForDataType
          (undefined8 param_1,long param_2,undefined8 *param_3,int param_4)

{
  CC_LONG CVar1;
  long lVar2;
  void *pvVar3;
  uchar *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_a0;
  
  if (param_4 == 0x180) {
    uVar5._0_4_ = 1;
    uVar5._4_4_ = 0;
    lVar2 = 0;
    if ((param_2 != 0) && (param_3 != (undefined8 *)0x0)) {
      lVar6 = _CFDataCreateMutable(param_1,0x30);
      lVar2 = 0;
      if (lVar6 == 0) {
        uVar5._0_4_ = 2;
        uVar5._4_4_ = 0;
      }
      else {
        _CFDataSetLength(lVar6,0x30);
        pvVar3 = (void *)_CFDataGetBytePtr(param_2);
        CVar1 = _CFDataGetLength(param_2);
        puVar4 = (uchar *)_CFDataGetMutableBytePtr(lVar6);
        _CC_SHA384(pvVar3,CVar1,puVar4);
        uVar5 = _CFRetain(lVar6);
        *param_3 = uVar5;
        uVar5._0_4_ = 0;
        uVar5._4_4_ = 0;
        lVar2 = lVar6;
      }
    }
    _SafeRelease(lVar2);
    uVar8._0_4_ = (CC_LONG)uVar5;
    uVar8._4_4_ = SUB84(uVar5,4);
    return uVar8;
  }
  if (param_4 != 0x100) {
    if (param_4 != 1) {
      _AMAuthInstallLog(3,"AMAuthInstallCryptoCreateDigestForDataType",
                        "unsupported digest type: %d\n");
      return 1;
    }
    lVar2 = _CFDataCreateMutable(param_1,0x14);
    if (lVar2 == 0) {
      uStack_a0 = 2;
    }
    else {
      _CFDataSetLength(lVar2,0x14);
      _CC_SHA1_Init((CC_SHA1_CTX *)&stack0xffffffffffffff70);
      pvVar3 = (void *)_CFDataGetBytePtr(param_2);
      CVar1 = _CFDataGetLength(param_2);
      _CC_SHA1_Update((CC_SHA1_CTX *)&stack0xffffffffffffff70,pvVar3,CVar1);
      puVar4 = (uchar *)_CFDataGetMutableBytePtr(lVar2);
      _CC_SHA1_Final(puVar4,(CC_SHA1_CTX *)&stack0xffffffffffffff70);
      uVar5 = _CFRetain(lVar2);
      *param_3 = uVar5;
      uStack_a0 = 0;
    }
    _SafeRelease(lVar2);
    return uStack_a0;
  }
  uVar9._0_4_ = 1;
  uVar9._4_4_ = 0;
  lVar2 = 0;
  if ((param_2 != 0) && (param_3 != (undefined8 *)0x0)) {
    lVar6 = _CFDataCreateMutable(param_1,0x20);
    lVar2 = 0;
    if (lVar6 == 0) {
      uVar9._0_4_ = 2;
      uVar9._4_4_ = 0;
    }
    else {
      _CFDataSetLength(lVar6,0x20);
      pvVar3 = (void *)_CFDataGetBytePtr(param_2);
      CVar1 = _CFDataGetLength(param_2);
      puVar4 = (uchar *)_CFDataGetMutableBytePtr(lVar6);
      _CC_SHA256(pvVar3,CVar1,puVar4);
      uVar5 = _CFRetain(lVar6);
      *param_3 = uVar5;
      uVar9._0_4_ = 0;
      uVar9._4_4_ = 0;
      lVar2 = lVar6;
    }
  }
  _SafeRelease(lVar2);
  uVar7._0_4_ = (CC_LONG)uVar9;
  uVar7._4_4_ = SUB84(uVar9,4);
  return uVar7;
}

