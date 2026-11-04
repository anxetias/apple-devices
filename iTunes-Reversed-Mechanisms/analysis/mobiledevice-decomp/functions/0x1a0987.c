// rea decompile_all
// name: _AMAuthInstallApImg4CopyPayloadType
// address: 0x1a0987
// body: available
// range: 0x1a0987-0x1a0ab2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMAuthInstallApImg4CopyPayloadType(undefined8 param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  uint local_4c;
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_30 = 0;
  if (param_2 == 0) {
    _AMAuthInstallApImg4CopyPayloadType_cold_6();
  }
  else {
    lVar3 = _CFGetTypeID(param_2);
    lVar4 = _CFDataGetTypeID();
    if (lVar3 == lVar4) {
      uVar1 = _CFDataGetLength(param_2);
      local_4c = uVar1;
      uVar5 = _CFDataGetBytePtr(param_2);
      iVar2 = _DERDecoderInitialize(local_48,uVar5,&local_4c,uVar1);
      if (iVar2 == 0) {
        iVar2 = _DERDecoderGetDataWithTag(local_48,0,0x10,1,&local_38,&local_2c,&local_30);
        if (iVar2 == 0) {
          iVar2 = _DERDecoderInitialize(local_48,local_38,&local_2c,local_2c);
          if (iVar2 == 0) {
            local_30 = 1;
            iVar2 = _DERDecoderGetDataWithTag(local_48,0,0x16,0,&local_38,&local_2c,&local_30);
            if (iVar2 == 0) {
              uVar5 = _CFStringCreateWithBytes(param_1,local_38,local_2c,0x8000100,0);
              return uVar5;
            }
            _AMAuthInstallApImg4CopyPayloadType_cold_5();
          }
          else {
            _AMAuthInstallApImg4CopyPayloadType_cold_4();
          }
        }
        else {
          _AMAuthInstallApImg4CopyPayloadType_cold_3();
        }
      }
      else {
        _AMAuthInstallApImg4CopyPayloadType_cold_2();
      }
    }
    else {
      _AMAuthInstallApImg4CopyPayloadType_cold_1();
    }
  }
  return 0;
}

