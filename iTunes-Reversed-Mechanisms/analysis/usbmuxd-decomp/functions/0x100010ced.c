// rea decompile_all
// name: FUN_100010ced
// address: 0x100010ced
// body: available
// range: 0x100010ced-0x100010d83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100010ced(long param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  size_t sVar3;
  
  sVar3 = param_1 - 0x14;
  pvVar1 = _malloc(sVar3);
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    _memcpy(pvVar1,(void *)(param_2 + 0x14),sVar3);
    uVar2 = _CFStringCreateWithBytesNoCopy(0,pvVar1,sVar3,0x14000100,0,param_3);
  }
  *param_4 = uVar2;
  if (6 < DAT_100021030) {
    FUN_1000008d2(7,0,&cf__sdeviceudid__,"GetDeviceMetadata",uVar2);
  }
  return;
}

