// rea decompile_all
// name: _AFCOperationCreateLinkPath
// address: 0x268339
// body: available
// range: 0x268339-0x268472 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_AFCOperationCreateLinkPath
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  char *pcVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  size_t sVar6;
  size_t sVar7;
  undefined8 uVar8;
  long lVar9;
  char *pcVar10;
  
  lVar3 = _CFStringGetLength(param_3);
  lVar4 = _CFStringGetLength(param_4);
  lVar9 = (lVar4 + lVar3) * 9 + 0x34;
  lVar5 = _CFAllocatorAllocate(0,lVar9,0);
  if (lVar5 == 0) {
    return 0;
  }
  *(undefined8 *)(lVar5 + 0x28) = param_2;
  pcVar1 = (char *)(lVar5 + 0x30);
  cVar2 = _CFStringGetCString(param_3,pcVar1,(lVar4 + lVar3) * 9 + 0xc,0x8000100);
  if (cVar2 != '\0') {
    sVar6 = _strlen(pcVar1);
    pcVar10 = pcVar1 + sVar6 + 1;
    cVar2 = _CFStringGetCString(param_4,pcVar10,(lVar9 + lVar5) - (long)pcVar10,0x8000100);
    if (cVar2 != '\0') {
      sVar6 = _strlen(pcVar1);
      sVar7 = _strlen(pcVar10);
      _AFCHeaderInit(lVar5,0x1c,sVar6 + sVar7 + 0x32,0,0);
      uVar8 = _AFCOperationCreate(param_1,lVar5,0,0,0,param_5);
      goto LAB_0026843a;
    }
  }
  uVar8 = 0;
  ___AFCSetErrorResult();
LAB_0026843a:
  _CFAllocatorDeallocate(0,lVar5);
  return uVar8;
}

