// rea decompile_all
// name: ACFUCommon::stringFromCFString
// address: 0x22027d
// body: available
// range: 0x22027d-0x220358 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* ACFUCommon::stringFromCFString(__CFString const*) */

ACFUCommon * __thiscall ACFUCommon::stringFromCFString(ACFUCommon *this,__CFString *param_1)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  long lVar4;
  char *pcVar5;
  size_t sVar6;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  if (param_1 != (__CFString *)0x0) {
    uVar2 = _CFStringGetSystemEncoding();
    pcVar3 = (char *)_CFStringGetCStringPtr(param_1,uVar2);
    if (pcVar3 != (char *)0x0) {
      pcVar5 = (char *)0x0;
      goto LAB_0022031a;
    }
    lVar4 = _CFStringGetLength(param_1);
    sVar6 = lVar4 + 1;
    pcVar5 = _malloc(sVar6);
    if (pcVar5 != (char *)0x0) {
      ___bzero(pcVar5,sVar6);
      uVar2 = _CFStringGetSystemEncoding();
      cVar1 = _CFStringGetCString(param_1,pcVar5,sVar6,uVar2);
      pcVar3 = "";
      if (cVar1 != '\0') {
        pcVar3 = pcVar5;
      }
      goto LAB_0022031a;
    }
  }
  pcVar5 = (char *)0x0;
  pcVar3 = "";
LAB_0022031a:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
            (&local_48,pcVar3);
  *(undefined8 *)(this + 0x10) = local_38;
  *(undefined8 *)this = local_48;
  *(undefined8 *)(this + 8) = uStack_40;
  if (pcVar5 != (char *)0x0) {
    _free(pcVar5);
  }
  return this;
}

