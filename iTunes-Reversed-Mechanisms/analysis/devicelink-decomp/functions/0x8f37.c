// rea decompile_all
// name: __Read
// address: 0x8f37
// body: available
// range: 0x8f37-0x8fc4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __Read(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_28;
  long local_20;
  
  local_20 = 0;
  local_28 = param_3;
  iVar2 = (**(code **)(param_1 + 0x20))(param_1,param_2,&local_28);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    cVar1 = _DLShouldLog(3);
    if (cVar1 != '\0') {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/StreamHandler.c"
              ,"_ReadFunc",3,&cf_Errorreadingdata___,local_20);
    }
    uVar3 = 0xffffffff;
    if (local_20 != 0) {
      _CFRelease();
    }
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = local_28;
  }
  return uVar3;
}

