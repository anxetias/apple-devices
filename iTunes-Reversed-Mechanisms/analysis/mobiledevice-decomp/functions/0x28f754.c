// rea decompile_all
// name: _AMAuthInstallCryptoCreateSubjectPublicKeyInfoForKey
// address: 0x28f754
// body: available
// range: 0x28f754-0x28f9cc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallCryptoCreateSubjectPublicKeyInfoForKey
              (long param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 *local_70;
  undefined8 local_68;
  long local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_31;
  
  local_50 = 0;
  local_48 = 0;
  local_31 = 0;
  local_68 = 0;
  iVar1 = _AMAuthInstallCryptoGetKeyData(param_1,param_2,&local_78);
  if (iVar1 == 0) {
    local_70 = param_3;
    local_60 = param_1;
    uVar4 = _CFGetAllocator(param_1);
    uVar4 = _CFDataCreateMutable(uVar4,0);
    _CFDataAppendBytes(uVar4,&local_31,1);
    uVar5 = _CFDataGetBytePtr(local_78);
    uVar6 = _CFDataGetLength(local_78);
    _CFDataAppendBytes(uVar4,uVar5,uVar6);
    lVar7 = _DEREncoderCreate(0);
    iVar1 = 2;
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      _DEREncoderAddData(lVar7,0,0x10,&_kRsaEncryption,0xb,1);
      uVar5 = _CFDataGetBytePtr(uVar4);
      uVar2 = _CFDataGetLength(uVar4);
      _DEREncoderAddData(lVar7,0,3,uVar5,uVar2,0);
      iVar3 = _DEREncoderCreateEncodedBuffer(lVar7,&local_50,&local_58);
      if (iVar3 == 0) {
        local_40 = _DEREncoderCreate(0);
        _DEREncoderAddData(local_40,0,0x10,local_50,local_58,1);
        _DEREncoderCreateEncodedBuffer(lVar7,&local_48,&local_54);
        uVar5 = _DEREncoderCreate(0);
        iVar1 = *(int *)(*(long *)(local_60 + 0x30) + 4);
        if ((iVar1 == 0x68) || (uVar6 = local_48, iVar1 == 0x5e)) {
          uVar6 = _CFDataGetBytePtr(uVar4);
          local_54 = _CFDataGetLength(uVar4);
        }
        _DEREncoderAddData(uVar5,0,0x10,uVar6,local_54,1);
        _DEREncoderCreateEncodedBuffer(uVar5,&local_68,&local_7c);
        uVar6 = _CFGetAllocator(local_60);
        lVar8 = _CFDataCreate(uVar6,local_68,local_7c);
        lVar9 = 0;
        if (lVar8 == 0) {
          iVar1 = 2;
        }
        else {
          uVar6 = _CFRetain(lVar8);
          *local_70 = uVar6;
          iVar1 = 0;
          lVar9 = lVar8;
        }
        goto LAB_0028f939;
      }
    }
  }
  else {
    lVar7 = 0;
    uVar4 = 0;
  }
  local_40 = 0;
  uVar5 = 0;
  lVar9 = 0;
LAB_0028f939:
  _DEREncoderDestroy(lVar7);
  _DEREncoderDestroy(local_40);
  _DEREncoderDestroy(uVar5);
  _SafeFree(local_50);
  _SafeFree(local_48);
  _SafeFree(local_68);
  _SafeRelease(uVar4);
  _SafeRelease(lVar9);
  return iVar1;
}

