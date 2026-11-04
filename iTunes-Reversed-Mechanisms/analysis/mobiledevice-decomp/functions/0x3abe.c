// rea decompile_all
// name: _AMSupportBase64Encode
// address: 0x3abe
// body: available
// range: 0x3abe-0x3c0d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMSupportBase64Encode(undefined8 param_1,long param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  size_t sVar5;
  char *pcVar6;
  
  if (param_2 == 0) {
    _AMSupportBase64Encode_cold_2();
  }
  else {
    lVar2 = _CFDataGetLength(param_2);
    if (lVar2 == 0) {
      _AMSupportLogInternal(3,"AMSupportBase64Encode","value length == 0: \'%@\'",param_2);
    }
    else {
      if (param_3 != (undefined8 *)0x0) {
        uVar3 = _CFDataGetBytePtr(param_2);
        uVar1 = _CFDataGetLength(param_2);
        pcVar4 = (char *)__base64encode(uVar3,uVar1);
        if (pcVar4 == (char *)0x0) {
          _AMSupportLogInternal(3,"AMSupportBase64Encode","encodedBuffer == NULL: \'%@\'",param_2);
        }
        else {
          sVar5 = _strlen(pcVar4);
          if ((int)sVar5 == 0) {
            pcVar6 = "encodedLength == 0: \'%@\'";
          }
          else {
            lVar2 = _CFStringCreateWithBytes(param_1,pcVar4,(long)(int)sVar5,0x8000100,0);
            if (lVar2 != 0) {
              uVar3 = _CFRetain(lVar2);
              *param_3 = uVar3;
              _free(pcVar4);
              _CFRelease(lVar2);
              return 0;
            }
            pcVar6 = "encodedValue == NULL: \'%@\'";
          }
          _AMSupportLogInternal(3,"AMSupportBase64Encode",pcVar6,param_2);
          _free(pcVar4);
        }
        return 99;
      }
      _AMSupportBase64Encode_cold_1();
    }
  }
  return 1;
}

